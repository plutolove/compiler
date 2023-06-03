
// Generated from ./src/parser/sql_parser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "sql_parserParser.h"


namespace sql {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by sql_parserParser.
 */
class  sql_parserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sql_parserParser.
   */
    virtual std::any visitSingleStatement(sql_parserParser::SingleStatementContext *context) = 0;

    virtual std::any visitSingleDataType(sql_parserParser::SingleDataTypeContext *context) = 0;

    virtual std::any visitStatementDefault(sql_parserParser::StatementDefaultContext *context) = 0;

    virtual std::any visitCommentSpec(sql_parserParser::CommentSpecContext *context) = 0;

    virtual std::any visitQuery(sql_parserParser::QueryContext *context) = 0;

    virtual std::any visitQueryOrganization(sql_parserParser::QueryOrganizationContext *context) = 0;

    virtual std::any visitQueryTermDefault(sql_parserParser::QueryTermDefaultContext *context) = 0;

    virtual std::any visitQueryPrimaryDefault(sql_parserParser::QueryPrimaryDefaultContext *context) = 0;

    virtual std::any visitTable(sql_parserParser::TableContext *context) = 0;

    virtual std::any visitSubquery(sql_parserParser::SubqueryContext *context) = 0;

    virtual std::any visitSortItem(sql_parserParser::SortItemContext *context) = 0;

    virtual std::any visitQuerySpecification(sql_parserParser::QuerySpecificationContext *context) = 0;

    virtual std::any visitSelectClause(sql_parserParser::SelectClauseContext *context) = 0;

    virtual std::any visitWhereClause(sql_parserParser::WhereClauseContext *context) = 0;

    virtual std::any visitFromClause(sql_parserParser::FromClauseContext *context) = 0;

    virtual std::any visitSetQuantifier(sql_parserParser::SetQuantifierContext *context) = 0;

    virtual std::any visitRelation(sql_parserParser::RelationContext *context) = 0;

    virtual std::any visitIdentifierList(sql_parserParser::IdentifierListContext *context) = 0;

    virtual std::any visitIdentifierSeq(sql_parserParser::IdentifierSeqContext *context) = 0;

    virtual std::any visitOrderedIdentifierList(sql_parserParser::OrderedIdentifierListContext *context) = 0;

    virtual std::any visitOrderedIdentifier(sql_parserParser::OrderedIdentifierContext *context) = 0;

    virtual std::any visitIdentifierCommentList(sql_parserParser::IdentifierCommentListContext *context) = 0;

    virtual std::any visitIdentifierComment(sql_parserParser::IdentifierCommentContext *context) = 0;

    virtual std::any visitTableName(sql_parserParser::TableNameContext *context) = 0;

    virtual std::any visitAliasedQuery(sql_parserParser::AliasedQueryContext *context) = 0;

    virtual std::any visitAliasedRelation(sql_parserParser::AliasedRelationContext *context) = 0;

    virtual std::any visitTableAlias(sql_parserParser::TableAliasContext *context) = 0;

    virtual std::any visitMultipartIdentifierList(sql_parserParser::MultipartIdentifierListContext *context) = 0;

    virtual std::any visitMultipartIdentifier(sql_parserParser::MultipartIdentifierContext *context) = 0;

    virtual std::any visitNamedExpression(sql_parserParser::NamedExpressionContext *context) = 0;

    virtual std::any visitNamedExpressionSeq(sql_parserParser::NamedExpressionSeqContext *context) = 0;

    virtual std::any visitExpression(sql_parserParser::ExpressionContext *context) = 0;

    virtual std::any visitLogicalNot(sql_parserParser::LogicalNotContext *context) = 0;

    virtual std::any visitPredicated(sql_parserParser::PredicatedContext *context) = 0;

    virtual std::any visitLogicalBinary(sql_parserParser::LogicalBinaryContext *context) = 0;

    virtual std::any visitPredicate(sql_parserParser::PredicateContext *context) = 0;

