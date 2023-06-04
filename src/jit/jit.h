#pragma once

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Target/TargetMachine.h>

#include <atomic>
#include <mutex>
#include <unordered_map>

#include "common/noncopyable.h"

namespace sql {
class JITModuleMemoryManager;
class JITSymbolResolver;
class JITCompiler;

class SQLJit : public noncopyable {
 public:
  struct CompiledModule {
    // module size
    size_t size;

    uint64_t identifier;

    // 生成的function
    std::unordered_map<std::string, void *> function_name_to_symbol;
  };

  SQLJit();
  ~SQLJit();

  static SQLJit &getInstance() {
    static SQLJit _instance;
    return _instance;
  }

  CompiledModule compileWithExtraIR(
      const std::string &path,
      std::function<void(llvm::Module &)> compile_function);

  CompiledModule compileModule(
      std::function<void(llvm::Module &)> compile_function);
  void deleteCompiledModule(const CompiledModule &module_info);
  void registerExternalSymbol(const std::string &symbol_name, void *address);

 private:
  std::unique_ptr<llvm::Module> createModuleForCompilation();
  CompiledModule compileModule(std::unique_ptr<llvm::Module> module);

  std::string getMangledName(const std::string &name_to_mangle) const;

  void runOptimizationPassesOnModule(llvm::Module &module) const;

  static std::unique_ptr<llvm::TargetMachine> getTargetMachine();

  llvm::LLVMContext context;
  std::unique_ptr<llvm::TargetMachine> machine;
  llvm::DataLayout layout;
  std::unique_ptr<JITCompiler> compiler;
  std::unique_ptr<JITSymbolResolver> symbol_resolver;

  std::unordered_map<uint64_t, std::unique_ptr<JITModuleMemoryManager>>
      module_identifier_to_memory_manager;

  uint64_t current_module_key = 0;
  std::atomic<size_t> compiled_code_size = 0;
  mutable std::mutex jit_lock;
};

}  // namespace sql