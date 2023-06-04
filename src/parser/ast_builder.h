#pragma once
#include "parser/SQLParserVisitor.h"
#include "parser/ast/ast_node.h"

namespace sql {

class ASTBuilder : public SQLParserVisitor {
 public:
  ASTBuilder() = default;
  AstNodePtr parse(const std::string& str);
  AstNodePtr typeVisit(antlr4::ParserRuleContext* ctx);
};

}  // namespace sql