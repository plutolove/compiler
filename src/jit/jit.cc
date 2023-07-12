#include "jit/jit.h"

#include <llvm/Analysis/TargetTransformInfo.h>
#include <llvm/ExecutionEngine/JITEventListener.h>
#include <llvm/ExecutionEngine/JITSymbol.h>
#include <llvm/ExecutionEngine/SectionMemoryManager.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/DataLayout.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Mangler.h>
#include <llvm/IR/Type.h>
#include <llvm/IRReader/IRReader.h>
#include <llvm/MC/SubtargetFeature.h>
#include <llvm/MC/TargetRegistry.h>
#include <llvm/Support/DynamicLibrary.h>
#include <llvm/Support/Host.h>
#include <llvm/Support/SmallVectorMemoryBuffer.h>
#include <llvm/Support/SourceMgr.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Transforms/IPO/PassManagerBuilder.h>
#include <sys/mman.h>
#include <unistd.h>

#include <fstream>
#include <iostream>
#include <unordered_map>
#include <vector>

#include "common/exception.h"
#include "fmt/format.h"

namespace sql {

size_t GetPageSize() { return sysconf(_SC_PAGESIZE); }

class JITCompiler {
 public:
  explicit JITCompiler(llvm::TargetMachine &target_machine_)
      : target_machine(target_machine_) {}

  std::unique_ptr<llvm::MemoryBuffer> compile(llvm::Module &module) {
    auto materialize_error = module.materializeAll();
    if (materialize_error) {
      std::string error_message;
      handleAllErrors(std::move(materialize_error),
                      [&](const llvm::ErrorInfoBase &error_info) {
                        error_message = error_info.message();
                      });
      ThrowException(-1, "Cannot materialize module: {}", error_message);
    }

    llvm::SmallVector<char, 4096> object_buffer;

    llvm::raw_svector_ostream object_stream(object_buffer);
    llvm::legacy::PassManager pass_manager;
    llvm::MCContext *machine_code_context = nullptr;

    if (target_machine.addPassesToEmitMC(pass_manager, machine_code_context,
                                         object_stream)) {
      ThrowException(-1, "MachineCode is not supported for the platform");
    }

    pass_manager.run(module);

    std::unique_ptr<llvm::MemoryBuffer> compiled_object_buffer =
        std::make_unique<llvm::SmallVectorMemoryBuffer>(
            std::move(object_buffer), "<in memory object compiled from " +
                                          module.getModuleIdentifier() + ">");

    return compiled_object_buffer;
  }

  ~JITCompiler() = default;

 private:
  llvm::TargetMachine &target_machine;
};

class PageArena : private noncopyable {
 public:
  PageArena() : page_size(GetPageSize()) {}

  char *allocate(size_t size, size_t alignment) {
    for (size_t i = 0; i < page_blocks.size(); ++i) {
      char *result = tryAllocateFromPageBlockWithIndex(size, alignment, i);
      if (result) return result;
    }

    allocateNextPageBlock(size);
    size_t allocated_page_index = page_blocks.size() - 1;
    char *result = tryAllocateFromPageBlockWithIndex(size, alignment,
                                                     allocated_page_index);
    assert(result);

    return result;
  }

  inline size_t getAllocatedSize() const { return allocated_size; }

  inline size_t getPageSize() const { return page_size; }

  ~PageArena() {
    protect(PROT_READ | PROT_WRITE);

    for (auto &page_block : page_blocks) free(page_block.base());
  }

  void protect(int protection_flags) {
    bool invalidate_cache = (protection_flags & PROT_EXEC);

    for (const auto &block : page_blocks) {
      int res = mprotect(block.base(), block.blockSize(), protection_flags);
      if (res != 0) {
        return;
      }

      if (invalidate_cache)
        llvm::sys::Memory::InvalidateInstructionCache(block.base(),
                                                      block.blockSize());
    }
  }

