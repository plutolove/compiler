
// Generated from ./src/parser/sql_parser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace sql {


class  sql_parserParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, ADD = 9, AFTER = 10, ALL = 11, ALTER = 12, ANALYZE = 13, AND = 14, 
    ANTI = 15, ANY = 16, ARCHIVE = 17, ARRAY = 18, AS = 19, ASC = 20, AT = 21, 
    AUTHORIZATION = 22, BETWEEN = 23, BOTH = 24, BUCKET = 25, BUCKETS = 26, 
    BY = 27, CACHE = 28, CASCADE = 29, CASE = 30, CAST = 31, CHANGE = 32, 
    CHECK = 33, CLEAR = 34, CLUSTER = 35, CLUSTERED = 36, CODEGEN = 37, 
    COLLATE = 38, COLLECTION = 39, COLUMN = 40, COLUMNS = 41, COMMENT = 42, 
    COMMIT = 43, COMPACT = 44, COMPACTIONS = 45, COMPUTE = 46, CONCATENATE = 47, 
    CONSTRAINT = 48, COST = 49, CREATE = 50, CROSS = 51, CUBE = 52, CURRENT = 53, 
    CURRENT_DATE = 54, CURRENT_TIME = 55, CURRENT_TIMESTAMP = 56, CURRENT_USER = 57, 
    DATA = 58, DATABASE = 59, DATABASES = 60, DBPROPERTIES = 61, DEFINED = 62, 
    DELETE = 63, DELIMITED = 64, DESC = 65, DESCRIBE = 66, DFS = 67, DIRECTORIES = 68, 
    DIRECTORY = 69, DISTINCT = 70, DISTRIBUTE = 71, DIV = 72, DROP = 73, 
    ELSE = 74, END = 75, ESCAPE = 76, ESCAPED = 77, EXCEPT = 78, EXCHANGE = 79, 
    EXISTS = 80, EXPLAIN = 81, EXPORT = 82, EXTENDED = 83, EXTERNAL = 84, 
    EXTRACT = 85, FALSE = 86, FETCH = 87, FIELDS = 88, FILTER = 89, FILEFORMAT = 90, 
    FIRST = 91, FOLLOWING = 92, FOR = 93, FOREIGN = 94, FORMAT = 95, FORMATTED = 96, 
    FROM = 97, FULL = 98, FUNCTION = 99, FUNCTIONS = 100, GLOBAL = 101, 
    GRANT = 102, GROUP = 103, GROUPING = 104, HAVING = 105, IF = 106, IGNORE = 107, 
    IMPORT = 108, IN = 109, INDEX = 110, INDEXES = 111, INNER = 112, INPATH = 113, 
    INPUTFORMAT = 114, INSERT = 115, INTERSECT = 116, INTERVAL = 117, INTO = 118, 
    IS = 119, ITEMS = 120, JOIN = 121, KEYS = 122, LAST = 123, LATERAL = 124, 
    LAZY = 125, LEADING = 126, LEFT = 127, LIKE = 128, LIMIT = 129, LINES = 130, 
    LIST = 131, LOAD = 132, LOCAL = 133, LOCATION = 134, LOCK = 135, LOCKS = 136, 
    LOGICAL = 137, MACRO = 138, MAP = 139, MATCHED = 140, MERGE = 141, MSCK = 142, 
    NAMESPACE = 143, NAMESPACES = 144, NATURAL = 145, NO = 146, NOT = 147, 
    NULL_ = 148, NULLS = 149, OF = 150, ON = 151, ONLY = 152, OPTION = 153, 
    OPTIONS = 154, OR = 155, ORDER = 156, OUT = 157, OUTER = 158, OUTPUTFORMAT = 159, 
    OVER = 160, OVERLAPS = 161, OVERLAY = 162, OVERWRITE = 163, PARTITION = 164, 
    PARTITIONED = 165, PARTITIONS = 166, PERCENTLIT = 167, PIVOT = 168, 
    PLACING = 169, POSITION = 170, PRECEDING = 171, PRIMARY = 172, PRINCIPALS = 173, 
    PROPERTIES = 174, PURGE = 175, QUERY = 176, RANGE = 177, RECORDREADER = 178, 
    RECORDWRITER = 179, RECOVER = 180, REDUCE = 181, REFERENCES = 182, REFRESH = 183, 
    RENAME = 184, REPAIR = 185, REPLACE = 186, RESET = 187, RESTRICT = 188, 
    REVOKE = 189, RIGHT = 190, RLIKE = 191, ROLE = 192, ROLES = 193, ROLLBACK = 194, 
    ROLLUP = 195, ROW = 196, ROWS = 197, SCHEMA = 198, SELECT = 199, SEMI = 200, 
    SEPARATED = 201, SERDE = 202, SERDEPROPERTIES = 203, SESSION_USER = 204, 
    SET = 205, SETMINUS = 206, SETS = 207, SHOW = 208, SKEWED = 209, SOME = 210, 
    SORT = 211, SORTED = 212, START = 213, STATISTICS = 214, STORED = 215, 
    STRATIFY = 216, STRUCT = 217, SUBSTR = 218, SUBSTRING = 219, TABLE = 220, 
    TABLES = 221, TABLESAMPLE = 222, TBLPROPERTIES = 223, TEMPORARY = 224, 
    TERMINATED = 225, THEN = 226, TO = 227, TOUCH = 228, TRAILING = 229, 
    TRANSACTION = 230, TRANSACTIONS = 231, TRANSFORM = 232, TRIM = 233, 
    TRUE = 234, TRUNCATE = 235, TYPE = 236, UNARCHIVE = 237, UNBOUNDED = 238, 
    UNCACHE = 239, UNION = 240, UNIQUE = 241, UNKNOWN = 242, UNLOCK = 243, 
    UNSET = 244, UPDATE = 245, USE = 246, USER = 247, USING = 248, VALUES = 249, 
    VIEW = 250, VIEWS = 251, WHEN = 252, WHERE = 253, WINDOW = 254, WITH = 255, 
    EQ = 256, NSEQ = 257, NEQ = 258, NEQJ = 259, LT = 260, LTE = 261, GT = 262, 
    GTE = 263, PLUS = 264, MINUS = 265, ASTERISK = 266, SLASH = 267, PERCENT = 268, 
    TILDE = 269, AMPERSAND = 270, PIPE = 271, CONCAT_PIPE = 272, HAT = 273, 
    STRING = 274, BIGINT_LITERAL = 275, SMALLINT_LITERAL = 276, TINYINT_LITERAL = 277, 
    INTEGER_VALUE = 278, EXPONENT_VALUE = 279, DECIMAL_VALUE = 280, DOUBLE_LITERAL = 281, 
    BIGDECIMAL_LITERAL = 282, IDENTIFIER = 283, BACKQUOTED_IDENTIFIER = 284, 
    SIMPLE_COMMENT = 285, BRACKETED_EMPTY_COMMENT = 286, BRACKETED_COMMENT = 287, 
    WS = 288, UNRECOGNIZED = 289
  };

  enum {
    RuleSingleStatement = 0, RuleSingleDataType = 1, RuleStatement = 2, 
    RuleCommentSpec = 3, RuleQuery = 4, RuleQueryOrganization = 5, RuleQueryTerm = 6, 
    RuleQueryPrimary = 7, RuleSortItem = 8, RuleQuerySpecification = 9, 
    RuleSelectClause = 10, RuleWhereClause = 11, RuleFromClause = 12, RuleSetQuantifier = 13, 
    RuleRelation = 14, RuleIdentifierList = 15, RuleIdentifierSeq = 16, 
    RuleOrderedIdentifierList = 17, RuleOrderedIdentifier = 18, RuleIdentifierCommentList = 19, 
    RuleIdentifierComment = 20, RuleRelationPrimary = 21, RuleTableAlias = 22, 
    RuleMultipartIdentifierList = 23, RuleMultipartIdentifier = 24, RuleNamedExpression = 25, 
    RuleNamedExpressionSeq = 26, RuleExpression = 27, RuleBooleanExpression = 28, 
    RulePredicate = 29, RuleValueExpression = 30, RulePrimaryExpression = 31, 
    RuleConstant = 32, RuleComparisonOperator = 33, RuleArithmeticOperator = 34, 
    RulePredicateOperator = 35, RuleBooleanValue = 36, RuleInterval = 37, 
    RuleErrorCapturingMultiUnitsInterval = 38, RuleMultiUnitsInterval = 39, 
    RuleErrorCapturingUnitToUnitInterval = 40, RuleUnitToUnitInterval = 41, 
    RuleIntervalValue = 42, RuleColPosition = 43, RuleDataType = 44, RuleQualifiedColTypeWithPositionList = 45, 
    RuleQualifiedColTypeWithPosition = 46, RuleColTypeList = 47, RuleColType = 48, 
    RuleComplexColTypeList = 49, RuleComplexColType = 50, RuleWhenClause = 51, 
    RuleWindowClause = 52, RuleNamedWindow = 53, RuleWindowSpec = 54, RuleWindowFrame = 55, 
    RuleFrameBound = 56, RuleQualifiedNameList = 57, RuleFunctionName = 58, 
    RuleQualifiedName = 59, RuleErrorCapturingIdentifier = 60, RuleErrorCapturingIdentifierExtra = 61, 
    RuleIdentifier = 62, RuleStrictIdentifier = 63, RuleQuotedIdentifier = 64, 
    RuleNumber = 65, RuleAlterColumnAction = 66, RuleAnsiNonReserved = 67, 
    RuleStrictNonReserved = 68, RuleNonReserved = 69
  };

  explicit sql_parserParser(antlr4::TokenStream *input);

  sql_parserParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~sql_parserParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SingleStatementContext;
  class SingleDataTypeContext;
  class StatementContext;
  class CommentSpecContext;
  class QueryContext;
  class QueryOrganizationContext;
  class QueryTermContext;
  class QueryPrimaryContext;
  class SortItemContext;
  class QuerySpecificationContext;
  class SelectClauseContext;
  class WhereClauseContext;
  class FromClauseContext;
  class SetQuantifierContext;
  class RelationContext;
  class IdentifierListContext;
  class IdentifierSeqContext;
  class OrderedIdentifierListContext;
  class OrderedIdentifierContext;
  class IdentifierCommentListContext;
  class IdentifierCommentContext;
  class RelationPrimaryContext;
  class TableAliasContext;
  class MultipartIdentifierListContext;
  class MultipartIdentifierContext;
  class NamedExpressionContext;
  class NamedExpressionSeqContext;
  class ExpressionContext;
  class BooleanExpressionContext;
  class PredicateContext;
  class ValueExpressionContext;
  class PrimaryExpressionContext;
  class ConstantContext;
  class ComparisonOperatorContext;
  class ArithmeticOperatorContext;
  class PredicateOperatorContext;
  class BooleanValueContext;
  class IntervalContext;
  class ErrorCapturingMultiUnitsIntervalContext;
  class MultiUnitsIntervalContext;
  class ErrorCapturingUnitToUnitIntervalContext;
  class UnitToUnitIntervalContext;
  class IntervalValueContext;
  class ColPositionContext;
  class DataTypeContext;
  class QualifiedColTypeWithPositionListContext;
  class QualifiedColTypeWithPositionContext;
  class ColTypeListContext;
  class ColTypeContext;
  class ComplexColTypeListContext;
  class ComplexColTypeContext;
  class WhenClauseContext;
  class WindowClauseContext;
  class NamedWindowContext;
  class WindowSpecContext;
  class WindowFrameContext;
  class FrameBoundContext;
  class QualifiedNameListContext;
  class FunctionNameContext;
  class QualifiedNameContext;
  class ErrorCapturingIdentifierContext;
  class ErrorCapturingIdentifierExtraContext;
  class IdentifierContext;
  class StrictIdentifierContext;
  class QuotedIdentifierContext;
  class NumberContext;
  class AlterColumnActionContext;
  class AnsiNonReservedContext;
  class StrictNonReservedContext;
  class NonReservedContext; 

  class  SingleStatementContext : public antlr4::ParserRuleContext {
  public:
    SingleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleStatementContext* singleStatement();

  class  SingleDataTypeContext : public antlr4::ParserRuleContext {
  public:
    SingleDataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleDataTypeContext* singleDataType();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatementDefaultContext : public StatementContext {
  public:
    StatementDefaultContext(StatementContext *ctx);

    QueryContext *query();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  CommentSpecContext : public antlr4::ParserRuleContext {
  public:
    CommentSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentSpecContext* commentSpec();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryTermContext *queryTerm();
    QueryOrganizationContext *queryOrganization();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  QueryOrganizationContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::SortItemContext *sortItemContext = nullptr;
    std::vector<SortItemContext *> order;
    std::vector<SortItemContext *> sort;
    sql_parserParser::ExpressionContext *limit = nullptr;
    QueryOrganizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<SortItemContext *> sortItem();
    SortItemContext* sortItem(size_t i);
    antlr4::tree::TerminalNode *ALL();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryOrganizationContext* queryOrganization();

  class  QueryTermContext : public antlr4::ParserRuleContext {
  public:
    QueryTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryTermContext() = default;
    void copyFrom(QueryTermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QueryTermDefaultContext : public QueryTermContext {
  public:
    QueryTermDefaultContext(QueryTermContext *ctx);

    QueryPrimaryContext *queryPrimary();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryTermContext* queryTerm();

  class  QueryPrimaryContext : public antlr4::ParserRuleContext {
  public:
    QueryPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryPrimaryContext() = default;
    void copyFrom(QueryPrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryContext : public QueryPrimaryContext {
  public:
    SubqueryContext(QueryPrimaryContext *ctx);

    QueryContext *query();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QueryPrimaryDefaultContext : public QueryPrimaryContext {
  public:
    QueryPrimaryDefaultContext(QueryPrimaryContext *ctx);

    QuerySpecificationContext *querySpecification();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableContext : public QueryPrimaryContext {
  public:
    TableContext(QueryPrimaryContext *ctx);

    antlr4::tree::TerminalNode *TABLE();
    MultipartIdentifierContext *multipartIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryPrimaryContext* queryPrimary();

  class  SortItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ordering = nullptr;
    antlr4::Token *nullOrder = nullptr;
    SortItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *FIRST();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SortItemContext* sortItem();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectClauseContext *selectClause();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class  SelectClauseContext : public antlr4::ParserRuleContext {
  public:
    SelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    NamedExpressionSeqContext *namedExpressionSeq();
    SetQuantifierContext *setQuantifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectClauseContext* selectClause();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    std::vector<RelationContext *> relation();
    RelationContext* relation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  SetQuantifierContext : public antlr4::ParserRuleContext {
  public:
    SetQuantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetQuantifierContext* setQuantifier();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationPrimaryContext *relationPrimary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationContext* relation();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSeqContext *identifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  IdentifierSeqContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ErrorCapturingIdentifierContext *errorCapturingIdentifierContext = nullptr;
    std::vector<ErrorCapturingIdentifierContext *> ident;
    IdentifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ErrorCapturingIdentifierContext *> errorCapturingIdentifier();
    ErrorCapturingIdentifierContext* errorCapturingIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierSeqContext* identifierSeq();

  class  OrderedIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    OrderedIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrderedIdentifierContext *> orderedIdentifier();
    OrderedIdentifierContext* orderedIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderedIdentifierListContext* orderedIdentifierList();

  class  OrderedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ErrorCapturingIdentifierContext *ident = nullptr;
    antlr4::Token *ordering = nullptr;
    OrderedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderedIdentifierContext* orderedIdentifier();

  class  IdentifierCommentListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierCommentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierCommentContext *> identifierComment();
    IdentifierCommentContext* identifierComment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierCommentListContext* identifierCommentList();

  class  IdentifierCommentContext : public antlr4::ParserRuleContext {
  public:
    IdentifierCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    CommentSpecContext *commentSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierCommentContext* identifierComment();

  class  RelationPrimaryContext : public antlr4::ParserRuleContext {
  public:
    RelationPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RelationPrimaryContext() = default;
    void copyFrom(RelationPrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AliasedRelationContext : public RelationPrimaryContext {
  public:
    AliasedRelationContext(RelationPrimaryContext *ctx);

    RelationContext *relation();
    TableAliasContext *tableAlias();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AliasedQueryContext : public RelationPrimaryContext {
  public:
    AliasedQueryContext(RelationPrimaryContext *ctx);

    QueryContext *query();
    TableAliasContext *tableAlias();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableNameContext : public RelationPrimaryContext {
  public:
    TableNameContext(RelationPrimaryContext *ctx);

    MultipartIdentifierContext *multipartIdentifier();
    TableAliasContext *tableAlias();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RelationPrimaryContext* relationPrimary();

  class  TableAliasContext : public antlr4::ParserRuleContext {
  public:
    TableAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StrictIdentifierContext *strictIdentifier();
    antlr4::tree::TerminalNode *AS();
    IdentifierListContext *identifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasContext* tableAlias();

  class  MultipartIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    MultipartIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultipartIdentifierContext *> multipartIdentifier();
    MultipartIdentifierContext* multipartIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipartIdentifierListContext* multipartIdentifierList();

  class  MultipartIdentifierContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ErrorCapturingIdentifierContext *errorCapturingIdentifierContext = nullptr;
    std::vector<ErrorCapturingIdentifierContext *> parts;
    MultipartIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ErrorCapturingIdentifierContext *> errorCapturingIdentifier();
    ErrorCapturingIdentifierContext* errorCapturingIdentifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipartIdentifierContext* multipartIdentifier();

  class  NamedExpressionContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ErrorCapturingIdentifierContext *name = nullptr;
    NamedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *AS();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedExpressionContext* namedExpression();

  class  NamedExpressionSeqContext : public antlr4::ParserRuleContext {
  public:
    NamedExpressionSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedExpressionSeqContext* namedExpressionSeq();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanExpressionContext *booleanExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  BooleanExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleanExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanExpressionContext() = default;
    void copyFrom(BooleanExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalNotContext : public BooleanExpressionContext {
  public:
    LogicalNotContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    BooleanExpressionContext *booleanExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PredicatedContext : public BooleanExpressionContext {
  public:
    PredicatedContext(BooleanExpressionContext *ctx);

    ValueExpressionContext *valueExpression();
    PredicateContext *predicate();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalBinaryContext : public BooleanExpressionContext {
  public:
    LogicalBinaryContext(BooleanExpressionContext *ctx);

    sql_parserParser::BooleanExpressionContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    sql_parserParser::BooleanExpressionContext *right = nullptr;
    std::vector<BooleanExpressionContext *> booleanExpression();
    BooleanExpressionContext* booleanExpression(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanExpressionContext* booleanExpression();
  BooleanExpressionContext* booleanExpression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *kind = nullptr;
    sql_parserParser::ValueExpressionContext *lower = nullptr;
    sql_parserParser::ValueExpressionContext *upper = nullptr;
    sql_parserParser::ValueExpressionContext *pattern = nullptr;
    antlr4::Token *escapeChar = nullptr;
    sql_parserParser::ValueExpressionContext *right = nullptr;
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *NOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *IN();
    QueryContext *query();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  ValueExpressionContext : public antlr4::ParserRuleContext {
  public:
    ValueExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueExpressionContext() = default;
    void copyFrom(ValueExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueExpressionDefaultContext : public ValueExpressionContext {
  public:
    ValueExpressionDefaultContext(ValueExpressionContext *ctx);

    PrimaryExpressionContext *primaryExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonContext : public ValueExpressionContext {
  public:
    ComparisonContext(ValueExpressionContext *ctx);

    sql_parserParser::ValueExpressionContext *left = nullptr;
    sql_parserParser::ValueExpressionContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticBinaryContext : public ValueExpressionContext {
  public:
    ArithmeticBinaryContext(ValueExpressionContext *ctx);

    sql_parserParser::ValueExpressionContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    sql_parserParser::ValueExpressionContext *right = nullptr;
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *CONCAT_PIPE();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *HAT();
    antlr4::tree::TerminalNode *PIPE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticUnaryContext : public ValueExpressionContext {
  public:
    ArithmeticUnaryContext(ValueExpressionContext *ctx);

    antlr4::Token *operator_ = nullptr;
    ValueExpressionContext *valueExpression();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *TILDE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueExpressionContext* valueExpression();
  ValueExpressionContext* valueExpression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryExpressionContext() = default;
    void copyFrom(PrimaryExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StructContext : public PrimaryExpressionContext {
  public:
    StructContext(PrimaryExpressionContext *ctx);

    sql_parserParser::NamedExpressionContext *namedExpressionContext = nullptr;
    std::vector<NamedExpressionContext *> argument;
    antlr4::tree::TerminalNode *STRUCT();
    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DereferenceContext : public PrimaryExpressionContext {
  public:
    DereferenceContext(PrimaryExpressionContext *ctx);

    sql_parserParser::PrimaryExpressionContext *base = nullptr;
    sql_parserParser::IdentifierContext *fieldName = nullptr;
    PrimaryExpressionContext *primaryExpression();
    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleCaseContext : public PrimaryExpressionContext {
  public:
    SimpleCaseContext(PrimaryExpressionContext *ctx);

    sql_parserParser::ExpressionContext *value = nullptr;
    sql_parserParser::ExpressionContext *elseExpression = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<WhenClauseContext *> whenClause();
    WhenClauseContext* whenClause(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnReferenceContext : public PrimaryExpressionContext {
  public:
    ColumnReferenceContext(PrimaryExpressionContext *ctx);

    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RowConstructorContext : public PrimaryExpressionContext {
  public:
    RowConstructorContext(PrimaryExpressionContext *ctx);

    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LastContext : public PrimaryExpressionContext {
  public:
    LastContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *LAST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *NULLS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StarContext : public PrimaryExpressionContext {
  public:
    StarContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *ASTERISK();
    QualifiedNameContext *qualifiedName();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubscriptContext : public PrimaryExpressionContext {
  public:
    SubscriptContext(PrimaryExpressionContext *ctx);

    sql_parserParser::PrimaryExpressionContext *value = nullptr;
    sql_parserParser::ValueExpressionContext *index = nullptr;
    PrimaryExpressionContext *primaryExpression();
    ValueExpressionContext *valueExpression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubqueryExpressionContext : public PrimaryExpressionContext {
  public:
    SubqueryExpressionContext(PrimaryExpressionContext *ctx);

    QueryContext *query();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CurrentDatetimeContext : public PrimaryExpressionContext {
  public:
    CurrentDatetimeContext(PrimaryExpressionContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastContext : public PrimaryExpressionContext {
  public:
    CastContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *CAST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    DataTypeContext *dataType();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantDefaultContext : public PrimaryExpressionContext {
  public:
    ConstantDefaultContext(PrimaryExpressionContext *ctx);

    ConstantContext *constant();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedExpressionContext : public PrimaryExpressionContext {
  public:
    ParenthesizedExpressionContext(PrimaryExpressionContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public PrimaryExpressionContext {
  public:
    FunctionCallContext(PrimaryExpressionContext *ctx);

    sql_parserParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> argument;
    FunctionNameContext *functionName();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SearchedCaseContext : public PrimaryExpressionContext {
  public:
    SearchedCaseContext(PrimaryExpressionContext *ctx);

    sql_parserParser::ExpressionContext *elseExpression = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<WhenClauseContext *> whenClause();
    WhenClauseContext* whenClause(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PositionContext : public PrimaryExpressionContext {
  public:
    PositionContext(PrimaryExpressionContext *ctx);

    sql_parserParser::ValueExpressionContext *substr = nullptr;
    sql_parserParser::ValueExpressionContext *str = nullptr;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *IN();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FirstContext : public PrimaryExpressionContext {
  public:
    FirstContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *FIRST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *NULLS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryExpressionContext* primaryExpression();
  PrimaryExpressionContext* primaryExpression(int precedence);
  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantContext() = default;
    void copyFrom(ConstantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NullLiteralContext : public ConstantContext {
  public:
    NullLiteralContext(ConstantContext *ctx);

    antlr4::tree::TerminalNode *NULL_();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringLiteralContext : public ConstantContext {
  public:
    StringLiteralContext(ConstantContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeConstructorContext : public ConstantContext {
  public:
    TypeConstructorContext(ConstantContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalLiteralContext : public ConstantContext {
  public:
    IntervalLiteralContext(ConstantContext *ctx);

    IntervalContext *interval();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericLiteralContext : public ConstantContext {
  public:
    NumericLiteralContext(ConstantContext *ctx);

    NumberContext *number();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanLiteralContext : public ConstantContext {
  public:
    BooleanLiteralContext(ConstantContext *ctx);

    BooleanValueContext *booleanValue();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstantContext* constant();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *NEQJ();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *NSEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  ArithmeticOperatorContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *CONCAT_PIPE();
    antlr4::tree::TerminalNode *HAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticOperatorContext* arithmeticOperator();

  class  PredicateOperatorContext : public antlr4::ParserRuleContext {
  public:
    PredicateOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateOperatorContext* predicateOperator();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueContext* booleanValue();

  class  IntervalContext : public antlr4::ParserRuleContext {
  public:
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    ErrorCapturingMultiUnitsIntervalContext *errorCapturingMultiUnitsInterval();
    ErrorCapturingUnitToUnitIntervalContext *errorCapturingUnitToUnitInterval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  ErrorCapturingMultiUnitsIntervalContext : public antlr4::ParserRuleContext {
  public:
    ErrorCapturingMultiUnitsIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiUnitsIntervalContext *multiUnitsInterval();
    UnitToUnitIntervalContext *unitToUnitInterval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorCapturingMultiUnitsIntervalContext* errorCapturingMultiUnitsInterval();

  class  MultiUnitsIntervalContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::IdentifierContext *identifierContext = nullptr;
    std::vector<IdentifierContext *> unit;
    MultiUnitsIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IntervalValueContext *> intervalValue();
    IntervalValueContext* intervalValue(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiUnitsIntervalContext* multiUnitsInterval();

  class  ErrorCapturingUnitToUnitIntervalContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::UnitToUnitIntervalContext *body = nullptr;
    sql_parserParser::MultiUnitsIntervalContext *error1 = nullptr;
    sql_parserParser::UnitToUnitIntervalContext *error2 = nullptr;
    ErrorCapturingUnitToUnitIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnitToUnitIntervalContext *> unitToUnitInterval();
    UnitToUnitIntervalContext* unitToUnitInterval(size_t i);
    MultiUnitsIntervalContext *multiUnitsInterval();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorCapturingUnitToUnitIntervalContext* errorCapturingUnitToUnitInterval();

  class  UnitToUnitIntervalContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::IntervalValueContext *value = nullptr;
    sql_parserParser::IdentifierContext *from = nullptr;
    sql_parserParser::IdentifierContext *to = nullptr;
    UnitToUnitIntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    IntervalValueContext *intervalValue();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitToUnitIntervalContext* unitToUnitInterval();

  class  IntervalValueContext : public antlr4::ParserRuleContext {
  public:
    IntervalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalValueContext* intervalValue();

  class  ColPositionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *position = nullptr;
    sql_parserParser::ErrorCapturingIdentifierContext *afterCol = nullptr;
    ColPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColPositionContext* colPosition();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DataTypeContext() = default;
    void copyFrom(DataTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComplexDataTypeContext : public DataTypeContext {
  public:
    ComplexDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *complex = nullptr;
    antlr4::tree::TerminalNode *LT();
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *NEQ();
    ComplexColTypeListContext *complexColTypeList();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimitiveDataTypeContext : public DataTypeContext {
  public:
    PrimitiveDataTypeContext(DataTypeContext *ctx);

    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> INTEGER_VALUE();
    antlr4::tree::TerminalNode* INTEGER_VALUE(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DataTypeContext* dataType();

  class  QualifiedColTypeWithPositionListContext : public antlr4::ParserRuleContext {
  public:
    QualifiedColTypeWithPositionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedColTypeWithPositionContext *> qualifiedColTypeWithPosition();
    QualifiedColTypeWithPositionContext* qualifiedColTypeWithPosition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedColTypeWithPositionListContext* qualifiedColTypeWithPositionList();

  class  QualifiedColTypeWithPositionContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::MultipartIdentifierContext *name = nullptr;
    QualifiedColTypeWithPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    MultipartIdentifierContext *multipartIdentifier();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    CommentSpecContext *commentSpec();
    ColPositionContext *colPosition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedColTypeWithPositionContext* qualifiedColTypeWithPosition();

  class  ColTypeListContext : public antlr4::ParserRuleContext {
  public:
    ColTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColTypeContext *> colType();
    ColTypeContext* colType(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColTypeListContext* colTypeList();

  class  ColTypeContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ErrorCapturingIdentifierContext *colName = nullptr;
    ColTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    CommentSpecContext *commentSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColTypeContext* colType();

  class  ComplexColTypeListContext : public antlr4::ParserRuleContext {
  public:
    ComplexColTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComplexColTypeContext *> complexColType();
    ComplexColTypeContext* complexColType(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexColTypeListContext* complexColTypeList();

  class  ComplexColTypeContext : public antlr4::ParserRuleContext {
  public:
    ComplexColTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    CommentSpecContext *commentSpec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexColTypeContext* complexColType();

  class  WhenClauseContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ExpressionContext *condition = nullptr;
    sql_parserParser::ExpressionContext *result = nullptr;
    WhenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenClauseContext* whenClause();

  class  WindowClauseContext : public antlr4::ParserRuleContext {
  public:
    WindowClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WINDOW();
    std::vector<NamedWindowContext *> namedWindow();
    NamedWindowContext* namedWindow(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowClauseContext* windowClause();

  class  NamedWindowContext : public antlr4::ParserRuleContext {
  public:
    sql_parserParser::ErrorCapturingIdentifierContext *name = nullptr;
    NamedWindowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    WindowSpecContext *windowSpec();
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedWindowContext* namedWindow();

  class  WindowSpecContext : public antlr4::ParserRuleContext {
  public:
    WindowSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WindowSpecContext() = default;
    void copyFrom(WindowSpecContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WindowRefContext : public WindowSpecContext {
  public:
    WindowRefContext(WindowSpecContext *ctx);

    sql_parserParser::ErrorCapturingIdentifierContext *name = nullptr;
    ErrorCapturingIdentifierContext *errorCapturingIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WindowDefContext : public WindowSpecContext {
  public:
    WindowDefContext(WindowSpecContext *ctx);

    sql_parserParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> partition;
    antlr4::tree::TerminalNode *CLUSTER();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    WindowFrameContext *windowFrame();
    std::vector<SortItemContext *> sortItem();
    SortItemContext* sortItem(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *SORT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WindowSpecContext* windowSpec();

  class  WindowFrameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *frameType = nullptr;
    sql_parserParser::FrameBoundContext *start = nullptr;
    sql_parserParser::FrameBoundContext *end = nullptr;
    WindowFrameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    std::vector<FrameBoundContext *> frameBound();
    FrameBoundContext* frameBound(size_t i);
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameContext* windowFrame();

  class  FrameBoundContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *boundType = nullptr;
    FrameBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *CURRENT();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrameBoundContext* frameBound();

  class  QualifiedNameListContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedNameListContext* qualifiedNameList();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  QualifiedNameContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedNameContext* qualifiedName();

  class  ErrorCapturingIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ErrorCapturingIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ErrorCapturingIdentifierExtraContext *errorCapturingIdentifierExtra();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorCapturingIdentifierContext* errorCapturingIdentifier();

  class  ErrorCapturingIdentifierExtraContext : public antlr4::ParserRuleContext {
  public:
    ErrorCapturingIdentifierExtraContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ErrorCapturingIdentifierExtraContext() = default;
    void copyFrom(ErrorCapturingIdentifierExtraContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ErrorIdentContext : public ErrorCapturingIdentifierExtraContext {
  public:
    ErrorIdentContext(ErrorCapturingIdentifierExtraContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RealIdentContext : public ErrorCapturingIdentifierExtraContext {
  public:
    RealIdentContext(ErrorCapturingIdentifierExtraContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ErrorCapturingIdentifierExtraContext* errorCapturingIdentifierExtra();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StrictIdentifierContext *strictIdentifier();
    StrictNonReservedContext *strictNonReserved();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  StrictIdentifierContext : public antlr4::ParserRuleContext {
  public:
    StrictIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StrictIdentifierContext() = default;
    void copyFrom(StrictIdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QuotedIdentifierAlternativeContext : public StrictIdentifierContext {
  public:
    QuotedIdentifierAlternativeContext(StrictIdentifierContext *ctx);

    QuotedIdentifierContext *quotedIdentifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnquotedIdentifierContext : public StrictIdentifierContext {
  public:
    UnquotedIdentifierContext(StrictIdentifierContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    AnsiNonReservedContext *ansiNonReserved();
    NonReservedContext *nonReserved();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StrictIdentifierContext* strictIdentifier();

  class  QuotedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QuotedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKQUOTED_IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuotedIdentifierContext* quotedIdentifier();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BigIntLiteralContext : public NumberContext {
  public:
    BigIntLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *BIGINT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TinyIntLiteralContext : public NumberContext {
  public:
    TinyIntLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *TINYINT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LegacyDecimalLiteralContext : public NumberContext {
  public:
    LegacyDecimalLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *EXPONENT_VALUE();
    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BigDecimalLiteralContext : public NumberContext {
  public:
    BigDecimalLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *BIGDECIMAL_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoubleLiteralContext : public NumberContext {
  public:
    DoubleLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerLiteralContext : public NumberContext {
  public:
    IntegerLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SmallIntLiteralContext : public NumberContext {
  public:
    SmallIntLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *SMALLINT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  AlterColumnActionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *setOrDrop = nullptr;
    AlterColumnActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    DataTypeContext *dataType();
    CommentSpecContext *commentSpec();
    ColPositionContext *colPosition();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterColumnActionContext* alterColumnAction();

  class  AnsiNonReservedContext : public antlr4::ParserRuleContext {
  public:
    AnsiNonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *ANTI();
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BUCKET();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *CODEGEN();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPACTIONS();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *CONCATENATE();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELIMITED();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DFS();
    antlr4::tree::TerminalNode *DIRECTORIES();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILEFORMAT();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *FUNCTIONS();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INPATH();
    antlr4::tree::TerminalNode *INPUTFORMAT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *MACRO();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NAMESPACES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTPUTFORMAT();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PERCENTLIT();
    antlr4::tree::TerminalNode *PIVOT();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRINCIPALS();
    antlr4::tree::TerminalNode *PROPERTIES();
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RECORDREADER();
    antlr4::tree::TerminalNode *RECORDWRITER();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLES();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SEPARATED();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETMINUS();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *SORTED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *STRATIFY();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *TOUCH();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *UNARCHIVE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCACHE();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *UNSET();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *WINDOW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnsiNonReservedContext* ansiNonReserved();

  class  StrictNonReservedContext : public antlr4::ParserRuleContext {
  public:
    StrictNonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANTI();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SETMINUS();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *USING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrictNonReservedContext* strictNonReserved();

  class  NonReservedContext : public antlr4::ParserRuleContext {
  public:
    NonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BUCKET();
    antlr4::tree::TerminalNode *BUCKETS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CLEAR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *CLUSTERED();
    antlr4::tree::TerminalNode *CODEGEN();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLECTION();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPACTIONS();
    antlr4::tree::TerminalNode *COMPUTE();
    antlr4::tree::TerminalNode *CONCATENATE();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *COST();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *DBPROPERTIES();
    antlr4::tree::TerminalNode *DEFINED();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELIMITED();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DFS();
    antlr4::tree::TerminalNode *DIRECTORIES();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESCAPED();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILEFORMAT();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *FUNCTIONS();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INPATH();
    antlr4::tree::TerminalNode *INPUTFORMAT();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ITEMS();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LAZY();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LINES();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *MACRO();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MSCK();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NAMESPACES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUTFORMAT();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERWRITE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PERCENTLIT();
    antlr4::tree::TerminalNode *PIVOT();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRINCIPALS();
    antlr4::tree::TerminalNode *PROPERTIES();
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RECORDREADER();
    antlr4::tree::TerminalNode *RECORDWRITER();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLES();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SEPARATED();
    antlr4::tree::TerminalNode *SERDE();
    antlr4::tree::TerminalNode *SERDEPROPERTIES();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SKEWED();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORT();
    antlr4::tree::TerminalNode *SORTED();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STORED();
    antlr4::tree::TerminalNode *STRATIFY();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TBLPROPERTIES();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOUCH();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *UNARCHIVE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCACHE();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *UNSET();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIEWS();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonReservedContext* nonReserved();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex);
  bool valueExpressionSempred(ValueExpressionContext *_localctx, size_t predicateIndex);
  bool primaryExpressionSempred(PrimaryExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace sql