    virtual std::any visitValueExpressionDefault(sql_parserParser::ValueExpressionDefaultContext *context) = 0;

    virtual std::any visitComparison(sql_parserParser::ComparisonContext *context) = 0;

    virtual std::any visitArithmeticBinary(sql_parserParser::ArithmeticBinaryContext *context) = 0;

    virtual std::any visitArithmeticUnary(sql_parserParser::ArithmeticUnaryContext *context) = 0;

    virtual std::any visitStruct(sql_parserParser::StructContext *context) = 0;

    virtual std::any visitDereference(sql_parserParser::DereferenceContext *context) = 0;

    virtual std::any visitSimpleCase(sql_parserParser::SimpleCaseContext *context) = 0;

    virtual std::any visitColumnReference(sql_parserParser::ColumnReferenceContext *context) = 0;

    virtual std::any visitRowConstructor(sql_parserParser::RowConstructorContext *context) = 0;

    virtual std::any visitLast(sql_parserParser::LastContext *context) = 0;

    virtual std::any visitStar(sql_parserParser::StarContext *context) = 0;

    virtual std::any visitSubscript(sql_parserParser::SubscriptContext *context) = 0;

    virtual std::any visitSubqueryExpression(sql_parserParser::SubqueryExpressionContext *context) = 0;

    virtual std::any visitCurrentDatetime(sql_parserParser::CurrentDatetimeContext *context) = 0;

    virtual std::any visitCast(sql_parserParser::CastContext *context) = 0;

    virtual std::any visitConstantDefault(sql_parserParser::ConstantDefaultContext *context) = 0;

    virtual std::any visitParenthesizedExpression(sql_parserParser::ParenthesizedExpressionContext *context) = 0;

    virtual std::any visitFunctionCall(sql_parserParser::FunctionCallContext *context) = 0;

    virtual std::any visitSearchedCase(sql_parserParser::SearchedCaseContext *context) = 0;

    virtual std::any visitPosition(sql_parserParser::PositionContext *context) = 0;

    virtual std::any visitFirst(sql_parserParser::FirstContext *context) = 0;

    virtual std::any visitNullLiteral(sql_parserParser::NullLiteralContext *context) = 0;

    virtual std::any visitIntervalLiteral(sql_parserParser::IntervalLiteralContext *context) = 0;

    virtual std::any visitTypeConstructor(sql_parserParser::TypeConstructorContext *context) = 0;

    virtual std::any visitNumericLiteral(sql_parserParser::NumericLiteralContext *context) = 0;

