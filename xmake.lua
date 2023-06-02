add_rules("mode.debug", "mode.release")

set_languages("c++17")
set_optimize("fastest")

add_repositories("local-repo https://github.com/plutolove/xmake-repo.git")


add_requires("libllvm 15.x", {configs = {shared = true}})

add_requires("fmt 10.0.0")
add_requires("abseil 20220623.0")
add_requires("spdlog v1.11.0")
add_requires("antlr4 v4.12.0")

rule("mlir_gen")
    before_build(function (target)
      print(os.getenv("LLVM_ROOT"))
      print(os.getenv("PATH"))
      -- os.vrun("mlir-tblgen  --gen-op-decls ./src/ops.td -o ./src/Ops.h.inc -I"..os.getenv("LLVM_ROOT").."/include/")
      -- os.vrun("mlir-tblgen  --gen-op-defs ./src/ops.td -o ./src/Ops.cpp.inc -I"..os.getenv("LLVM_ROOT").."/include/")
    end)

target("main")
    set_kind("binary")
    add_includedirs("./src")
    add_files("src/jit/*.cc")
    add_files("src/main.cc")
    add_packages("libllvm", "fmt", "abseil", "spdlog", "antlr4")
