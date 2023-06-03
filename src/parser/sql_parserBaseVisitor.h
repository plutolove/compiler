
// Generated from ./src/parser/sql_parser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "sql_parserVisitor.h"


namespace sql {

/**
 * This class provides an empty implementation of sql_parserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sql_parserBaseVisitor : public sql_parserVisitor {
public:

  virtual std::any visitSingleStatement(sql_parserParser::SingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleDataType(sql_parserParser::SingleDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementDefault(sql_parserParser::StatementDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommentSpec(sql_parserParser::CommentSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(sql_parserParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryOrganization(sql_parserParser::QueryOrganizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryTermDefault(sql_parserParser::QueryTermDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryPrimaryDefault(sql_parserParser::QueryPrimaryDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable(sql_parserParser::TableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery(sql_parserParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortItem(sql_parserParser::SortItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuerySpecification(sql_parserParser::QuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectClause(sql_parserParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereClause(sql_parserParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromClause(sql_parserParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetQuantifier(sql_parserParser::SetQuantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelation(sql_parserParser::RelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(sql_parserParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierSeq(sql_parserParser::IdentifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderedIdentifierList(sql_parserParser::OrderedIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderedIdentifier(sql_parserParser::OrderedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierCommentList(sql_parserParser::IdentifierCommentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierComment(sql_parserParser::IdentifierCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableName(sql_parserParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasedQuery(sql_parserParser::AliasedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasedRelation(sql_parserParser::AliasedRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableAlias(sql_parserParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipartIdentifierList(sql_parserParser::MultipartIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipartIdentifier(sql_parserParser::MultipartIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedExpression(sql_parserParser::NamedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedExpressionSeq(sql_parserParser::NamedExpressionSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(sql_parserParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalNot(sql_parserParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicated(sql_parserParser::PredicatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalBinary(sql_parserParser::LogicalBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicate(sql_parserParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueExpressionDefault(sql_parserParser::ValueExpressionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(sql_parserParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticBinary(sql_parserParser::ArithmeticBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticUnary(sql_parserParser::ArithmeticUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStruct(sql_parserParser::StructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDereference(sql_parserParser::DereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCase(sql_parserParser::SimpleCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnReference(sql_parserParser::ColumnReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowConstructor(sql_parserParser::RowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLast(sql_parserParser::LastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStar(sql_parserParser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript(sql_parserParser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubqueryExpression(sql_parserParser::SubqueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCurrentDatetime(sql_parserParser::CurrentDatetimeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast(sql_parserParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDefault(sql_parserParser::ConstantDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedExpression(sql_parserParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(sql_parserParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchedCase(sql_parserParser::SearchedCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition(sql_parserParser::PositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst(sql_parserParser::FirstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLiteral(sql_parserParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalLiteral(sql_parserParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeConstructor(sql_parserParser::TypeConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericLiteral(sql_parserParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(sql_parserParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(sql_parserParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonOperator(sql_parserParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticOperator(sql_parserParser::ArithmeticOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicateOperator(sql_parserParser::PredicateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(sql_parserParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval(sql_parserParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingMultiUnitsInterval(sql_parserParser::ErrorCapturingMultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiUnitsInterval(sql_parserParser::MultiUnitsIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingUnitToUnitInterval(sql_parserParser::ErrorCapturingUnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitToUnitInterval(sql_parserParser::UnitToUnitIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalValue(sql_parserParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColPosition(sql_parserParser::ColPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexDataType(sql_parserParser::ComplexDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveDataType(sql_parserParser::PrimitiveDataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedColTypeWithPositionList(sql_parserParser::QualifiedColTypeWithPositionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedColTypeWithPosition(sql_parserParser::QualifiedColTypeWithPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColTypeList(sql_parserParser::ColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColType(sql_parserParser::ColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexColTypeList(sql_parserParser::ComplexColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexColType(sql_parserParser::ComplexColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenClause(sql_parserParser::WhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowClause(sql_parserParser::WindowClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedWindow(sql_parserParser::NamedWindowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowRef(sql_parserParser::WindowRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowDef(sql_parserParser::WindowDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowFrame(sql_parserParser::WindowFrameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrameBound(sql_parserParser::FrameBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedNameList(sql_parserParser::QualifiedNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionName(sql_parserParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedName(sql_parserParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorCapturingIdentifier(sql_parserParser::ErrorCapturingIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitErrorIdent(sql_parserParser::ErrorIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRealIdent(sql_parserParser::RealIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(sql_parserParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnquotedIdentifier(sql_parserParser::UnquotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifierAlternative(sql_parserParser::QuotedIdentifierAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifier(sql_parserParser::QuotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLegacyDecimalLiteral(sql_parserParser::LegacyDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(sql_parserParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigIntLiteral(sql_parserParser::BigIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSmallIntLiteral(sql_parserParser::SmallIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTinyIntLiteral(sql_parserParser::TinyIntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleLiteral(sql_parserParser::DoubleLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigDecimalLiteral(sql_parserParser::BigDecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterColumnAction(sql_parserParser::AlterColumnActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnsiNonReserved(sql_parserParser::AnsiNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrictNonReserved(sql_parserParser::StrictNonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(sql_parserParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace sql
