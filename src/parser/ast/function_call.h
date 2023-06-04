#pragma once
#include <initializer_list>
#include <vector>

#include "parser/ast/ast_node.h"
namespace sql {

struct FunctionCall : public AstNode {
  FunctionCall();
  FunctionCall(const std::string& name, const std::vector<AstNodePtr>& args);
  FunctionCall(const std::string& name, std::initializer_list<AstNodePtr> args);

  std::string name_;
  std::vector<AstNodePtr> arguments_;
};

}  // namespace sql