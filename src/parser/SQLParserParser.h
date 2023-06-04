
// Generated from ./src/parser/SQLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace sql {


class  SQLParserParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    ADD = 8, AFTER = 9, ALL = 10, ALTER = 11, ANALYZE = 12, AND = 13, ANTI = 14, 
    ANY = 15, ARCHIVE = 16, ARRAY = 17, AS = 18, ASC = 19, AT = 20, AUTHORIZATION = 21, 
    BETWEEN = 22, BOTH = 23, BUCKET = 24, BUCKETS = 25, BY = 26, CACHE = 27, 
    CASCADE = 28, CASE = 29, CAST = 30, CHANGE = 31, CHECK = 32, CLEAR = 33, 
    CLUSTER = 34, CLUSTERED = 35, CODEGEN = 36, COLLATE = 37, COLLECTION = 38, 
    COLUMN = 39, COLUMNS = 40, COMMENT = 41, COMMIT = 42, COMPACT = 43, 
    COMPACTIONS = 44, COMPUTE = 45, CONCATENATE = 46, CONSTRAINT = 47, COST = 48, 
    CREATE = 49, CROSS = 50, CUBE = 51, CURRENT = 52, CURRENT_DATE = 53, 
    CURRENT_TIME = 54, CURRENT_TIMESTAMP = 55, CURRENT_USER = 56, DATA = 57, 
    DATABASE = 58, DATABASES = 59, DBPROPERTIES = 60, DEFINED = 61, DELETE = 62, 
    DELIMITED = 63, DESC = 64, DESCRIBE = 65, DFS = 66, DIRECTORIES = 67, 
    DIRECTORY = 68, DISTINCT = 69, DISTRIBUTE = 70, DIV = 71, DROP = 72, 
    ELSE = 73, END = 74, ESCAPE = 75, ESCAPED = 76, EXCEPT = 77, EXCHANGE = 78, 
    EXISTS = 79, EXPLAIN = 80, EXPORT = 81, EXTENDED = 82, EXTERNAL = 83, 
    EXTRACT = 84, FALSE = 85, FETCH = 86, FIELDS = 87, FILTER = 88, FILEFORMAT = 89, 
    FIRST = 90, FOLLOWING = 91, FOR = 92, FOREIGN = 93, FORMAT = 94, FORMATTED = 95, 
    FROM = 96, FULL = 97, FUNCTION = 98, FUNCTIONS = 99, GLOBAL = 100, GRANT = 101, 
    GROUP = 102, GROUPING = 103, HAVING = 104, IF = 105, IGNORE = 106, IMPORT = 107, 
    IN = 108, INDEX = 109, INDEXES = 110, INNER = 111, INPATH = 112, INPUTFORMAT = 113, 
    INSERT = 114, INTERSECT = 115, INTERVAL = 116, INTO = 117, IS = 118, 
    ITEMS = 119, JOIN = 120, KEYS = 121, LAST = 122, LATERAL = 123, LAZY = 124, 
    LEADING = 125, LEFT = 126, LIKE = 127, LIMIT = 128, LINES = 129, LIST = 130, 
    LOAD = 131, LOCAL = 132, LOCATION = 133, LOCK = 134, LOCKS = 135, LOGICAL = 136, 
    MACRO = 137, MAP = 138, MATCHED = 139, MERGE = 140, MSCK = 141, NAMESPACE = 142, 
    NAMESPACES = 143, NATURAL = 144, NO = 145, NOT = 146, NULL_ = 147, NULLS = 148, 
    OF = 149, ON = 150, ONLY = 151, OPTION = 152, OPTIONS = 153, OR = 154, 
    ORDER = 155, OUT = 156, OUTER = 157, OUTPUTFORMAT = 158, OVER = 159, 
    OVERLAPS = 160, OVERLAY = 161, OVERWRITE = 162, PARTITION = 163, PARTITIONED = 164, 
    PARTITIONS = 165, PERCENTLIT = 166, PIVOT = 167, PLACING = 168, POSITION = 169, 
    PRECEDING = 170, PRIMARY = 171, PRINCIPALS = 172, PROPERTIES = 173, 
    PURGE = 174, QUERY = 175, RANGE = 176, RECORDREADER = 177, RECORDWRITER = 178, 
    RECOVER = 179, REDUCE = 180, REFERENCES = 181, REFRESH = 182, RENAME = 183, 
    REPAIR = 184, REPLACE = 185, RESET = 186, RESTRICT = 187, REVOKE = 188, 
    RIGHT = 189, RLIKE = 190, ROLE = 191, ROLES = 192, ROLLBACK = 193, ROLLUP = 194, 
    ROW = 195, ROWS = 196, SCHEMA = 197, SELECT = 198, SEMI = 199, SEPARATED = 200, 
    SERDE = 201, SERDEPROPERTIES = 202, SESSION_USER = 203, SET = 204, SETMINUS = 205, 
    SETS = 206, SHOW = 207, SKEWED = 208, SOME = 209, SORT = 210, SORTED = 211, 
    START = 212, STATISTICS = 213, STORED = 214, STRATIFY = 215, STRUCT = 216, 
    SUBSTR = 217, SUBSTRING = 218, TABLE = 219, TABLES = 220, TABLESAMPLE = 221, 
    TBLPROPERTIES = 222, TEMPORARY = 223, TERMINATED = 224, THEN = 225, 
    TO = 226, TOUCH = 227, TRAILING = 228, TRANSACTION = 229, TRANSACTIONS = 230, 
    TRANSFORM = 231, TRIM = 232, TRUE = 233, TRUNCATE = 234, TYPE = 235, 
    UNARCHIVE = 236, UNBOUNDED = 237, UNCACHE = 238, UNION = 239, UNIQUE = 240, 
    UNKNOWN = 241, UNLOCK = 242, UNSET = 243, UPDATE = 244, USE = 245, USER = 246, 
    USING = 247, VALUES = 248, VIEW = 249, VIEWS = 250, WHEN = 251, WHERE = 252, 
    WINDOW = 253, WITH = 254, EQ = 255, NSEQ = 256, NEQ = 257, NEQJ = 258, 
    LT = 259, LTE = 260, GT = 261, GTE = 262, PLUS = 263, MINUS = 264, ASTERISK = 265, 
    SLASH = 266, PERCENT = 267, TILDE = 268, AMPERSAND = 269, PIPE = 270, 
    CONCAT_PIPE = 271, HAT = 272, STRING = 273, BIGINT_LITERAL = 274, SMALLINT_LITERAL = 275, 
    TINYINT_LITERAL = 276, INTEGER_VALUE = 277, EXPONENT_VALUE = 278, DECIMAL_VALUE = 279, 
    DOUBLE_LITERAL = 280, BIGDECIMAL_LITERAL = 281, IDENTIFIER = 282, BACKQUOTED_IDENTIFIER = 283, 
    SIMPLE_COMMENT = 284, BRACKETED_EMPTY_COMMENT = 285, BRACKETED_COMMENT = 286, 
    WS = 287, UNRECOGNIZED = 288
  };

  enum {
    RuleSingleStatement = 0, RuleStatement = 1, RuleQuery = 2, RuleQueryOrganization = 3, 
    RuleQueryTerm = 4, RuleQueryPrimary = 5, RuleSortItem = 6, RuleQuerySpecification = 7, 
    RuleSelectClause = 8, RuleWhereClause = 9, RuleFromClause = 10, RuleSetQuantifier = 11, 
    RuleRelation = 12, RuleIdentifierList = 13, RuleIdentifierSeq = 14, 
    RuleOrderedIdentifierList = 15, RuleOrderedIdentifier = 16, RuleRelationPrimary = 17, 
    RuleTableAlias = 18, RuleMultipartIdentifierList = 19, RuleMultipartIdentifier = 20, 
    RuleNamedExpression = 21, RuleNamedExpressionSeq = 22, RuleExpression = 23, 
    RuleBooleanExpression = 24, RulePredicate = 25, RuleValueExpression = 26, 
    RulePrimaryExpression = 27, RuleConstant = 28, RuleComparisonOperator = 29, 
    RuleArithmeticOperator = 30, RulePredicateOperator = 31, RuleBooleanValue = 32, 
    RuleInterval = 33, RuleErrorCapturingMultiUnitsInterval = 34, RuleMultiUnitsInterval = 35, 
    RuleErrorCapturingUnitToUnitInterval = 36, RuleUnitToUnitInterval = 37, 
    RuleIntervalValue = 38, RuleDataType = 39, RuleWhenClause = 40, RuleQualifiedNameList = 41, 
    RuleFunctionName = 42, RuleQualifiedName = 43, RuleIdentifier = 44, 
    RuleStrictIdentifier = 45, RuleQuotedIdentifier = 46, RuleNumber = 47, 
    RuleAnsiNonReserved = 48, RuleStrictNonReserved = 49, RuleNonReserved = 50
  };

  explicit SQLParserParser(antlr4::TokenStream *input);

  SQLParserParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SQLParserParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SingleStatementContext;
  class StatementContext;
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
  class DataTypeContext;
  class WhenClauseContext;
  class QualifiedNameListContext;
  class FunctionNameContext;
  class QualifiedNameContext;
  class IdentifierContext;
  class StrictIdentifierContext;
  class QuotedIdentifierContext;
  class NumberContext;
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
    SQLParserParser::SortItemContext *sortItemContext = nullptr;
    std::vector<SortItemContext *> order;
    std::vector<SortItemContext *> sort;
    SQLParserParser::ExpressionContext *limit = nullptr;
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
    SQLParserParser::IdentifierContext *identifierContext = nullptr;
    std::vector<IdentifierContext *> ident;
    IdentifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


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
    SQLParserParser::IdentifierContext *ident = nullptr;
    antlr4::Token *ordering = nullptr;
    OrderedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderedIdentifierContext* orderedIdentifier();

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
    SQLParserParser::IdentifierContext *identifierContext = nullptr;
    std::vector<IdentifierContext *> parts;
    MultipartIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultipartIdentifierContext* multipartIdentifier();

  class  NamedExpressionContext : public antlr4::ParserRuleContext {
  public:
    SQLParserParser::IdentifierContext *name = nullptr;
    NamedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *AS();
    IdentifierContext *identifier();


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

    SQLParserParser::BooleanExpressionContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    SQLParserParser::BooleanExpressionContext *right = nullptr;
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
    SQLParserParser::ValueExpressionContext *lower = nullptr;
    SQLParserParser::ValueExpressionContext *upper = nullptr;
    SQLParserParser::ValueExpressionContext *pattern = nullptr;
    antlr4::Token *escapeChar = nullptr;
    SQLParserParser::ValueExpressionContext *right = nullptr;
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

    SQLParserParser::ValueExpressionContext *left = nullptr;
    SQLParserParser::ValueExpressionContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticBinaryContext : public ValueExpressionContext {
  public:
    ArithmeticBinaryContext(ValueExpressionContext *ctx);

    SQLParserParser::ValueExpressionContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    SQLParserParser::ValueExpressionContext *right = nullptr;
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

    SQLParserParser::NamedExpressionContext *namedExpressionContext = nullptr;
    std::vector<NamedExpressionContext *> argument;
    antlr4::tree::TerminalNode *STRUCT();
    std::vector<NamedExpressionContext *> namedExpression();
    NamedExpressionContext* namedExpression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DereferenceContext : public PrimaryExpressionContext {
  public:
    DereferenceContext(PrimaryExpressionContext *ctx);

    SQLParserParser::PrimaryExpressionContext *base = nullptr;
    SQLParserParser::IdentifierContext *fieldName = nullptr;
    PrimaryExpressionContext *primaryExpression();
    IdentifierContext *identifier();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleCaseContext : public PrimaryExpressionContext {
  public:
    SimpleCaseContext(PrimaryExpressionContext *ctx);

    SQLParserParser::ExpressionContext *value = nullptr;
    SQLParserParser::ExpressionContext *elseExpression = nullptr;
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

    SQLParserParser::PrimaryExpressionContext *value = nullptr;
    SQLParserParser::ValueExpressionContext *index = nullptr;
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

    SQLParserParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> argument;
    FunctionNameContext *functionName();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SearchedCaseContext : public PrimaryExpressionContext {
  public:
    SearchedCaseContext(PrimaryExpressionContext *ctx);

    SQLParserParser::ExpressionContext *elseExpression = nullptr;
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

    SQLParserParser::ValueExpressionContext *substr = nullptr;
    SQLParserParser::ValueExpressionContext *str = nullptr;
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
    SQLParserParser::IdentifierContext *identifierContext = nullptr;
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
    SQLParserParser::UnitToUnitIntervalContext *body = nullptr;
    SQLParserParser::MultiUnitsIntervalContext *error1 = nullptr;
    SQLParserParser::UnitToUnitIntervalContext *error2 = nullptr;
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
    SQLParserParser::IntervalValueContext *value = nullptr;
    SQLParserParser::IdentifierContext *from = nullptr;
    SQLParserParser::IdentifierContext *to = nullptr;
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

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DataTypeContext* dataType();

  class  WhenClauseContext : public antlr4::ParserRuleContext {
  public:
    SQLParserParser::ExpressionContext *condition = nullptr;
    SQLParserParser::ExpressionContext *result = nullptr;
    WhenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenClauseContext* whenClause();

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
