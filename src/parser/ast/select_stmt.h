#pragma once
#include "parser/ast/ast_node.h"

namespace sql {

struct SelectStmt : AstNode {
  SelectStmt() : AstNode() {}
  virtual std::string toString() const;
};

}  // namespace sql