 private:
  struct PageBlock {
   public:
    PageBlock(void *pages_base_, size_t pages_size_, size_t page_size_)
        : pages_base(pages_base_),
          pages_size(pages_size_),
          page_size(page_size_) {}

    inline void *base() const { return pages_base; }
    inline size_t pagesSize() const { return pages_size; }
    inline size_t pageSize() const { return page_size; }
    inline size_t blockSize() const { return pages_size * page_size; }

   private:
    void *pages_base;
    size_t pages_size;
    size_t page_size;
  };

  std::vector<PageBlock> page_blocks;

  std::vector<size_t> page_blocks_allocated_size;

  size_t page_size = 0;

  size_t allocated_size = 0;

  char *tryAllocateFromPageBlockWithIndex(size_t size, size_t alignment,
                                          size_t page_block_index) {
    assert(page_block_index < page_blocks.size());
    auto &pages_block = page_blocks[page_block_index];

    size_t block_size = pages_block.blockSize();
    size_t &block_allocated_size = page_blocks_allocated_size[page_block_index];
    size_t block_free_size = block_size - block_allocated_size;

    uint8_t *pages_start = static_cast<uint8_t *>(pages_block.base());
    void *pages_offset = pages_start + block_allocated_size;

    auto *result = std::align(alignment, size, pages_offset, block_free_size);

    if (result) {
      block_allocated_size = reinterpret_cast<uint8_t *>(result) - pages_start;
      block_allocated_size += size;

      return static_cast<char *>(result);
    } else {
      return nullptr;
    }
  }

  void allocateNextPageBlock(size_t size) {
    size_t pages_to_allocate_size = ((size / page_size) + 1) * 2;
    size_t allocate_size = page_size * pages_to_allocate_size;

    void *buf = nullptr;
    int res = posix_memalign(&buf, page_size, allocate_size);

    if (res != 0) {
      return;
    }

    page_blocks.emplace_back(buf, pages_to_allocate_size, page_size);
    page_blocks_allocated_size.emplace_back(0);

    allocated_size += allocate_size;
  }
};

class JITModuleMemoryManager : public llvm::RTDyldMemoryManager {
 public:
  uint8_t *allocateCodeSection(uintptr_t size, unsigned alignment, unsigned,
                               llvm::StringRef) override {
    return reinterpret_cast<uint8_t *>(ex_page_arena.allocate(size, alignment));
  }

  uint8_t *allocateDataSection(uintptr_t size, unsigned alignment, unsigned,
                               llvm::StringRef, bool is_read_only) override {
    if (is_read_only)
      return reinterpret_cast<uint8_t *>(
          ro_page_arena.allocate(size, alignment));
    else
      return reinterpret_cast<uint8_t *>(
          rw_page_arena.allocate(size, alignment));
  }

  bool finalizeMemory(std::string *) override {
    ro_page_arena.protect(PROT_READ);
    ex_page_arena.protect(PROT_READ | PROT_EXEC);
    return true;
  }

  inline size_t allocatedSize() const {
    size_t data_size =
        rw_page_arena.getAllocatedSize() + ro_page_arena.getAllocatedSize();
    size_t code_size = ex_page_arena.getAllocatedSize();

    return data_size + code_size;
  }

 private:
  PageArena rw_page_arena;
  PageArena ro_page_arena;
  PageArena ex_page_arena;
};

class JITSymbolResolver : public llvm::LegacyJITSymbolResolver {
 public:
  llvm::JITSymbol findSymbolInLogicalDylib(const std::string &Name) override {
    auto symbol_address = reinterpret_cast<uint64_t>(
        llvm::sys::DynamicLibrary::SearchForAddressOfSymbol(Name));
    auto jit_symbol =
        llvm::JITSymbol(symbol_address, llvm::JITSymbolFlags::Exported);
    return jit_symbol;
  }

