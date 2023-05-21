add_rules("mode.debug", "mode.release")

set_languages("c++17")
set_optimize("fastest")

add_repositories("local-repo https://github.com/plutolove/xmake-repo.git")


add_requires("libllvm 16.0.4", {configs = {shared = true}})

add_requires("fmt 10.0.0")
add_requires("abseil 20220623.0")
add_requires("spdlog v1.11.0")
add_requires("antlr4 v4.12.0")
-- on_load(function (package)
--   print(os.getenv("LLVM_ROOT"))
-- end)

target("main")
    set_kind("binary")
    --on_build(function (target, opt)
    --  print(os.getenv("LLVM_ROOT"))
    --  print(os.getenv("PATH"))
    --  os.vrun("mlir-tblgen --version")
    -- end)
    add_includedirs("./src")
    add_files("src/main.cc")
    add_packages("libllvm", "fmt", "abseil", "spdlog", "antlr4")