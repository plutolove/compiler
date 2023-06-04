#pragma once
#include "parser/ast/ast_node.h"

namespace sql {

struct SelectStmt : public AstNode {
  SelectStmt() : AstNode(AstNodeType::SelectStmt) {}
  virtual std::string toString() const;
};

}  // namespace sql