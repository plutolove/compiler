#pragma once
#include <type_traits>

#include "parser/ast/ast_node.h"

namespace sql {

/*
EQ  : '=' | '==';
NEQ : '<>';
NEQ: '!=';
LT  : '<';
LTE : '<=' | '!>';
GT  : '>';
GTE : '>=' | '!<';

PLUS: '+';
MINUS: '-';
ASTERISK: '*';
SLASH: '/';
PERCENT: '%';
AMPERSAND: '&';
PIPE: '|';
HAT: '^';
*/
struct BinaryOp : public AstNode {
  enum class BinaryOpType : int16_t {
    Unknow,
    // cmp
    EQ,
    NEQ,
    LT,
    LTE,
    GT,
    GTE,
    // arithmetic
    PLUS,
    MINUS,
    ASTERISK,
    SLASH,
    PERCENT,
    AMPERSAND,
    PIPE,
    HAT,
    // logical
    AND,
    OR
  };
  BinaryOp(); 
  BinaryOp(const AstNodePtr& left, BinaryOpType opt, const AstNodePtr& right);
  AstNodePtr left_{nullptr};
  BinaryOpType opt_{BinaryOpType::Unknow};
  AstNodePtr right_{nullptr};
};

}  // namespace sql