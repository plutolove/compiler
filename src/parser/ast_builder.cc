#include "parser/ast_builder.h"

#include "parser/SQLParserLexer.h"
#include "parser/SQLParserParser.h"
#include "parser/ast/ast_node.h"
namespace sql {

AstNodePtr ASTBuilder::parse(const std::string& str) {
  antlr4::ANTLRInputStream inputStream(str);
  sql::SQLParserLexer lexer(&inputStream);
  antlr4::CommonTokenStream tokens(&lexer);
  sql::SQLParserParser parser(&tokens);
  auto root = parser.singleStatement();
  return typeVisit(root);
}

AstNodePtr ASTBuilder::typeVisit(antlr4::ParserRuleContext* ctx) {
  auto val = ctx->accept(this);
  return std::any_cast<AstNodePtr>(val);
}

}  // namespace sql