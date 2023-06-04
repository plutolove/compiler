
// Generated from ./src/parser/SQLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SQLParserParser.h"


namespace sql {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SQLParserParser.
 */
class  SQLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SQLParserParser.
   */
    virtual std::any visitSingleStatement(SQLParserParser::SingleStatementContext *context) = 0;

    virtual std::any visitStatementDefault(SQLParserParser::StatementDefaultContext *context) = 0;

    virtual std::any visitQuery(SQLParserParser::QueryContext *context) = 0;

    virtual std::any visitQueryOrganization(SQLParserParser::QueryOrganizationContext *context) = 0;

    virtual std::any visitQueryTermDefault(SQLParserParser::QueryTermDefaultContext *context) = 0;

    virtual std::any visitQueryPrimaryDefault(SQLParserParser::QueryPrimaryDefaultContext *context) = 0;

    virtual std::any visitSubquery(SQLParserParser::SubqueryContext *context) = 0;

    virtual std::any visitSortItem(SQLParserParser::SortItemContext *context) = 0;

    virtual std::any visitQuerySpecification(SQLParserParser::QuerySpecificationContext *context) = 0;

    virtual std::any visitSelectClause(SQLParserParser::SelectClauseContext *context) = 0;

    virtual std::any visitWhereClause(SQLParserParser::WhereClauseContext *context) = 0;

    virtual std::any visitFromClause(SQLParserParser::FromClauseContext *context) = 0;

    virtual std::any visitSetQuantifier(SQLParserParser::SetQuantifierContext *context) = 0;

    virtual std::any visitRelation(SQLParserParser::RelationContext *context) = 0;

    virtual std::any visitIdentifierList(SQLParserParser::IdentifierListContext *context) = 0;

    virtual std::any visitIdentifierSeq(SQLParserParser::IdentifierSeqContext *context) = 0;

    virtual std::any visitOrderedIdentifierList(SQLParserParser::OrderedIdentifierListContext *context) = 0;

    virtual std::any visitOrderedIdentifier(SQLParserParser::OrderedIdentifierContext *context) = 0;

    virtual std::any visitTableName(SQLParserParser::TableNameContext *context) = 0;

    virtual std::any visitAliasedQuery(SQLParserParser::AliasedQueryContext *context) = 0;

    virtual std::any visitTableAlias(SQLParserParser::TableAliasContext *context) = 0;

    virtual std::any visitMultipartIdentifier(SQLParserParser::MultipartIdentifierContext *context) = 0;

    virtual std::any visitNamedExpression(SQLParserParser::NamedExpressionContext *context) = 0;

    virtual std::any visitNamedExpressionSeq(SQLParserParser::NamedExpressionSeqContext *context) = 0;

    virtual std::any visitExpression(SQLParserParser::ExpressionContext *context) = 0;

    virtual std::any visitLogicalNot(SQLParserParser::LogicalNotContext *context) = 0;

    virtual std::any visitPredicated(SQLParserParser::PredicatedContext *context) = 0;

    virtual std::any visitLogicalBinary(SQLParserParser::LogicalBinaryContext *context) = 0;

    virtual std::any visitPredicate(SQLParserParser::PredicateContext *context) = 0;

    virtual std::any visitValueExpressionDefault(SQLParserParser::ValueExpressionDefaultContext *context) = 0;

    virtual std::any visitComparison(SQLParserParser::ComparisonContext *context) = 0;

    virtual std::any visitArithmeticBinary(SQLParserParser::ArithmeticBinaryContext *context) = 0;

    virtual std::any visitArithmeticUnary(SQLParserParser::ArithmeticUnaryContext *context) = 0;

    virtual std::any visitStruct(SQLParserParser::StructContext *context) = 0;

    virtual std::any visitDereference(SQLParserParser::DereferenceContext *context) = 0;

    virtual std::any visitSimpleCase(SQLParserParser::SimpleCaseContext *context) = 0;

    virtual std::any visitColumnReference(SQLParserParser::ColumnReferenceContext *context) = 0;

    virtual std::any visitRowConstructor(SQLParserParser::RowConstructorContext *context) = 0;

    virtual std::any visitLast(SQLParserParser::LastContext *context) = 0;

    virtual std::any visitStar(SQLParserParser::StarContext *context) = 0;

    virtual std::any visitSubscript(SQLParserParser::SubscriptContext *context) = 0;

    virtual std::any visitSubqueryExpression(SQLParserParser::SubqueryExpressionContext *context) = 0;

    virtual std::any visitCurrentDatetime(SQLParserParser::CurrentDatetimeContext *context) = 0;

