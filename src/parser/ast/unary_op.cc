#include "parser/ast/unary_op.h"

#include "parser/ast/ast_node.h"

namespace sql {

UnaryOp::UnaryOp() : AstNode(AstNodeType::UnaryOp) {}

UnaryOp::UnaryOp(UnaryOpType opt, const AstNodePtr& value)
    :AstNode(AstNodeType::UnaryOp), opt_(opt), value_(value) {}

}  // namespace sql