#include <chrono>
#include <iostream>
#include <thread>

#include "absl/flags/flag.h"
#include "absl/flags/internal/flag.h"
#include "absl/flags/parse.h"
#include "absl/random/random.h"
#include "absl/status/status.h"
#include "absl/status/statusor.h"
#include "absl/time/time.h"
#include "antlr4-runtime.h"
#include "common/log.h"
#include "fmt/format.h"
#include "jit/jit.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/MLIRContext.h"
ABSL_FLAG(std::string, conf, "default", "conf path");

int main(int argc, char** argvs) {
  absl::ParseCommandLine(argc, argvs);
  std::cout << "flags: " << absl::GetFlag(FLAGS_conf) << std::endl;
  INFO("test {}", "sdfgsdfg");
  WARN("sdfgsdfgsdfg");
  auto& jit = sql::SQLJit::getInstance();
  return 0;
}