    virtual std::any visitCast(SQLParserParser::CastContext *context) = 0;

    virtual std::any visitConstantDefault(SQLParserParser::ConstantDefaultContext *context) = 0;

    virtual std::any visitParenthesizedExpression(SQLParserParser::ParenthesizedExpressionContext *context) = 0;

    virtual std::any visitFunctionCall(SQLParserParser::FunctionCallContext *context) = 0;

    virtual std::any visitSearchedCase(SQLParserParser::SearchedCaseContext *context) = 0;

    virtual std::any visitPosition(SQLParserParser::PositionContext *context) = 0;

    virtual std::any visitFirst(SQLParserParser::FirstContext *context) = 0;

    virtual std::any visitNullLiteral(SQLParserParser::NullLiteralContext *context) = 0;

    virtual std::any visitIntervalLiteral(SQLParserParser::IntervalLiteralContext *context) = 0;

    virtual std::any visitTypeConstructor(SQLParserParser::TypeConstructorContext *context) = 0;

    virtual std::any visitNumericLiteral(SQLParserParser::NumericLiteralContext *context) = 0;

    virtual std::any visitBooleanLiteral(SQLParserParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(SQLParserParser::StringLiteralContext *context) = 0;

    virtual std::any visitComparisonOperator(SQLParserParser::ComparisonOperatorContext *context) = 0;

    virtual std::any visitArithmeticOperator(SQLParserParser::ArithmeticOperatorContext *context) = 0;

    virtual std::any visitPredicateOperator(SQLParserParser::PredicateOperatorContext *context) = 0;

    virtual std::any visitBooleanValue(SQLParserParser::BooleanValueContext *context) = 0;

    virtual std::any visitInterval(SQLParserParser::IntervalContext *context) = 0;

    virtual std::any visitErrorCapturingMultiUnitsInterval(SQLParserParser::ErrorCapturingMultiUnitsIntervalContext *context) = 0;

    virtual std::any visitMultiUnitsInterval(SQLParserParser::MultiUnitsIntervalContext *context) = 0;

    virtual std::any visitErrorCapturingUnitToUnitInterval(SQLParserParser::ErrorCapturingUnitToUnitIntervalContext *context) = 0;

    virtual std::any visitUnitToUnitInterval(SQLParserParser::UnitToUnitIntervalContext *context) = 0;

    virtual std::any visitIntervalValue(SQLParserParser::IntervalValueContext *context) = 0;

    virtual std::any visitComplexDataType(SQLParserParser::ComplexDataTypeContext *context) = 0;

    virtual std::any visitWhenClause(SQLParserParser::WhenClauseContext *context) = 0;

    virtual std::any visitQualifiedNameList(SQLParserParser::QualifiedNameListContext *context) = 0;

    virtual std::any visitFunctionName(SQLParserParser::FunctionNameContext *context) = 0;

    virtual std::any visitQualifiedName(SQLParserParser::QualifiedNameContext *context) = 0;

    virtual std::any visitIdentifier(SQLParserParser::IdentifierContext *context) = 0;

    virtual std::any visitUnquotedIdentifier(SQLParserParser::UnquotedIdentifierContext *context) = 0;

    virtual std::any visitQuotedIdentifierAlternative(SQLParserParser::QuotedIdentifierAlternativeContext *context) = 0;

    virtual std::any visitQuotedIdentifier(SQLParserParser::QuotedIdentifierContext *context) = 0;

    virtual std::any visitLegacyDecimalLiteral(SQLParserParser::LegacyDecimalLiteralContext *context) = 0;

    virtual std::any visitIntegerLiteral(SQLParserParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitBigIntLiteral(SQLParserParser::BigIntLiteralContext *context) = 0;

    virtual std::any visitSmallIntLiteral(SQLParserParser::SmallIntLiteralContext *context) = 0;

    virtual std::any visitTinyIntLiteral(SQLParserParser::TinyIntLiteralContext *context) = 0;

    virtual std::any visitDoubleLiteral(SQLParserParser::DoubleLiteralContext *context) = 0;

    virtual std::any visitBigDecimalLiteral(SQLParserParser::BigDecimalLiteralContext *context) = 0;

    virtual std::any visitAnsiNonReserved(SQLParserParser::AnsiNonReservedContext *context) = 0;

    virtual std::any visitStrictNonReserved(SQLParserParser::StrictNonReservedContext *context) = 0;

    virtual std::any visitNonReserved(SQLParserParser::NonReservedContext *context) = 0;


};

}  // namespace sql
