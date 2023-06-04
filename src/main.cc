#include <chrono>
#include <iostream>
#include <memory>
#include <thread>

#include "absl/flags/flag.h"
#include "absl/flags/internal/flag.h"
#include "absl/flags/parse.h"
#include "absl/random/random.h"
#include "absl/status/status.h"
#include "absl/status/statusor.h"
#include "absl/time/time.h"
#include "antlr4-runtime.h"
#include "common/exception.h"
#include "common/log.h"
#include "common/type_cast.h"
#include "fmt/format.h"
#include "jit/jit.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/MLIRContext.h"
#include "parser/SQLParserBaseVisitor.h"
#include "parser/ast/ast_node.h"
#include "parser/ast/binary_op.h"

ABSL_FLAG(std::string, conf, "default", "conf path");

int main(int argc, char** argvs) {
  absl::ParseCommandLine(argc, argvs);
  std::cout << "flags: " << absl::GetFlag(FLAGS_conf) << std::endl;
  INFO("test {}", "sdfgsdfg");
  WARN("sdfgsdfgsdfg");
  auto& jit = sql::SQLJit::getInstance();
  sql::AstNodePtr binary_op = std::make_shared<sql::BinaryOp>();
  INFO("{}", binary_op->toString());
  auto binary_ptr = type_cast<std::shared_ptr<sql::BinaryOp>>(binary_op);
  INFO("{}", binary_ptr->toString());
  return 0;
}