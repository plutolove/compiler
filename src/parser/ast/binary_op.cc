#include "parser/ast/binary_op.h"

#include "parser/ast/ast_node.h"

namespace sql {
BinaryOp::BinaryOp() : AstNode(AstNodeType::BinaryOP) {}

BinaryOp::BinaryOp(const AstNodePtr& left, BinaryOpType opt,
                   const AstNodePtr& right)
    : AstNode(AstNodeType::BinaryOP), left_(left), opt_(opt), right_(right) {}

}  // namespace sql