    virtual std::any visitBooleanLiteral(sql_parserParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(sql_parserParser::StringLiteralContext *context) = 0;

    virtual std::any visitComparisonOperator(sql_parserParser::ComparisonOperatorContext *context) = 0;

    virtual std::any visitArithmeticOperator(sql_parserParser::ArithmeticOperatorContext *context) = 0;

    virtual std::any visitPredicateOperator(sql_parserParser::PredicateOperatorContext *context) = 0;

    virtual std::any visitBooleanValue(sql_parserParser::BooleanValueContext *context) = 0;

    virtual std::any visitInterval(sql_parserParser::IntervalContext *context) = 0;

    virtual std::any visitErrorCapturingMultiUnitsInterval(sql_parserParser::ErrorCapturingMultiUnitsIntervalContext *context) = 0;

    virtual std::any visitMultiUnitsInterval(sql_parserParser::MultiUnitsIntervalContext *context) = 0;

    virtual std::any visitErrorCapturingUnitToUnitInterval(sql_parserParser::ErrorCapturingUnitToUnitIntervalContext *context) = 0;

    virtual std::any visitUnitToUnitInterval(sql_parserParser::UnitToUnitIntervalContext *context) = 0;

    virtual std::any visitIntervalValue(sql_parserParser::IntervalValueContext *context) = 0;

    virtual std::any visitColPosition(sql_parserParser::ColPositionContext *context) = 0;

    virtual std::any visitComplexDataType(sql_parserParser::ComplexDataTypeContext *context) = 0;

    virtual std::any visitPrimitiveDataType(sql_parserParser::PrimitiveDataTypeContext *context) = 0;

    virtual std::any visitQualifiedColTypeWithPositionList(sql_parserParser::QualifiedColTypeWithPositionListContext *context) = 0;

    virtual std::any visitQualifiedColTypeWithPosition(sql_parserParser::QualifiedColTypeWithPositionContext *context) = 0;

    virtual std::any visitColTypeList(sql_parserParser::ColTypeListContext *context) = 0;

    virtual std::any visitColType(sql_parserParser::ColTypeContext *context) = 0;

    virtual std::any visitComplexColTypeList(sql_parserParser::ComplexColTypeListContext *context) = 0;

    virtual std::any visitComplexColType(sql_parserParser::ComplexColTypeContext *context) = 0;

    virtual std::any visitWhenClause(sql_parserParser::WhenClauseContext *context) = 0;

    virtual std::any visitWindowClause(sql_parserParser::WindowClauseContext *context) = 0;

    virtual std::any visitNamedWindow(sql_parserParser::NamedWindowContext *context) = 0;

    virtual std::any visitWindowRef(sql_parserParser::WindowRefContext *context) = 0;

    virtual std::any visitWindowDef(sql_parserParser::WindowDefContext *context) = 0;

    virtual std::any visitWindowFrame(sql_parserParser::WindowFrameContext *context) = 0;

    virtual std::any visitFrameBound(sql_parserParser::FrameBoundContext *context) = 0;

    virtual std::any visitQualifiedNameList(sql_parserParser::QualifiedNameListContext *context) = 0;

    virtual std::any visitFunctionName(sql_parserParser::FunctionNameContext *context) = 0;

    virtual std::any visitQualifiedName(sql_parserParser::QualifiedNameContext *context) = 0;

    virtual std::any visitErrorCapturingIdentifier(sql_parserParser::ErrorCapturingIdentifierContext *context) = 0;

    virtual std::any visitErrorIdent(sql_parserParser::ErrorIdentContext *context) = 0;

    virtual std::any visitRealIdent(sql_parserParser::RealIdentContext *context) = 0;

    virtual std::any visitIdentifier(sql_parserParser::IdentifierContext *context) = 0;

    virtual std::any visitUnquotedIdentifier(sql_parserParser::UnquotedIdentifierContext *context) = 0;

    virtual std::any visitQuotedIdentifierAlternative(sql_parserParser::QuotedIdentifierAlternativeContext *context) = 0;

    virtual std::any visitQuotedIdentifier(sql_parserParser::QuotedIdentifierContext *context) = 0;

    virtual std::any visitLegacyDecimalLiteral(sql_parserParser::LegacyDecimalLiteralContext *context) = 0;

    virtual std::any visitIntegerLiteral(sql_parserParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitBigIntLiteral(sql_parserParser::BigIntLiteralContext *context) = 0;

    virtual std::any visitSmallIntLiteral(sql_parserParser::SmallIntLiteralContext *context) = 0;

    virtual std::any visitTinyIntLiteral(sql_parserParser::TinyIntLiteralContext *context) = 0;

    virtual std::any visitDoubleLiteral(sql_parserParser::DoubleLiteralContext *context) = 0;

    virtual std::any visitBigDecimalLiteral(sql_parserParser::BigDecimalLiteralContext *context) = 0;

    virtual std::any visitAlterColumnAction(sql_parserParser::AlterColumnActionContext *context) = 0;

    virtual std::any visitAnsiNonReserved(sql_parserParser::AnsiNonReservedContext *context) = 0;

    virtual std::any visitStrictNonReserved(sql_parserParser::StrictNonReservedContext *context) = 0;

    virtual std::any visitNonReserved(sql_parserParser::NonReservedContext *context) = 0;


};

}  // namespace sql
