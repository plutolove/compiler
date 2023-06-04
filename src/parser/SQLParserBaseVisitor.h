
// Generated from ./src/parser/SQLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SQLParserVisitor.h"


namespace sql {

/**
 * This class provides an empty implementation of SQLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SQLParserBaseVisitor : public SQLParserVisitor {
public:

  virtual std::any visitSingleStatement(SQLParserParser::SingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementDefault(SQLParserParser::StatementDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(SQLParserParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryOrganization(SQLParserParser::QueryOrganizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryTermDefault(SQLParserParser::QueryTermDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryPrimaryDefault(SQLParserParser::QueryPrimaryDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery(SQLParserParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortItem(SQLParserParser::SortItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuerySpecification(SQLParserParser::QuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectClause(SQLParserParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereClause(SQLParserParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromClause(SQLParserParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetQuantifier(SQLParserParser::SetQuantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation(SQLParserParser::RelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(SQLParserParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierSeq(SQLParserParser::IdentifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderedIdentifierList(SQLParserParser::OrderedIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderedIdentifier(SQLParserParser::OrderedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableName(SQLParserParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasedQuery(SQLParserParser::AliasedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableAlias(SQLParserParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipartIdentifier(SQLParserParser::MultipartIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedExpression(SQLParserParser::NamedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedExpressionSeq(SQLParserParser::NamedExpressionSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(SQLParserParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalNot(SQLParserParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicated(SQLParserParser::PredicatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalBinary(SQLParserParser::LogicalBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicate(SQLParserParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueExpressionDefault(SQLParserParser::ValueExpressionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(SQLParserParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticBinary(SQLParserParser::ArithmeticBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticUnary(SQLParserParser::ArithmeticUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDereference(SQLParserParser::DereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCase(SQLParserParser::SimpleCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnReference(SQLParserParser::ColumnReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowConstructor(SQLParserParser::RowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLast(SQLParserParser::LastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStar(SQLParserParser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript(SQLParserParser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubqueryExpression(SQLParserParser::SubqueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast(SQLParserParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDefault(SQLParserParser::ConstantDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedExpression(SQLParserParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(SQLParserParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchedCase(SQLParserParser::SearchedCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition(SQLParserParser::PositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst(SQLParserParser::FirstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLiteral(SQLParserParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalLiteral(SQLParserParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeConstructor(SQLParserParser::TypeConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericLiteral(SQLParserParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(SQLParserParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(SQLParserParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonOperator(SQLParserParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticOperator(SQLParserParser::ArithmeticOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicateOperator(SQLParserParser::PredicateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(SQLParserParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval(SQLParserParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingMultiUnitsInterval(SQLParserParser::ErrorCapturingMultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiUnitsInterval(SQLParserParser::MultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingUnitToUnitInterval(SQLParserParser::ErrorCapturingUnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitToUnitInterval(SQLParserParser::UnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalValue(SQLParserParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexDataType(SQLParserParser::ComplexDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenClause(SQLParserParser::WhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedNameList(SQLParserParser::QualifiedNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionName(SQLParserParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedName(SQLParserParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(SQLParserParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnquotedIdentifier(SQLParserParser::UnquotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifierAlternative(SQLParserParser::QuotedIdentifierAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifier(SQLParserParser::QuotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLegacyDecimalLiteral(SQLParserParser::LegacyDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(SQLParserParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigIntLiteral(SQLParserParser::BigIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSmallIntLiteral(SQLParserParser::SmallIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTinyIntLiteral(SQLParserParser::TinyIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleLiteral(SQLParserParser::DoubleLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigDecimalLiteral(SQLParserParser::BigDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnsiNonReserved(SQLParserParser::AnsiNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrictNonReserved(SQLParserParser::StrictNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(SQLParserParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace sql
