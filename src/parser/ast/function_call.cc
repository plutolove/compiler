#include "parser/ast/function_call.h"

#include "parser/ast/ast_node.h"

namespace sql {

FunctionCall::FunctionCall() : AstNode(AstNodeType::FunctionCall) {}

FunctionCall::FunctionCall(const std::string& name,
                           const std::vector<AstNodePtr>& args)
    : AstNode(AstNodeType::FunctionCall), name_(name), arguments_(args) {}

FunctionCall::FunctionCall(const std::string& name,
                           std::initializer_list<AstNodePtr> args)
    : AstNode(AstNodeType::FunctionCall), name_(name), arguments_(args) {}

}  // namespace sql