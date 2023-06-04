#pragma once
#include "parser/ast/ast_node.h"

namespace sql {
// TILDE: '~';
struct UnaryOp : public AstNode {
  enum class UnaryOpType : int8_t {
    Unknow,
    // arithmetic
    PLUS,
    MINUS,
    TILDE,
    // logical
    NOT
  };

  UnaryOp();
  UnaryOp(UnaryOpType opt, const AstNodePtr& value);
  UnaryOpType opt_{UnaryOpType::Unknow};
  AstNodePtr value_{nullptr};
};

}  // namespace sql