  llvm::JITSymbol findSymbol(const std::string &Name) override {
    auto address_it = symbol_name_to_symbol_address.find(Name);
    if (address_it == symbol_name_to_symbol_address.end()) {
      ThrowException(-1, "symbol not found {}", Name);
    }

    uint64_t symbol_address = reinterpret_cast<uint64_t>(address_it->second);
    auto jit_symbol =
        llvm::JITSymbol(symbol_address, llvm::JITSymbolFlags::None);
    return jit_symbol;
  }

  void registerSymbol(const std::string &symbol_name, void *symbol) {
    symbol_name_to_symbol_address[symbol_name] = symbol;
  }

  ~JITSymbolResolver() override = default;

 private:
  std::unordered_map<std::string, void *> symbol_name_to_symbol_address;
};

SQLJit::SQLJit()
    : machine(getTargetMachine()),
      layout(machine->createDataLayout()),
      compiler(std::make_unique<JITCompiler>(*machine)),
      symbol_resolver(std::make_unique<JITSymbolResolver>()) {
  symbol_resolver->registerSymbol("memset", reinterpret_cast<void *>(&memset));
  symbol_resolver->registerSymbol("memcpy", reinterpret_cast<void *>(&memcpy));
  symbol_resolver->registerSymbol("memcmp", reinterpret_cast<void *>(&memcmp));
}

SQLJit::~SQLJit() = default;

SQLJit::CompiledModule SQLJit::compileWithExtraIR(
    const std::string &path,
    std::function<void(llvm::Module &)> compile_function) {
  std::lock_guard<std::mutex> lock(jit_lock);

  llvm::SMDiagnostic error;
  // load ir
  auto module = llvm::parseIRFile(path, error, context);
  compile_function(*module);
  auto module_info = compileModule(std::move(module));

  ++current_module_key;
  return module_info;
}

SQLJit::CompiledModule SQLJit::compileModule(
    std::function<void(llvm::Module &)> compile_function) {
  std::lock_guard<std::mutex> lock(jit_lock);

  auto module = createModuleForCompilation();
  compile_function(*module);
  auto module_info = compileModule(std::move(module));

  ++current_module_key;
  return module_info;
}

std::unique_ptr<llvm::Module> SQLJit::createModuleForCompilation() {
  std::unique_ptr<llvm::Module> module = std::make_unique<llvm::Module>(
      "jit" + std::to_string(current_module_key), context);
  module->setDataLayout(layout);
  module->setTargetTriple(machine->getTargetTriple().getTriple());

  return module;
}

SQLJit::CompiledModule SQLJit::compileModule(
    std::unique_ptr<llvm::Module> module) {
  runOptimizationPassesOnModule(*module);

  auto buffer = compiler->compile(*module);

  llvm::Expected<std::unique_ptr<llvm::object::ObjectFile>> object =
      llvm::object::ObjectFile::createObjectFile(*buffer);

  if (!object) {
    std::string error_message;
    handleAllErrors(object.takeError(),
                    [&](const llvm::ErrorInfoBase &error_info) {
                      error_message = error_info.message();
                    });
    ThrowException(-1, "Cannot create object file from compiled buffer: {}",
                   error_message);
  }

  std::unique_ptr<JITModuleMemoryManager> module_memory_manager =
      std::make_unique<JITModuleMemoryManager>();
  llvm::RuntimeDyld dynamic_linker = {*module_memory_manager, *symbol_resolver};

  std::unique_ptr<llvm::RuntimeDyld::LoadedObjectInfo> linked_object =
      dynamic_linker.loadObject(*object.get());

  dynamic_linker.resolveRelocations();
  module_memory_manager->finalizeMemory(nullptr);

  CompiledModule compiled_module;

  for (const auto &function : *module) {
    if (function.isDeclaration()) continue;
    if (function.isDiscardableIfUnused()) continue;

    auto function_name = std::string(function.getName());

    auto mangled_name = getMangledName(function_name);
    auto jit_symbol = dynamic_linker.getSymbol(mangled_name);
    if (not jit_symbol)
      ThrowException(-1, "not found symbol {} after compilation",
                     function_name);
    auto *jit_symbol_address =
        reinterpret_cast<void *>(jit_symbol.getAddress());
    compiled_module.function_name_to_symbol.emplace(std::move(function_name),
                                                    jit_symbol_address);
  }

  compiled_module.size = module_memory_manager->allocatedSize();
  compiled_module.identifier = current_module_key;

  module_identifier_to_memory_manager[current_module_key] =
      std::move(module_memory_manager);

  compiled_code_size.fetch_add(compiled_module.size, std::memory_order_relaxed);

  return compiled_module;
}

void SQLJit::deleteCompiledModule(const SQLJit::CompiledModule &module) {
  std::lock_guard<std::mutex> lock(jit_lock);

  auto module_it = module_identifier_to_memory_manager.find(module.identifier);
  if (module_it == module_identifier_to_memory_manager.end()) {
    ThrowException(-1, "module not found");
  }
  module_identifier_to_memory_manager.erase(module_it);
  compiled_code_size.fetch_sub(module.size, std::memory_order_relaxed);
}

void SQLJit::registerExternalSymbol(const std::string &symbol_name,
                                    void *address) {
  std::lock_guard<std::mutex> lock(jit_lock);
  symbol_resolver->registerSymbol(symbol_name, address);
}

std::string SQLJit::getMangledName(const std::string &name_to_mangle) const {
  std::string mangled_name;
  llvm::raw_string_ostream mangled_name_stream(mangled_name);
  llvm::Mangler::getNameWithPrefix(mangled_name_stream, name_to_mangle, layout);
  mangled_name_stream.flush();

  return mangled_name;
}

void SQLJit::runOptimizationPassesOnModule(llvm::Module &module) const {
  llvm::PassManagerBuilder pass_manager_builder;
  llvm::legacy::PassManager mpm;
  llvm::legacy::FunctionPassManager fpm(&module);
  pass_manager_builder.OptLevel = 3;
  pass_manager_builder.SLPVectorize = true;
  pass_manager_builder.LoopVectorize = true;
  pass_manager_builder.RerollLoops = true;
  pass_manager_builder.VerifyInput = true;
  pass_manager_builder.VerifyOutput = true;
  machine->adjustPassManager(pass_manager_builder);

  fpm.add(llvm::createTargetTransformInfoWrapperPass(
      machine->getTargetIRAnalysis()));
  mpm.add(llvm::createTargetTransformInfoWrapperPass(
      machine->getTargetIRAnalysis()));

  pass_manager_builder.populateFunctionPassManager(fpm);
  pass_manager_builder.populateModulePassManager(mpm);

  fpm.doInitialization();
  for (auto &function : module) fpm.run(function);
  fpm.doFinalization();

  mpm.run(module);
}

std::unique_ptr<llvm::TargetMachine> SQLJit::getTargetMachine() {
  static std::once_flag llvm_target_initialized;
  std::call_once(llvm_target_initialized, []() {
    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    std::string error;
    llvm::sys::DynamicLibrary::getPermanentLibrary(nullptr);
  });

  std::string error;
  auto cpu = llvm::sys::getHostCPUName();
  auto triple = llvm::sys::getProcessTriple();
  const auto *target = llvm::TargetRegistry::lookupTarget(triple, error);
  if (!target) {
    ThrowException(-1, "Cannot find target triple");
  }

  llvm::SubtargetFeatures features;
  llvm::StringMap<bool> feature_map;
  if (llvm::sys::getHostCPUFeatures(feature_map))
    for (auto &f : feature_map) features.AddFeature(f.first(), f.second);

  llvm::TargetOptions options;

  bool jit = true;
  auto *target_machine = target->createTargetMachine(
      triple, cpu, features.getString(), options, llvm::None, llvm::None,
      llvm::CodeGenOpt::Aggressive, jit);

  if (!target_machine) {
    ThrowException(-1, "Cannot create target machine");
  }

  return std::unique_ptr<llvm::TargetMachine>(target_machine);
}

}  // namespace sql
