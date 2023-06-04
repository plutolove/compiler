
// Generated from ./src/parser/SQLParser.g4 by ANTLR 4.12.0


#include "SQLParserVisitor.h"

#include "SQLParserParser.h"


using namespace antlrcpp;
using namespace sql;

using namespace antlr4;

namespace {

struct SQLParserParserStaticData final {
  SQLParserParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SQLParserParserStaticData(const SQLParserParserStaticData&) = delete;
  SQLParserParserStaticData(SQLParserParserStaticData&&) = delete;
  SQLParserParserStaticData& operator=(const SQLParserParserStaticData&) = delete;
  SQLParserParserStaticData& operator=(SQLParserParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sqlparserParserOnceFlag;
SQLParserParserStaticData *sqlparserParserStaticData = nullptr;

void sqlparserParserInitialize() {
  assert(sqlparserParserStaticData == nullptr);
  auto staticData = std::make_unique<SQLParserParserStaticData>(
    std::vector<std::string>{
      "singleStatement", "statement", "query", "queryOrganization", "queryTerm", 
      "queryPrimary", "sortItem", "querySpecification", "selectClause", 
      "whereClause", "fromClause", "setQuantifier", "relation", "identifierList", 
      "identifierSeq", "orderedIdentifierList", "orderedIdentifier", "relationPrimary", 
      "tableAlias", "multipartIdentifier", "namedExpression", "namedExpressionSeq", 
      "expression", "booleanExpression", "predicate", "valueExpression", 
      "primaryExpression", "constant", "comparisonOperator", "arithmeticOperator", 
      "predicateOperator", "booleanValue", "interval", "errorCapturingMultiUnitsInterval", 
      "multiUnitsInterval", "errorCapturingUnitToUnitInterval", "unitToUnitInterval", 
      "intervalValue", "dataType", "whenClause", "qualifiedNameList", "functionName", 
      "qualifiedName", "identifier", "strictIdentifier", "quotedIdentifier", 
      "number", "ansiNonReserved", "strictNonReserved", "nonReserved"
    },
    std::vector<std::string>{
      "", "';'", "','", "'('", "')'", "'.'", "'['", "']'", "'ADD'", "'AFTER'", 
      "'ALL'", "'ALTER'", "'ANALYZE'", "'AND'", "'ANTI'", "'ANY'", "'ARCHIVE'", 
      "'ARRAY'", "'AS'", "'ASC'", "'AT'", "'AUTHORIZATION'", "'BETWEEN'", 
      "'BOTH'", "'BUCKET'", "'BUCKETS'", "'BY'", "'CACHE'", "'CASCADE'", 
      "'CASE'", "'CAST'", "'CHANGE'", "'CHECK'", "'CLEAR'", "'CLUSTER'", 
      "'CLUSTERED'", "'CODEGEN'", "'COLLATE'", "'COLLECTION'", "'COLUMN'", 
      "'COLUMNS'", "'COMMENT'", "'COMMIT'", "'COMPACT'", "'COMPACTIONS'", 
      "'COMPUTE'", "'CONCATENATE'", "'CONSTRAINT'", "'COST'", "'CREATE'", 
      "'CROSS'", "'CUBE'", "'CURRENT'", "'CURRENT_DATE'", "'CURRENT_TIME'", 
      "'CURRENT_TIMESTAMP'", "'CURRENT_USER'", "'DATA'", "'DATABASE'", "", 
      "'DBPROPERTIES'", "'DEFINED'", "'DELETE'", "'DELIMITED'", "'DESC'", 
      "'DESCRIBE'", "'DFS'", "'DIRECTORIES'", "'DIRECTORY'", "'DISTINCT'", 
      "'DISTRIBUTE'", "'DIV'", "'DROP'", "'ELSE'", "'END'", "'ESCAPE'", 
      "'ESCAPED'", "'EXCEPT'", "'EXCHANGE'", "'EXISTS'", "'EXPLAIN'", "'EXPORT'", 
      "'EXTENDED'", "'EXTERNAL'", "'EXTRACT'", "'FALSE'", "'FETCH'", "'FIELDS'", 
      "'FILTER'", "'FILEFORMAT'", "'FIRST'", "'FOLLOWING'", "'FOR'", "'FOREIGN'", 
      "'FORMAT'", "'FORMATTED'", "'FROM'", "'FULL'", "'FUNCTION'", "'FUNCTIONS'", 
      "'GLOBAL'", "'GRANT'", "'GROUP'", "'GROUPING'", "'HAVING'", "'IF'", 
      "'IGNORE'", "'IMPORT'", "'IN'", "'INDEX'", "'INDEXES'", "'INNER'", 
      "'INPATH'", "'INPUTFORMAT'", "'INSERT'", "'INTERSECT'", "'INTERVAL'", 
      "'INTO'", "'IS'", "'ITEMS'", "'JOIN'", "'KEYS'", "'LAST'", "'LATERAL'", 
      "'LAZY'", "'LEADING'", "'LEFT'", "'LIKE'", "'LIMIT'", "'LINES'", "'LIST'", 
      "'LOAD'", "'LOCAL'", "'LOCATION'", "'LOCK'", "'LOCKS'", "'LOGICAL'", 
      "'MACRO'", "'MAP'", "'MATCHED'", "'MERGE'", "'MSCK'", "'NAMESPACE'", 
      "'NAMESPACES'", "'NATURAL'", "'NO'", "", "'NULL'", "'NULLS'", "'OF'", 
      "'ON'", "'ONLY'", "'OPTION'", "'OPTIONS'", "'OR'", "'ORDER'", "'OUT'", 
      "'OUTER'", "'OUTPUTFORMAT'", "'OVER'", "'OVERLAPS'", "'OVERLAY'", 
      "'OVERWRITE'", "'PARTITION'", "'PARTITIONED'", "'PARTITIONS'", "'PERCENT'", 
      "'PIVOT'", "'PLACING'", "'POSITION'", "'PRECEDING'", "'PRIMARY'", 
      "'PRINCIPALS'", "'PROPERTIES'", "'PURGE'", "'QUERY'", "'RANGE'", "'RECORDREADER'", 
      "'RECORDWRITER'", "'RECOVER'", "'REDUCE'", "'REFERENCES'", "'REFRESH'", 
      "'RENAME'", "'REPAIR'", "'REPLACE'", "'RESET'", "'RESTRICT'", "'REVOKE'", 
      "'RIGHT'", "", "'ROLE'", "'ROLES'", "'ROLLBACK'", "'ROLLUP'", "'ROW'", 
      "'ROWS'", "'SCHEMA'", "'SELECT'", "'SEMI'", "'SEPARATED'", "'SERDE'", 
      "'SERDEPROPERTIES'", "'SESSION_USER'", "'SET'", "'MINUS'", "'SETS'", 
      "'SHOW'", "'SKEWED'", "'SOME'", "'SORT'", "'SORTED'", "'START'", "'STATISTICS'", 
      "'STORED'", "'STRATIFY'", "'STRUCT'", "'SUBSTR'", "'SUBSTRING'", "'TABLE'", 
      "'TABLES'", "'TABLESAMPLE'", "'TBLPROPERTIES'", "", "'TERMINATED'", 
      "'THEN'", "'TO'", "'TOUCH'", "'TRAILING'", "'TRANSACTION'", "'TRANSACTIONS'", 
      "'TRANSFORM'", "'TRIM'", "'TRUE'", "'TRUNCATE'", "'TYPE'", "'UNARCHIVE'", 
      "'UNBOUNDED'", "'UNCACHE'", "'UNION'", "'UNIQUE'", "'UNKNOWN'", "'UNLOCK'", 
      "'UNSET'", "'UPDATE'", "'USE'", "'USER'", "'USING'", "'VALUES'", "'VIEW'", 
      "'VIEWS'", "'WHEN'", "'WHERE'", "'WINDOW'", "'WITH'", "", "'<=>'", 
      "'<>'", "'!='", "'<'", "", "'>'", "", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'~'", "'&'", "'|'", "'||'", "'^'", "", "", "", "", "", "", 
      "", "", "", "", "", "", "'/**/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "ADD", "AFTER", "ALL", "ALTER", "ANALYZE", 
      "AND", "ANTI", "ANY", "ARCHIVE", "ARRAY", "AS", "ASC", "AT", "AUTHORIZATION", 
      "BETWEEN", "BOTH", "BUCKET", "BUCKETS", "BY", "CACHE", "CASCADE", 
      "CASE", "CAST", "CHANGE", "CHECK", "CLEAR", "CLUSTER", "CLUSTERED", 
      "CODEGEN", "COLLATE", "COLLECTION", "COLUMN", "COLUMNS", "COMMENT", 
      "COMMIT", "COMPACT", "COMPACTIONS", "COMPUTE", "CONCATENATE", "CONSTRAINT", 
      "COST", "CREATE", "CROSS", "CUBE", "CURRENT", "CURRENT_DATE", "CURRENT_TIME", 
      "CURRENT_TIMESTAMP", "CURRENT_USER", "DATA", "DATABASE", "DATABASES", 
      "DBPROPERTIES", "DEFINED", "DELETE", "DELIMITED", "DESC", "DESCRIBE", 
      "DFS", "DIRECTORIES", "DIRECTORY", "DISTINCT", "DISTRIBUTE", "DIV", 
      "DROP", "ELSE", "END", "ESCAPE", "ESCAPED", "EXCEPT", "EXCHANGE", 
      "EXISTS", "EXPLAIN", "EXPORT", "EXTENDED", "EXTERNAL", "EXTRACT", 
      "FALSE", "FETCH", "FIELDS", "FILTER", "FILEFORMAT", "FIRST", "FOLLOWING", 
      "FOR", "FOREIGN", "FORMAT", "FORMATTED", "FROM", "FULL", "FUNCTION", 
      "FUNCTIONS", "GLOBAL", "GRANT", "GROUP", "GROUPING", "HAVING", "IF", 
      "IGNORE", "IMPORT", "IN", "INDEX", "INDEXES", "INNER", "INPATH", "INPUTFORMAT", 
      "INSERT", "INTERSECT", "INTERVAL", "INTO", "IS", "ITEMS", "JOIN", 
      "KEYS", "LAST", "LATERAL", "LAZY", "LEADING", "LEFT", "LIKE", "LIMIT", 
      "LINES", "LIST", "LOAD", "LOCAL", "LOCATION", "LOCK", "LOCKS", "LOGICAL", 
      "MACRO", "MAP", "MATCHED", "MERGE", "MSCK", "NAMESPACE", "NAMESPACES", 
      "NATURAL", "NO", "NOT", "NULL", "NULLS", "OF", "ON", "ONLY", "OPTION", 
      "OPTIONS", "OR", "ORDER", "OUT", "OUTER", "OUTPUTFORMAT", "OVER", 
      "OVERLAPS", "OVERLAY", "OVERWRITE", "PARTITION", "PARTITIONED", "PARTITIONS", 
      "PERCENTLIT", "PIVOT", "PLACING", "POSITION", "PRECEDING", "PRIMARY", 
      "PRINCIPALS", "PROPERTIES", "PURGE", "QUERY", "RANGE", "RECORDREADER", 
      "RECORDWRITER", "RECOVER", "REDUCE", "REFERENCES", "REFRESH", "RENAME", 
      "REPAIR", "REPLACE", "RESET", "RESTRICT", "REVOKE", "RIGHT", "RLIKE", 
      "ROLE", "ROLES", "ROLLBACK", "ROLLUP", "ROW", "ROWS", "SCHEMA", "SELECT", 
      "SEMI", "SEPARATED", "SERDE", "SERDEPROPERTIES", "SESSION_USER", "SET", 
      "SETMINUS", "SETS", "SHOW", "SKEWED", "SOME", "SORT", "SORTED", "START", 
      "STATISTICS", "STORED", "STRATIFY", "STRUCT", "SUBSTR", "SUBSTRING", 
      "TABLE", "TABLES", "TABLESAMPLE", "TBLPROPERTIES", "TEMPORARY", "TERMINATED", 
      "THEN", "TO", "TOUCH", "TRAILING", "TRANSACTION", "TRANSACTIONS", 
      "TRANSFORM", "TRIM", "TRUE", "TRUNCATE", "TYPE", "UNARCHIVE", "UNBOUNDED", 
      "UNCACHE", "UNION", "UNIQUE", "UNKNOWN", "UNLOCK", "UNSET", "UPDATE", 
      "USE", "USER", "USING", "VALUES", "VIEW", "VIEWS", "WHEN", "WHERE", 
      "WINDOW", "WITH", "EQ", "NSEQ", "NEQ", "NEQJ", "LT", "LTE", "GT", 
      "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "TILDE", "AMPERSAND", 
      "PIPE", "CONCAT_PIPE", "HAT", "STRING", "BIGINT_LITERAL", "SMALLINT_LITERAL", 
      "TINYINT_LITERAL", "INTEGER_VALUE", "EXPONENT_VALUE", "DECIMAL_VALUE", 
      "DOUBLE_LITERAL", "BIGDECIMAL_LITERAL", "IDENTIFIER", "BACKQUOTED_IDENTIFIER", 
      "SIMPLE_COMMENT", "BRACKETED_EMPTY_COMMENT", "BRACKETED_COMMENT", 
      "WS", "UNRECOGNIZED"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,288,640,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,1,0,1,0,5,0,103,8,0,10,0,12,0,106,9,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,
  	1,3,1,3,1,3,1,3,1,3,5,3,120,8,3,10,3,12,3,123,9,3,3,3,125,8,3,1,3,1,3,
  	1,3,1,3,1,3,5,3,132,8,3,10,3,12,3,135,9,3,3,3,137,8,3,1,3,1,3,1,3,3,3,
  	142,8,3,3,3,144,8,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,3,5,153,8,5,1,6,1,6,3,
  	6,157,8,6,1,6,1,6,3,6,161,8,6,1,7,1,7,3,7,165,8,7,1,7,3,7,168,8,7,1,8,
  	1,8,3,8,172,8,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,12,1,12,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,14,5,14,193,8,14,10,14,12,14,196,9,14,
  	1,15,1,15,1,15,1,15,5,15,202,8,15,10,15,12,15,205,9,15,1,15,1,15,1,16,
  	1,16,3,16,211,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,221,8,
  	17,1,18,3,18,224,8,18,1,18,1,18,1,19,1,19,1,19,5,19,231,8,19,10,19,12,
  	19,234,9,19,1,20,1,20,3,20,238,8,20,1,20,1,20,3,20,242,8,20,3,20,244,
  	8,20,1,21,1,21,1,21,5,21,249,8,21,10,21,12,21,252,9,21,1,22,1,22,1,23,
  	1,23,1,23,1,23,1,23,3,23,261,8,23,3,23,263,8,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,5,23,271,8,23,10,23,12,23,274,9,23,1,24,3,24,277,8,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,3,24,285,8,24,1,24,1,24,1,24,1,24,1,24,5,24,292,
  	8,24,10,24,12,24,295,9,24,1,24,1,24,1,24,3,24,300,8,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,3,24,308,8,24,1,24,1,24,1,24,3,24,313,8,24,1,24,1,24,1,
  	24,1,24,3,24,319,8,24,1,24,1,24,3,24,323,8,24,1,24,1,24,1,24,3,24,328,
  	8,24,1,24,1,24,1,24,3,24,333,8,24,1,24,1,24,1,24,3,24,338,8,24,1,25,1,
  	25,1,25,1,25,3,25,344,8,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,
  	25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,5,25,365,8,25,10,
  	25,12,25,368,9,25,1,26,1,26,1,26,1,26,4,26,374,8,26,11,26,12,26,375,1,
  	26,1,26,3,26,380,8,26,1,26,1,26,1,26,1,26,1,26,4,26,387,8,26,11,26,12,
  	26,388,1,26,1,26,3,26,393,8,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,5,26,409,8,26,10,26,12,26,412,9,26,3,26,
  	414,8,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,422,8,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,3,26,431,8,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,4,26,452,8,
  	26,11,26,12,26,453,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,5,26,467,8,26,10,26,12,26,470,9,26,3,26,472,8,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,3,26,481,8,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,5,26,491,8,26,10,26,12,26,494,9,26,1,27,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,4,27,504,8,27,11,27,12,27,505,3,27,508,8,27,1,28,1,28,1,29,
  	1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,3,32,521,8,32,1,33,1,33,3,33,
  	525,8,33,1,34,1,34,1,34,4,34,530,8,34,11,34,12,34,531,1,35,1,35,1,35,
  	3,35,537,8,35,1,36,1,36,1,36,1,36,1,36,1,37,3,37,545,8,37,1,37,1,37,3,
  	37,549,8,37,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,38,1,
  	38,3,38,563,8,38,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,5,40,573,8,40,
  	10,40,12,40,576,9,40,1,41,1,41,1,41,1,41,3,41,582,8,41,1,42,1,42,1,42,
  	5,42,587,8,42,10,42,12,42,590,9,42,1,43,1,43,3,43,594,8,43,1,44,1,44,
  	1,44,1,44,3,44,600,8,44,1,45,1,45,1,46,3,46,605,8,46,1,46,1,46,3,46,609,
  	8,46,1,46,1,46,3,46,613,8,46,1,46,1,46,3,46,617,8,46,1,46,1,46,3,46,621,
  	8,46,1,46,1,46,3,46,625,8,46,1,46,1,46,3,46,629,8,46,1,46,3,46,632,8,
  	46,1,47,1,47,1,48,1,48,1,49,1,49,1,49,0,3,46,50,52,50,0,2,4,6,8,10,12,
  	14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,
  	60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,0,18,2,0,
  	19,19,64,64,2,0,90,90,122,122,2,0,10,10,69,69,3,0,85,85,233,233,241,241,
  	2,0,263,264,268,268,2,0,71,71,265,267,2,0,263,264,271,271,2,0,53,53,55,
  	55,1,0,255,262,2,0,71,71,263,272,4,0,13,13,108,108,146,146,154,154,2,
  	0,85,85,233,233,1,0,263,264,2,0,277,277,279,279,1,0,278,279,47,0,8,9,
  	11,12,14,14,16,17,19,20,22,22,24,28,31,31,33,36,38,38,40,46,48,48,51,
  	52,57,68,70,72,76,76,78,84,87,87,89,91,94,95,98,100,103,103,105,107,109,
  	110,112,114,116,116,119,119,121,124,127,143,145,145,148,149,152,153,156,
  	156,158,159,161,170,172,180,182,188,190,197,199,202,204,208,210,218,220,
  	224,227,227,229,238,242,245,248,250,253,253,15,0,14,14,50,50,77,77,97,
  	97,111,111,115,115,120,120,126,126,144,144,150,150,189,189,199,199,205,
  	205,239,239,247,247,16,0,8,13,15,49,51,76,78,96,98,110,112,114,116,119,
  	121,125,127,143,145,149,151,188,190,198,200,204,206,238,240,246,248,254,
  	705,0,100,1,0,0,0,2,109,1,0,0,0,4,111,1,0,0,0,6,124,1,0,0,0,8,145,1,0,
  	0,0,10,152,1,0,0,0,12,154,1,0,0,0,14,162,1,0,0,0,16,169,1,0,0,0,18,175,
  	1,0,0,0,20,178,1,0,0,0,22,181,1,0,0,0,24,183,1,0,0,0,26,185,1,0,0,0,28,
  	189,1,0,0,0,30,197,1,0,0,0,32,208,1,0,0,0,34,220,1,0,0,0,36,223,1,0,0,
  	0,38,227,1,0,0,0,40,235,1,0,0,0,42,245,1,0,0,0,44,253,1,0,0,0,46,262,
  	1,0,0,0,48,337,1,0,0,0,50,343,1,0,0,0,52,480,1,0,0,0,54,507,1,0,0,0,56,
  	509,1,0,0,0,58,511,1,0,0,0,60,513,1,0,0,0,62,515,1,0,0,0,64,517,1,0,0,
  	0,66,522,1,0,0,0,68,529,1,0,0,0,70,533,1,0,0,0,72,538,1,0,0,0,74,548,
  	1,0,0,0,76,562,1,0,0,0,78,564,1,0,0,0,80,569,1,0,0,0,82,581,1,0,0,0,84,
  	583,1,0,0,0,86,593,1,0,0,0,88,599,1,0,0,0,90,601,1,0,0,0,92,631,1,0,0,
  	0,94,633,1,0,0,0,96,635,1,0,0,0,98,637,1,0,0,0,100,104,3,2,1,0,101,103,
  	5,1,0,0,102,101,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,
  	0,105,107,1,0,0,0,106,104,1,0,0,0,107,108,5,0,0,1,108,1,1,0,0,0,109,110,
  	3,4,2,0,110,3,1,0,0,0,111,112,3,8,4,0,112,113,3,6,3,0,113,5,1,0,0,0,114,
  	115,5,155,0,0,115,116,5,26,0,0,116,121,3,12,6,0,117,118,5,2,0,0,118,120,
  	3,12,6,0,119,117,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,
  	0,0,122,125,1,0,0,0,123,121,1,0,0,0,124,114,1,0,0,0,124,125,1,0,0,0,125,
  	136,1,0,0,0,126,127,5,210,0,0,127,128,5,26,0,0,128,133,3,12,6,0,129,130,
  	5,2,0,0,130,132,3,12,6,0,131,129,1,0,0,0,132,135,1,0,0,0,133,131,1,0,
  	0,0,133,134,1,0,0,0,134,137,1,0,0,0,135,133,1,0,0,0,136,126,1,0,0,0,136,
  	137,1,0,0,0,137,143,1,0,0,0,138,141,5,128,0,0,139,142,5,10,0,0,140,142,
  	3,44,22,0,141,139,1,0,0,0,141,140,1,0,0,0,142,144,1,0,0,0,143,138,1,0,
  	0,0,143,144,1,0,0,0,144,7,1,0,0,0,145,146,3,10,5,0,146,9,1,0,0,0,147,
  	153,3,14,7,0,148,149,5,3,0,0,149,150,3,4,2,0,150,151,5,4,0,0,151,153,
  	1,0,0,0,152,147,1,0,0,0,152,148,1,0,0,0,153,11,1,0,0,0,154,156,3,44,22,
  	0,155,157,7,0,0,0,156,155,1,0,0,0,156,157,1,0,0,0,157,160,1,0,0,0,158,
  	159,5,148,0,0,159,161,7,1,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,13,
  	1,0,0,0,162,164,3,16,8,0,163,165,3,20,10,0,164,163,1,0,0,0,164,165,1,
  	0,0,0,165,167,1,0,0,0,166,168,3,18,9,0,167,166,1,0,0,0,167,168,1,0,0,
  	0,168,15,1,0,0,0,169,171,5,198,0,0,170,172,3,22,11,0,171,170,1,0,0,0,
  	171,172,1,0,0,0,172,173,1,0,0,0,173,174,3,42,21,0,174,17,1,0,0,0,175,
  	176,5,252,0,0,176,177,3,46,23,0,177,19,1,0,0,0,178,179,5,96,0,0,179,180,
  	3,24,12,0,180,21,1,0,0,0,181,182,7,2,0,0,182,23,1,0,0,0,183,184,3,34,
  	17,0,184,25,1,0,0,0,185,186,5,3,0,0,186,187,3,28,14,0,187,188,5,4,0,0,
  	188,27,1,0,0,0,189,194,3,86,43,0,190,191,5,2,0,0,191,193,3,86,43,0,192,
  	190,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,195,1,0,0,0,195,29,1,
  	0,0,0,196,194,1,0,0,0,197,198,5,3,0,0,198,203,3,32,16,0,199,200,5,2,0,
  	0,200,202,3,32,16,0,201,199,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,
  	204,1,0,0,0,204,206,1,0,0,0,205,203,1,0,0,0,206,207,5,4,0,0,207,31,1,
  	0,0,0,208,210,3,86,43,0,209,211,7,0,0,0,210,209,1,0,0,0,210,211,1,0,0,
  	0,211,33,1,0,0,0,212,213,3,38,19,0,213,214,3,36,18,0,214,221,1,0,0,0,
  	215,216,5,3,0,0,216,217,3,4,2,0,217,218,5,4,0,0,218,219,3,36,18,0,219,
  	221,1,0,0,0,220,212,1,0,0,0,220,215,1,0,0,0,221,35,1,0,0,0,222,224,5,
  	18,0,0,223,222,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,225,226,3,88,44,
  	0,226,37,1,0,0,0,227,232,3,86,43,0,228,229,5,5,0,0,229,231,3,86,43,0,
  	230,228,1,0,0,0,231,234,1,0,0,0,232,230,1,0,0,0,232,233,1,0,0,0,233,39,
  	1,0,0,0,234,232,1,0,0,0,235,243,3,44,22,0,236,238,5,18,0,0,237,236,1,
  	0,0,0,237,238,1,0,0,0,238,241,1,0,0,0,239,242,3,86,43,0,240,242,3,26,
  	13,0,241,239,1,0,0,0,241,240,1,0,0,0,242,244,1,0,0,0,243,237,1,0,0,0,
  	243,244,1,0,0,0,244,41,1,0,0,0,245,250,3,40,20,0,246,247,5,2,0,0,247,
  	249,3,40,20,0,248,246,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,0,250,251,
  	1,0,0,0,251,43,1,0,0,0,252,250,1,0,0,0,253,254,3,46,23,0,254,45,1,0,0,
  	0,255,256,6,23,-1,0,256,257,5,146,0,0,257,263,3,46,23,4,258,260,3,50,
  	25,0,259,261,3,48,24,0,260,259,1,0,0,0,260,261,1,0,0,0,261,263,1,0,0,
  	0,262,255,1,0,0,0,262,258,1,0,0,0,263,272,1,0,0,0,264,265,10,2,0,0,265,
  	266,5,13,0,0,266,271,3,46,23,3,267,268,10,1,0,0,268,269,5,154,0,0,269,
  	271,3,46,23,2,270,264,1,0,0,0,270,267,1,0,0,0,271,274,1,0,0,0,272,270,
  	1,0,0,0,272,273,1,0,0,0,273,47,1,0,0,0,274,272,1,0,0,0,275,277,5,146,
  	0,0,276,275,1,0,0,0,276,277,1,0,0,0,277,278,1,0,0,0,278,279,5,22,0,0,
  	279,280,3,50,25,0,280,281,5,13,0,0,281,282,3,50,25,0,282,338,1,0,0,0,
  	283,285,5,146,0,0,284,283,1,0,0,0,284,285,1,0,0,0,285,286,1,0,0,0,286,
  	287,5,108,0,0,287,288,5,3,0,0,288,293,3,44,22,0,289,290,5,2,0,0,290,292,
  	3,44,22,0,291,289,1,0,0,0,292,295,1,0,0,0,293,291,1,0,0,0,293,294,1,0,
  	0,0,294,296,1,0,0,0,295,293,1,0,0,0,296,297,5,4,0,0,297,338,1,0,0,0,298,
  	300,5,146,0,0,299,298,1,0,0,0,299,300,1,0,0,0,300,301,1,0,0,0,301,302,
  	5,108,0,0,302,303,5,3,0,0,303,304,3,4,2,0,304,305,5,4,0,0,305,338,1,0,
  	0,0,306,308,5,146,0,0,307,306,1,0,0,0,307,308,1,0,0,0,308,309,1,0,0,0,
  	309,310,5,190,0,0,310,338,3,50,25,0,311,313,5,146,0,0,312,311,1,0,0,0,
  	312,313,1,0,0,0,313,314,1,0,0,0,314,315,5,127,0,0,315,318,3,50,25,0,316,
  	317,5,75,0,0,317,319,5,273,0,0,318,316,1,0,0,0,318,319,1,0,0,0,319,338,
  	1,0,0,0,320,322,5,118,0,0,321,323,5,146,0,0,322,321,1,0,0,0,322,323,1,
  	0,0,0,323,324,1,0,0,0,324,338,5,147,0,0,325,327,5,118,0,0,326,328,5,146,
  	0,0,327,326,1,0,0,0,327,328,1,0,0,0,328,329,1,0,0,0,329,338,7,3,0,0,330,
  	332,5,118,0,0,331,333,5,146,0,0,332,331,1,0,0,0,332,333,1,0,0,0,333,334,
  	1,0,0,0,334,335,5,69,0,0,335,336,5,96,0,0,336,338,3,50,25,0,337,276,1,
  	0,0,0,337,284,1,0,0,0,337,299,1,0,0,0,337,307,1,0,0,0,337,312,1,0,0,0,
  	337,320,1,0,0,0,337,325,1,0,0,0,337,330,1,0,0,0,338,49,1,0,0,0,339,340,
  	6,25,-1,0,340,344,3,52,26,0,341,342,7,4,0,0,342,344,3,50,25,7,343,339,
  	1,0,0,0,343,341,1,0,0,0,344,366,1,0,0,0,345,346,10,6,0,0,346,347,7,5,
  	0,0,347,365,3,50,25,7,348,349,10,5,0,0,349,350,7,6,0,0,350,365,3,50,25,
  	6,351,352,10,4,0,0,352,353,5,269,0,0,353,365,3,50,25,5,354,355,10,3,0,
  	0,355,356,5,272,0,0,356,365,3,50,25,4,357,358,10,2,0,0,358,359,5,270,
  	0,0,359,365,3,50,25,3,360,361,10,1,0,0,361,362,3,56,28,0,362,363,3,50,
  	25,2,363,365,1,0,0,0,364,345,1,0,0,0,364,348,1,0,0,0,364,351,1,0,0,0,
  	364,354,1,0,0,0,364,357,1,0,0,0,364,360,1,0,0,0,365,368,1,0,0,0,366,364,
  	1,0,0,0,366,367,1,0,0,0,367,51,1,0,0,0,368,366,1,0,0,0,369,370,6,26,-1,
  	0,370,481,7,7,0,0,371,373,5,29,0,0,372,374,3,78,39,0,373,372,1,0,0,0,
  	374,375,1,0,0,0,375,373,1,0,0,0,375,376,1,0,0,0,376,379,1,0,0,0,377,378,
  	5,73,0,0,378,380,3,44,22,0,379,377,1,0,0,0,379,380,1,0,0,0,380,381,1,
  	0,0,0,381,382,5,74,0,0,382,481,1,0,0,0,383,384,5,29,0,0,384,386,3,44,
  	22,0,385,387,3,78,39,0,386,385,1,0,0,0,387,388,1,0,0,0,388,386,1,0,0,
  	0,388,389,1,0,0,0,389,392,1,0,0,0,390,391,5,73,0,0,391,393,3,44,22,0,
  	392,390,1,0,0,0,392,393,1,0,0,0,393,394,1,0,0,0,394,395,5,74,0,0,395,
  	481,1,0,0,0,396,397,5,30,0,0,397,398,5,3,0,0,398,399,3,44,22,0,399,400,
  	5,18,0,0,400,401,3,76,38,0,401,402,5,4,0,0,402,481,1,0,0,0,403,404,5,
  	216,0,0,404,413,5,3,0,0,405,410,3,40,20,0,406,407,5,2,0,0,407,409,3,40,
  	20,0,408,406,1,0,0,0,409,412,1,0,0,0,410,408,1,0,0,0,410,411,1,0,0,0,
  	411,414,1,0,0,0,412,410,1,0,0,0,413,405,1,0,0,0,413,414,1,0,0,0,414,415,
  	1,0,0,0,415,481,5,4,0,0,416,417,5,90,0,0,417,418,5,3,0,0,418,421,3,44,
  	22,0,419,420,5,106,0,0,420,422,5,148,0,0,421,419,1,0,0,0,421,422,1,0,
  	0,0,422,423,1,0,0,0,423,424,5,4,0,0,424,481,1,0,0,0,425,426,5,122,0,0,
  	426,427,5,3,0,0,427,430,3,44,22,0,428,429,5,106,0,0,429,431,5,148,0,0,
  	430,428,1,0,0,0,430,431,1,0,0,0,431,432,1,0,0,0,432,433,5,4,0,0,433,481,
  	1,0,0,0,434,435,5,169,0,0,435,436,5,3,0,0,436,437,3,50,25,0,437,438,5,
  	108,0,0,438,439,3,50,25,0,439,440,5,4,0,0,440,481,1,0,0,0,441,481,3,54,
  	27,0,442,481,5,265,0,0,443,444,3,84,42,0,444,445,5,5,0,0,445,446,5,265,
  	0,0,446,481,1,0,0,0,447,448,5,3,0,0,448,451,3,40,20,0,449,450,5,2,0,0,
  	450,452,3,40,20,0,451,449,1,0,0,0,452,453,1,0,0,0,453,451,1,0,0,0,453,
  	454,1,0,0,0,454,455,1,0,0,0,455,456,5,4,0,0,456,481,1,0,0,0,457,458,5,
  	3,0,0,458,459,3,4,2,0,459,460,5,4,0,0,460,481,1,0,0,0,461,462,3,82,41,
  	0,462,471,5,3,0,0,463,468,3,44,22,0,464,465,5,2,0,0,465,467,3,44,22,0,
  	466,464,1,0,0,0,467,470,1,0,0,0,468,466,1,0,0,0,468,469,1,0,0,0,469,472,
  	1,0,0,0,470,468,1,0,0,0,471,463,1,0,0,0,471,472,1,0,0,0,472,473,1,0,0,
  	0,473,474,5,4,0,0,474,481,1,0,0,0,475,481,3,86,43,0,476,477,5,3,0,0,477,
  	478,3,44,22,0,478,479,5,4,0,0,479,481,1,0,0,0,480,369,1,0,0,0,480,371,
  	1,0,0,0,480,383,1,0,0,0,480,396,1,0,0,0,480,403,1,0,0,0,480,416,1,0,0,
  	0,480,425,1,0,0,0,480,434,1,0,0,0,480,441,1,0,0,0,480,442,1,0,0,0,480,
  	443,1,0,0,0,480,447,1,0,0,0,480,457,1,0,0,0,480,461,1,0,0,0,480,475,1,
  	0,0,0,480,476,1,0,0,0,481,492,1,0,0,0,482,483,10,4,0,0,483,484,5,6,0,
  	0,484,485,3,50,25,0,485,486,5,7,0,0,486,491,1,0,0,0,487,488,10,2,0,0,
  	488,489,5,5,0,0,489,491,3,86,43,0,490,482,1,0,0,0,490,487,1,0,0,0,491,
  	494,1,0,0,0,492,490,1,0,0,0,492,493,1,0,0,0,493,53,1,0,0,0,494,492,1,
  	0,0,0,495,508,5,147,0,0,496,508,3,64,32,0,497,498,3,86,43,0,498,499,5,
  	273,0,0,499,508,1,0,0,0,500,508,3,92,46,0,501,508,3,62,31,0,502,504,5,
  	273,0,0,503,502,1,0,0,0,504,505,1,0,0,0,505,503,1,0,0,0,505,506,1,0,0,
  	0,506,508,1,0,0,0,507,495,1,0,0,0,507,496,1,0,0,0,507,497,1,0,0,0,507,
  	500,1,0,0,0,507,501,1,0,0,0,507,503,1,0,0,0,508,55,1,0,0,0,509,510,7,
  	8,0,0,510,57,1,0,0,0,511,512,7,9,0,0,512,59,1,0,0,0,513,514,7,10,0,0,
  	514,61,1,0,0,0,515,516,7,11,0,0,516,63,1,0,0,0,517,520,5,116,0,0,518,
  	521,3,66,33,0,519,521,3,70,35,0,520,518,1,0,0,0,520,519,1,0,0,0,520,521,
  	1,0,0,0,521,65,1,0,0,0,522,524,3,68,34,0,523,525,3,72,36,0,524,523,1,
  	0,0,0,524,525,1,0,0,0,525,67,1,0,0,0,526,527,3,74,37,0,527,528,3,86,43,
  	0,528,530,1,0,0,0,529,526,1,0,0,0,530,531,1,0,0,0,531,529,1,0,0,0,531,
  	532,1,0,0,0,532,69,1,0,0,0,533,536,3,72,36,0,534,537,3,68,34,0,535,537,
  	3,72,36,0,536,534,1,0,0,0,536,535,1,0,0,0,536,537,1,0,0,0,537,71,1,0,
  	0,0,538,539,3,74,37,0,539,540,3,86,43,0,540,541,5,226,0,0,541,542,3,86,
  	43,0,542,73,1,0,0,0,543,545,7,12,0,0,544,543,1,0,0,0,544,545,1,0,0,0,
  	545,546,1,0,0,0,546,549,7,13,0,0,547,549,5,273,0,0,548,544,1,0,0,0,548,
  	547,1,0,0,0,549,75,1,0,0,0,550,551,5,17,0,0,551,552,5,259,0,0,552,553,
  	3,76,38,0,553,554,5,261,0,0,554,563,1,0,0,0,555,556,5,138,0,0,556,557,
  	5,259,0,0,557,558,3,76,38,0,558,559,5,2,0,0,559,560,3,76,38,0,560,561,
  	5,261,0,0,561,563,1,0,0,0,562,550,1,0,0,0,562,555,1,0,0,0,563,77,1,0,
  	0,0,564,565,5,251,0,0,565,566,3,44,22,0,566,567,5,225,0,0,567,568,3,44,
  	22,0,568,79,1,0,0,0,569,574,3,84,42,0,570,571,5,2,0,0,571,573,3,84,42,
  	0,572,570,1,0,0,0,573,576,1,0,0,0,574,572,1,0,0,0,574,575,1,0,0,0,575,
  	81,1,0,0,0,576,574,1,0,0,0,577,582,3,84,42,0,578,582,5,88,0,0,579,582,
  	5,126,0,0,580,582,5,189,0,0,581,577,1,0,0,0,581,578,1,0,0,0,581,579,1,
  	0,0,0,581,580,1,0,0,0,582,83,1,0,0,0,583,588,3,86,43,0,584,585,5,5,0,
  	0,585,587,3,86,43,0,586,584,1,0,0,0,587,590,1,0,0,0,588,586,1,0,0,0,588,
  	589,1,0,0,0,589,85,1,0,0,0,590,588,1,0,0,0,591,594,3,88,44,0,592,594,
  	3,96,48,0,593,591,1,0,0,0,593,592,1,0,0,0,594,87,1,0,0,0,595,600,5,282,
  	0,0,596,600,3,90,45,0,597,600,3,94,47,0,598,600,3,98,49,0,599,595,1,0,
  	0,0,599,596,1,0,0,0,599,597,1,0,0,0,599,598,1,0,0,0,600,89,1,0,0,0,601,
  	602,5,283,0,0,602,91,1,0,0,0,603,605,5,264,0,0,604,603,1,0,0,0,604,605,
  	1,0,0,0,605,606,1,0,0,0,606,632,7,14,0,0,607,609,5,264,0,0,608,607,1,
  	0,0,0,608,609,1,0,0,0,609,610,1,0,0,0,610,632,5,277,0,0,611,613,5,264,
  	0,0,612,611,1,0,0,0,612,613,1,0,0,0,613,614,1,0,0,0,614,632,5,274,0,0,
  	615,617,5,264,0,0,616,615,1,0,0,0,616,617,1,0,0,0,617,618,1,0,0,0,618,
  	632,5,275,0,0,619,621,5,264,0,0,620,619,1,0,0,0,620,621,1,0,0,0,621,622,
  	1,0,0,0,622,632,5,276,0,0,623,625,5,264,0,0,624,623,1,0,0,0,624,625,1,
  	0,0,0,625,626,1,0,0,0,626,632,5,280,0,0,627,629,5,264,0,0,628,627,1,0,
  	0,0,628,629,1,0,0,0,629,630,1,0,0,0,630,632,5,281,0,0,631,604,1,0,0,0,
  	631,608,1,0,0,0,631,612,1,0,0,0,631,616,1,0,0,0,631,620,1,0,0,0,631,624,
  	1,0,0,0,631,628,1,0,0,0,632,93,1,0,0,0,633,634,7,15,0,0,634,95,1,0,0,
  	0,635,636,7,16,0,0,636,97,1,0,0,0,637,638,7,17,0,0,638,99,1,0,0,0,77,
  	104,121,124,133,136,141,143,152,156,160,164,167,171,194,203,210,220,223,
  	232,237,241,243,250,260,262,270,272,276,284,293,299,307,312,318,322,327,
  	332,337,343,364,366,375,379,388,392,410,413,421,430,453,468,471,480,490,
  	492,505,507,520,524,531,536,544,548,562,574,581,588,593,599,604,608,612,
  	616,620,624,628,631
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sqlparserParserStaticData = staticData.release();
}

}

SQLParserParser::SQLParserParser(TokenStream *input) : SQLParserParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SQLParserParser::SQLParserParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SQLParserParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sqlparserParserStaticData->atn, sqlparserParserStaticData->decisionToDFA, sqlparserParserStaticData->sharedContextCache, options);
}

SQLParserParser::~SQLParserParser() {
  delete _interpreter;
}

const atn::ATN& SQLParserParser::getATN() const {
  return *sqlparserParserStaticData->atn;
}

std::string SQLParserParser::getGrammarFileName() const {
  return "SQLParser.g4";
}

const std::vector<std::string>& SQLParserParser::getRuleNames() const {
  return sqlparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SQLParserParser::getVocabulary() const {
  return sqlparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SQLParserParser::getSerializedATN() const {
  return sqlparserParserStaticData->serializedATN;
}


//----------------- SingleStatementContext ------------------------------------------------------------------

SQLParserParser::SingleStatementContext::SingleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::StatementContext* SQLParserParser::SingleStatementContext::statement() {
  return getRuleContext<SQLParserParser::StatementContext>(0);
}

tree::TerminalNode* SQLParserParser::SingleStatementContext::EOF() {
  return getToken(SQLParserParser::EOF, 0);
}


size_t SQLParserParser::SingleStatementContext::getRuleIndex() const {
  return SQLParserParser::RuleSingleStatement;
}


std::any SQLParserParser::SingleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSingleStatement(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::SingleStatementContext* SQLParserParser::singleStatement() {
  SingleStatementContext *_localctx = _tracker.createInstance<SingleStatementContext>(_ctx, getState());
  enterRule(_localctx, 0, SQLParserParser::RuleSingleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    statement();
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLParserParser::T__0) {
      setState(101);
      match(SQLParserParser::T__0);
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(107);
    match(SQLParserParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SQLParserParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::StatementContext::getRuleIndex() const {
  return SQLParserParser::RuleStatement;
}

void SQLParserParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementDefaultContext ------------------------------------------------------------------

SQLParserParser::QueryContext* SQLParserParser::StatementDefaultContext::query() {
  return getRuleContext<SQLParserParser::QueryContext>(0);
}

SQLParserParser::StatementDefaultContext::StatementDefaultContext(StatementContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::StatementDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitStatementDefault(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::StatementContext* SQLParserParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SQLParserParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<SQLParserParser::StatementDefaultContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(109);
    query();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

SQLParserParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::QueryTermContext* SQLParserParser::QueryContext::queryTerm() {
  return getRuleContext<SQLParserParser::QueryTermContext>(0);
}

SQLParserParser::QueryOrganizationContext* SQLParserParser::QueryContext::queryOrganization() {
  return getRuleContext<SQLParserParser::QueryOrganizationContext>(0);
}


size_t SQLParserParser::QueryContext::getRuleIndex() const {
  return SQLParserParser::RuleQuery;
}


std::any SQLParserParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::QueryContext* SQLParserParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 4, SQLParserParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    queryTerm();
    setState(112);
    queryOrganization();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryOrganizationContext ------------------------------------------------------------------

SQLParserParser::QueryOrganizationContext::QueryOrganizationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::QueryOrganizationContext::ORDER() {
  return getToken(SQLParserParser::ORDER, 0);
}

std::vector<tree::TerminalNode *> SQLParserParser::QueryOrganizationContext::BY() {
  return getTokens(SQLParserParser::BY);
}

tree::TerminalNode* SQLParserParser::QueryOrganizationContext::BY(size_t i) {
  return getToken(SQLParserParser::BY, i);
}

tree::TerminalNode* SQLParserParser::QueryOrganizationContext::SORT() {
  return getToken(SQLParserParser::SORT, 0);
}

tree::TerminalNode* SQLParserParser::QueryOrganizationContext::LIMIT() {
  return getToken(SQLParserParser::LIMIT, 0);
}

std::vector<SQLParserParser::SortItemContext *> SQLParserParser::QueryOrganizationContext::sortItem() {
  return getRuleContexts<SQLParserParser::SortItemContext>();
}

SQLParserParser::SortItemContext* SQLParserParser::QueryOrganizationContext::sortItem(size_t i) {
  return getRuleContext<SQLParserParser::SortItemContext>(i);
}

tree::TerminalNode* SQLParserParser::QueryOrganizationContext::ALL() {
  return getToken(SQLParserParser::ALL, 0);
}

SQLParserParser::ExpressionContext* SQLParserParser::QueryOrganizationContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}


size_t SQLParserParser::QueryOrganizationContext::getRuleIndex() const {
  return SQLParserParser::RuleQueryOrganization;
}


std::any SQLParserParser::QueryOrganizationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQueryOrganization(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::QueryOrganizationContext* SQLParserParser::queryOrganization() {
  QueryOrganizationContext *_localctx = _tracker.createInstance<QueryOrganizationContext>(_ctx, getState());
  enterRule(_localctx, 6, SQLParserParser::RuleQueryOrganization);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::ORDER) {
      setState(114);
      match(SQLParserParser::ORDER);
      setState(115);
      match(SQLParserParser::BY);
      setState(116);
      antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext = sortItem();
      antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->order.push_back(antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext);
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLParserParser::T__1) {
        setState(117);
        match(SQLParserParser::T__1);
        setState(118);
        antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext = sortItem();
        antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->order.push_back(antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext);
        setState(123);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::SORT) {
      setState(126);
      match(SQLParserParser::SORT);
      setState(127);
      match(SQLParserParser::BY);
      setState(128);
      antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext = sortItem();
      antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sort.push_back(antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLParserParser::T__1) {
        setState(129);
        match(SQLParserParser::T__1);
        setState(130);
        antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext = sortItem();
        antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sort.push_back(antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->sortItemContext);
        setState(135);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::LIMIT) {
      setState(138);
      match(SQLParserParser::LIMIT);
      setState(141);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(139);
        match(SQLParserParser::ALL);
        break;
      }

      case 2: {
        setState(140);
        antlrcpp::downCast<QueryOrganizationContext *>(_localctx)->limit = expression();
        break;
      }

      default:
        break;
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryTermContext ------------------------------------------------------------------

SQLParserParser::QueryTermContext::QueryTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::QueryTermContext::getRuleIndex() const {
  return SQLParserParser::RuleQueryTerm;
}

void SQLParserParser::QueryTermContext::copyFrom(QueryTermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- QueryTermDefaultContext ------------------------------------------------------------------

SQLParserParser::QueryPrimaryContext* SQLParserParser::QueryTermDefaultContext::queryPrimary() {
  return getRuleContext<SQLParserParser::QueryPrimaryContext>(0);
}

SQLParserParser::QueryTermDefaultContext::QueryTermDefaultContext(QueryTermContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::QueryTermDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQueryTermDefault(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::QueryTermContext* SQLParserParser::queryTerm() {
  QueryTermContext *_localctx = _tracker.createInstance<QueryTermContext>(_ctx, getState());
  enterRule(_localctx, 8, SQLParserParser::RuleQueryTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<SQLParserParser::QueryTermDefaultContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(145);
    queryPrimary();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryPrimaryContext ------------------------------------------------------------------

SQLParserParser::QueryPrimaryContext::QueryPrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::QueryPrimaryContext::getRuleIndex() const {
  return SQLParserParser::RuleQueryPrimary;
}

void SQLParserParser::QueryPrimaryContext::copyFrom(QueryPrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SubqueryContext ------------------------------------------------------------------

SQLParserParser::QueryContext* SQLParserParser::SubqueryContext::query() {
  return getRuleContext<SQLParserParser::QueryContext>(0);
}

SQLParserParser::SubqueryContext::SubqueryContext(QueryPrimaryContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::SubqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSubquery(this);
  else
    return visitor->visitChildren(this);
}
//----------------- QueryPrimaryDefaultContext ------------------------------------------------------------------

SQLParserParser::QuerySpecificationContext* SQLParserParser::QueryPrimaryDefaultContext::querySpecification() {
  return getRuleContext<SQLParserParser::QuerySpecificationContext>(0);
}

SQLParserParser::QueryPrimaryDefaultContext::QueryPrimaryDefaultContext(QueryPrimaryContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::QueryPrimaryDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQueryPrimaryDefault(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::QueryPrimaryContext* SQLParserParser::queryPrimary() {
  QueryPrimaryContext *_localctx = _tracker.createInstance<QueryPrimaryContext>(_ctx, getState());
  enterRule(_localctx, 10, SQLParserParser::RuleQueryPrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLParserParser::SELECT: {
        _localctx = _tracker.createInstance<SQLParserParser::QueryPrimaryDefaultContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(147);
        querySpecification();
        break;
      }

      case SQLParserParser::T__2: {
        _localctx = _tracker.createInstance<SQLParserParser::SubqueryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(148);
        match(SQLParserParser::T__2);
        setState(149);
        query();
        setState(150);
        match(SQLParserParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SortItemContext ------------------------------------------------------------------

SQLParserParser::SortItemContext::SortItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::ExpressionContext* SQLParserParser::SortItemContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

tree::TerminalNode* SQLParserParser::SortItemContext::NULLS() {
  return getToken(SQLParserParser::NULLS, 0);
}

tree::TerminalNode* SQLParserParser::SortItemContext::ASC() {
  return getToken(SQLParserParser::ASC, 0);
}

tree::TerminalNode* SQLParserParser::SortItemContext::DESC() {
  return getToken(SQLParserParser::DESC, 0);
}

tree::TerminalNode* SQLParserParser::SortItemContext::LAST() {
  return getToken(SQLParserParser::LAST, 0);
}

tree::TerminalNode* SQLParserParser::SortItemContext::FIRST() {
  return getToken(SQLParserParser::FIRST, 0);
}


size_t SQLParserParser::SortItemContext::getRuleIndex() const {
  return SQLParserParser::RuleSortItem;
}


std::any SQLParserParser::SortItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSortItem(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::SortItemContext* SQLParserParser::sortItem() {
  SortItemContext *_localctx = _tracker.createInstance<SortItemContext>(_ctx, getState());
  enterRule(_localctx, 12, SQLParserParser::RuleSortItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    expression();
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::ASC

    || _la == SQLParserParser::DESC) {
      setState(155);
      antlrcpp::downCast<SortItemContext *>(_localctx)->ordering = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == SQLParserParser::ASC

      || _la == SQLParserParser::DESC)) {
        antlrcpp::downCast<SortItemContext *>(_localctx)->ordering = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::NULLS) {
      setState(158);
      match(SQLParserParser::NULLS);
      setState(159);
      antlrcpp::downCast<SortItemContext *>(_localctx)->nullOrder = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == SQLParserParser::FIRST

      || _la == SQLParserParser::LAST)) {
        antlrcpp::downCast<SortItemContext *>(_localctx)->nullOrder = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuerySpecificationContext ------------------------------------------------------------------

SQLParserParser::QuerySpecificationContext::QuerySpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::SelectClauseContext* SQLParserParser::QuerySpecificationContext::selectClause() {
  return getRuleContext<SQLParserParser::SelectClauseContext>(0);
}

SQLParserParser::FromClauseContext* SQLParserParser::QuerySpecificationContext::fromClause() {
  return getRuleContext<SQLParserParser::FromClauseContext>(0);
}

SQLParserParser::WhereClauseContext* SQLParserParser::QuerySpecificationContext::whereClause() {
  return getRuleContext<SQLParserParser::WhereClauseContext>(0);
}


size_t SQLParserParser::QuerySpecificationContext::getRuleIndex() const {
  return SQLParserParser::RuleQuerySpecification;
}


std::any SQLParserParser::QuerySpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQuerySpecification(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::QuerySpecificationContext* SQLParserParser::querySpecification() {
  QuerySpecificationContext *_localctx = _tracker.createInstance<QuerySpecificationContext>(_ctx, getState());
  enterRule(_localctx, 14, SQLParserParser::RuleQuerySpecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    selectClause();
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::FROM) {
      setState(163);
      fromClause();
    }
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::WHERE) {
      setState(166);
      whereClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectClauseContext ------------------------------------------------------------------

SQLParserParser::SelectClauseContext::SelectClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::SelectClauseContext::SELECT() {
  return getToken(SQLParserParser::SELECT, 0);
}

SQLParserParser::NamedExpressionSeqContext* SQLParserParser::SelectClauseContext::namedExpressionSeq() {
  return getRuleContext<SQLParserParser::NamedExpressionSeqContext>(0);
}

SQLParserParser::SetQuantifierContext* SQLParserParser::SelectClauseContext::setQuantifier() {
  return getRuleContext<SQLParserParser::SetQuantifierContext>(0);
}


size_t SQLParserParser::SelectClauseContext::getRuleIndex() const {
  return SQLParserParser::RuleSelectClause;
}


std::any SQLParserParser::SelectClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSelectClause(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::SelectClauseContext* SQLParserParser::selectClause() {
  SelectClauseContext *_localctx = _tracker.createInstance<SelectClauseContext>(_ctx, getState());
  enterRule(_localctx, 16, SQLParserParser::RuleSelectClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(SQLParserParser::SELECT);
    setState(171);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(170);
      setQuantifier();
      break;
    }

    default:
      break;
    }
    setState(173);
    namedExpressionSeq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereClauseContext ------------------------------------------------------------------

SQLParserParser::WhereClauseContext::WhereClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::WhereClauseContext::WHERE() {
  return getToken(SQLParserParser::WHERE, 0);
}

SQLParserParser::BooleanExpressionContext* SQLParserParser::WhereClauseContext::booleanExpression() {
  return getRuleContext<SQLParserParser::BooleanExpressionContext>(0);
}


size_t SQLParserParser::WhereClauseContext::getRuleIndex() const {
  return SQLParserParser::RuleWhereClause;
}


std::any SQLParserParser::WhereClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitWhereClause(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::WhereClauseContext* SQLParserParser::whereClause() {
  WhereClauseContext *_localctx = _tracker.createInstance<WhereClauseContext>(_ctx, getState());
  enterRule(_localctx, 18, SQLParserParser::RuleWhereClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(SQLParserParser::WHERE);
    setState(176);
    booleanExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromClauseContext ------------------------------------------------------------------

SQLParserParser::FromClauseContext::FromClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::FromClauseContext::FROM() {
  return getToken(SQLParserParser::FROM, 0);
}

SQLParserParser::RelationContext* SQLParserParser::FromClauseContext::relation() {
  return getRuleContext<SQLParserParser::RelationContext>(0);
}


size_t SQLParserParser::FromClauseContext::getRuleIndex() const {
  return SQLParserParser::RuleFromClause;
}


std::any SQLParserParser::FromClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitFromClause(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::FromClauseContext* SQLParserParser::fromClause() {
  FromClauseContext *_localctx = _tracker.createInstance<FromClauseContext>(_ctx, getState());
  enterRule(_localctx, 20, SQLParserParser::RuleFromClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(SQLParserParser::FROM);
    setState(179);
    relation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetQuantifierContext ------------------------------------------------------------------

SQLParserParser::SetQuantifierContext::SetQuantifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::SetQuantifierContext::DISTINCT() {
  return getToken(SQLParserParser::DISTINCT, 0);
}

tree::TerminalNode* SQLParserParser::SetQuantifierContext::ALL() {
  return getToken(SQLParserParser::ALL, 0);
}


size_t SQLParserParser::SetQuantifierContext::getRuleIndex() const {
  return SQLParserParser::RuleSetQuantifier;
}


std::any SQLParserParser::SetQuantifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSetQuantifier(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::SetQuantifierContext* SQLParserParser::setQuantifier() {
  SetQuantifierContext *_localctx = _tracker.createInstance<SetQuantifierContext>(_ctx, getState());
  enterRule(_localctx, 22, SQLParserParser::RuleSetQuantifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    _la = _input->LA(1);
    if (!(_la == SQLParserParser::ALL

    || _la == SQLParserParser::DISTINCT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationContext ------------------------------------------------------------------

SQLParserParser::RelationContext::RelationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::RelationPrimaryContext* SQLParserParser::RelationContext::relationPrimary() {
  return getRuleContext<SQLParserParser::RelationPrimaryContext>(0);
}


size_t SQLParserParser::RelationContext::getRuleIndex() const {
  return SQLParserParser::RuleRelation;
}


std::any SQLParserParser::RelationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitRelation(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::RelationContext* SQLParserParser::relation() {
  RelationContext *_localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 24, SQLParserParser::RuleRelation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    relationPrimary();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

SQLParserParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::IdentifierSeqContext* SQLParserParser::IdentifierListContext::identifierSeq() {
  return getRuleContext<SQLParserParser::IdentifierSeqContext>(0);
}


size_t SQLParserParser::IdentifierListContext::getRuleIndex() const {
  return SQLParserParser::RuleIdentifierList;
}


std::any SQLParserParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::IdentifierListContext* SQLParserParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 26, SQLParserParser::RuleIdentifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(SQLParserParser::T__2);
    setState(186);
    identifierSeq();
    setState(187);
    match(SQLParserParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierSeqContext ------------------------------------------------------------------

SQLParserParser::IdentifierSeqContext::IdentifierSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::IdentifierContext *> SQLParserParser::IdentifierSeqContext::identifier() {
  return getRuleContexts<SQLParserParser::IdentifierContext>();
}

SQLParserParser::IdentifierContext* SQLParserParser::IdentifierSeqContext::identifier(size_t i) {
  return getRuleContext<SQLParserParser::IdentifierContext>(i);
}


size_t SQLParserParser::IdentifierSeqContext::getRuleIndex() const {
  return SQLParserParser::RuleIdentifierSeq;
}


std::any SQLParserParser::IdentifierSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierSeq(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::IdentifierSeqContext* SQLParserParser::identifierSeq() {
  IdentifierSeqContext *_localctx = _tracker.createInstance<IdentifierSeqContext>(_ctx, getState());
  enterRule(_localctx, 28, SQLParserParser::RuleIdentifierSeq);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    antlrcpp::downCast<IdentifierSeqContext *>(_localctx)->identifierContext = identifier();
    antlrcpp::downCast<IdentifierSeqContext *>(_localctx)->ident.push_back(antlrcpp::downCast<IdentifierSeqContext *>(_localctx)->identifierContext);
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLParserParser::T__1) {
      setState(190);
      match(SQLParserParser::T__1);
      setState(191);
      antlrcpp::downCast<IdentifierSeqContext *>(_localctx)->identifierContext = identifier();
      antlrcpp::downCast<IdentifierSeqContext *>(_localctx)->ident.push_back(antlrcpp::downCast<IdentifierSeqContext *>(_localctx)->identifierContext);
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderedIdentifierListContext ------------------------------------------------------------------

SQLParserParser::OrderedIdentifierListContext::OrderedIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::OrderedIdentifierContext *> SQLParserParser::OrderedIdentifierListContext::orderedIdentifier() {
  return getRuleContexts<SQLParserParser::OrderedIdentifierContext>();
}

SQLParserParser::OrderedIdentifierContext* SQLParserParser::OrderedIdentifierListContext::orderedIdentifier(size_t i) {
  return getRuleContext<SQLParserParser::OrderedIdentifierContext>(i);
}


size_t SQLParserParser::OrderedIdentifierListContext::getRuleIndex() const {
  return SQLParserParser::RuleOrderedIdentifierList;
}


std::any SQLParserParser::OrderedIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitOrderedIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::OrderedIdentifierListContext* SQLParserParser::orderedIdentifierList() {
  OrderedIdentifierListContext *_localctx = _tracker.createInstance<OrderedIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 30, SQLParserParser::RuleOrderedIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(SQLParserParser::T__2);
    setState(198);
    orderedIdentifier();
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLParserParser::T__1) {
      setState(199);
      match(SQLParserParser::T__1);
      setState(200);
      orderedIdentifier();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(206);
    match(SQLParserParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderedIdentifierContext ------------------------------------------------------------------

SQLParserParser::OrderedIdentifierContext::OrderedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::IdentifierContext* SQLParserParser::OrderedIdentifierContext::identifier() {
  return getRuleContext<SQLParserParser::IdentifierContext>(0);
}

tree::TerminalNode* SQLParserParser::OrderedIdentifierContext::ASC() {
  return getToken(SQLParserParser::ASC, 0);
}

tree::TerminalNode* SQLParserParser::OrderedIdentifierContext::DESC() {
  return getToken(SQLParserParser::DESC, 0);
}


size_t SQLParserParser::OrderedIdentifierContext::getRuleIndex() const {
  return SQLParserParser::RuleOrderedIdentifier;
}


std::any SQLParserParser::OrderedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitOrderedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::OrderedIdentifierContext* SQLParserParser::orderedIdentifier() {
  OrderedIdentifierContext *_localctx = _tracker.createInstance<OrderedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 32, SQLParserParser::RuleOrderedIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    antlrcpp::downCast<OrderedIdentifierContext *>(_localctx)->ident = identifier();
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SQLParserParser::ASC

    || _la == SQLParserParser::DESC) {
      setState(209);
      antlrcpp::downCast<OrderedIdentifierContext *>(_localctx)->ordering = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == SQLParserParser::ASC

      || _la == SQLParserParser::DESC)) {
        antlrcpp::downCast<OrderedIdentifierContext *>(_localctx)->ordering = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationPrimaryContext ------------------------------------------------------------------

SQLParserParser::RelationPrimaryContext::RelationPrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::RelationPrimaryContext::getRuleIndex() const {
  return SQLParserParser::RuleRelationPrimary;
}

void SQLParserParser::RelationPrimaryContext::copyFrom(RelationPrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AliasedQueryContext ------------------------------------------------------------------

SQLParserParser::QueryContext* SQLParserParser::AliasedQueryContext::query() {
  return getRuleContext<SQLParserParser::QueryContext>(0);
}

SQLParserParser::TableAliasContext* SQLParserParser::AliasedQueryContext::tableAlias() {
  return getRuleContext<SQLParserParser::TableAliasContext>(0);
}

SQLParserParser::AliasedQueryContext::AliasedQueryContext(RelationPrimaryContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::AliasedQueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitAliasedQuery(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TableNameContext ------------------------------------------------------------------

SQLParserParser::MultipartIdentifierContext* SQLParserParser::TableNameContext::multipartIdentifier() {
  return getRuleContext<SQLParserParser::MultipartIdentifierContext>(0);
}

SQLParserParser::TableAliasContext* SQLParserParser::TableNameContext::tableAlias() {
  return getRuleContext<SQLParserParser::TableAliasContext>(0);
}

SQLParserParser::TableNameContext::TableNameContext(RelationPrimaryContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::TableNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitTableName(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::RelationPrimaryContext* SQLParserParser::relationPrimary() {
  RelationPrimaryContext *_localctx = _tracker.createInstance<RelationPrimaryContext>(_ctx, getState());
  enterRule(_localctx, 34, SQLParserParser::RuleRelationPrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLParserParser::ADD:
      case SQLParserParser::AFTER:
      case SQLParserParser::ALL:
      case SQLParserParser::ALTER:
      case SQLParserParser::ANALYZE:
      case SQLParserParser::AND:
      case SQLParserParser::ANTI:
      case SQLParserParser::ANY:
      case SQLParserParser::ARCHIVE:
      case SQLParserParser::ARRAY:
      case SQLParserParser::AS:
      case SQLParserParser::ASC:
      case SQLParserParser::AT:
      case SQLParserParser::AUTHORIZATION:
      case SQLParserParser::BETWEEN:
      case SQLParserParser::BOTH:
      case SQLParserParser::BUCKET:
      case SQLParserParser::BUCKETS:
      case SQLParserParser::BY:
      case SQLParserParser::CACHE:
      case SQLParserParser::CASCADE:
      case SQLParserParser::CASE:
      case SQLParserParser::CAST:
      case SQLParserParser::CHANGE:
      case SQLParserParser::CHECK:
      case SQLParserParser::CLEAR:
      case SQLParserParser::CLUSTER:
      case SQLParserParser::CLUSTERED:
      case SQLParserParser::CODEGEN:
      case SQLParserParser::COLLATE:
      case SQLParserParser::COLLECTION:
      case SQLParserParser::COLUMN:
      case SQLParserParser::COLUMNS:
      case SQLParserParser::COMMENT:
      case SQLParserParser::COMMIT:
      case SQLParserParser::COMPACT:
      case SQLParserParser::COMPACTIONS:
      case SQLParserParser::COMPUTE:
      case SQLParserParser::CONCATENATE:
      case SQLParserParser::CONSTRAINT:
      case SQLParserParser::COST:
      case SQLParserParser::CREATE:
      case SQLParserParser::CROSS:
      case SQLParserParser::CUBE:
      case SQLParserParser::CURRENT:
      case SQLParserParser::CURRENT_DATE:
      case SQLParserParser::CURRENT_TIME:
      case SQLParserParser::CURRENT_TIMESTAMP:
      case SQLParserParser::CURRENT_USER:
      case SQLParserParser::DATA:
      case SQLParserParser::DATABASE:
      case SQLParserParser::DATABASES:
      case SQLParserParser::DBPROPERTIES:
      case SQLParserParser::DEFINED:
      case SQLParserParser::DELETE:
      case SQLParserParser::DELIMITED:
      case SQLParserParser::DESC:
      case SQLParserParser::DESCRIBE:
      case SQLParserParser::DFS:
      case SQLParserParser::DIRECTORIES:
      case SQLParserParser::DIRECTORY:
      case SQLParserParser::DISTINCT:
      case SQLParserParser::DISTRIBUTE:
      case SQLParserParser::DIV:
      case SQLParserParser::DROP:
      case SQLParserParser::ELSE:
      case SQLParserParser::END:
      case SQLParserParser::ESCAPE:
      case SQLParserParser::ESCAPED:
      case SQLParserParser::EXCEPT:
      case SQLParserParser::EXCHANGE:
      case SQLParserParser::EXISTS:
      case SQLParserParser::EXPLAIN:
      case SQLParserParser::EXPORT:
      case SQLParserParser::EXTENDED:
      case SQLParserParser::EXTERNAL:
      case SQLParserParser::EXTRACT:
      case SQLParserParser::FALSE:
      case SQLParserParser::FETCH:
      case SQLParserParser::FIELDS:
      case SQLParserParser::FILTER:
      case SQLParserParser::FILEFORMAT:
      case SQLParserParser::FIRST:
      case SQLParserParser::FOLLOWING:
      case SQLParserParser::FOR:
      case SQLParserParser::FOREIGN:
      case SQLParserParser::FORMAT:
      case SQLParserParser::FORMATTED:
      case SQLParserParser::FROM:
      case SQLParserParser::FULL:
      case SQLParserParser::FUNCTION:
      case SQLParserParser::FUNCTIONS:
      case SQLParserParser::GLOBAL:
      case SQLParserParser::GRANT:
      case SQLParserParser::GROUP:
      case SQLParserParser::GROUPING:
      case SQLParserParser::HAVING:
      case SQLParserParser::IF:
      case SQLParserParser::IGNORE:
      case SQLParserParser::IMPORT:
      case SQLParserParser::IN:
      case SQLParserParser::INDEX:
      case SQLParserParser::INDEXES:
      case SQLParserParser::INNER:
      case SQLParserParser::INPATH:
      case SQLParserParser::INPUTFORMAT:
      case SQLParserParser::INSERT:
      case SQLParserParser::INTERSECT:
      case SQLParserParser::INTERVAL:
      case SQLParserParser::INTO:
      case SQLParserParser::IS:
      case SQLParserParser::ITEMS:
      case SQLParserParser::JOIN:
      case SQLParserParser::KEYS:
      case SQLParserParser::LAST:
      case SQLParserParser::LATERAL:
      case SQLParserParser::LAZY:
      case SQLParserParser::LEADING:
      case SQLParserParser::LEFT:
      case SQLParserParser::LIKE:
      case SQLParserParser::LIMIT:
      case SQLParserParser::LINES:
      case SQLParserParser::LIST:
      case SQLParserParser::LOAD:
      case SQLParserParser::LOCAL:
      case SQLParserParser::LOCATION:
      case SQLParserParser::LOCK:
      case SQLParserParser::LOCKS:
      case SQLParserParser::LOGICAL:
      case SQLParserParser::MACRO:
      case SQLParserParser::MAP:
      case SQLParserParser::MATCHED:
      case SQLParserParser::MERGE:
      case SQLParserParser::MSCK:
      case SQLParserParser::NAMESPACE:
      case SQLParserParser::NAMESPACES:
      case SQLParserParser::NATURAL:
      case SQLParserParser::NO:
      case SQLParserParser::NOT:
      case SQLParserParser::NULL_:
      case SQLParserParser::NULLS:
      case SQLParserParser::OF:
      case SQLParserParser::ON:
      case SQLParserParser::ONLY:
      case SQLParserParser::OPTION:
      case SQLParserParser::OPTIONS:
      case SQLParserParser::OR:
      case SQLParserParser::ORDER:
      case SQLParserParser::OUT:
      case SQLParserParser::OUTER:
      case SQLParserParser::OUTPUTFORMAT:
      case SQLParserParser::OVER:
      case SQLParserParser::OVERLAPS:
      case SQLParserParser::OVERLAY:
      case SQLParserParser::OVERWRITE:
      case SQLParserParser::PARTITION:
      case SQLParserParser::PARTITIONED:
      case SQLParserParser::PARTITIONS:
      case SQLParserParser::PERCENTLIT:
      case SQLParserParser::PIVOT:
      case SQLParserParser::PLACING:
      case SQLParserParser::POSITION:
      case SQLParserParser::PRECEDING:
      case SQLParserParser::PRIMARY:
      case SQLParserParser::PRINCIPALS:
      case SQLParserParser::PROPERTIES:
      case SQLParserParser::PURGE:
      case SQLParserParser::QUERY:
      case SQLParserParser::RANGE:
      case SQLParserParser::RECORDREADER:
      case SQLParserParser::RECORDWRITER:
      case SQLParserParser::RECOVER:
      case SQLParserParser::REDUCE:
      case SQLParserParser::REFERENCES:
      case SQLParserParser::REFRESH:
      case SQLParserParser::RENAME:
      case SQLParserParser::REPAIR:
      case SQLParserParser::REPLACE:
      case SQLParserParser::RESET:
      case SQLParserParser::RESTRICT:
      case SQLParserParser::REVOKE:
      case SQLParserParser::RIGHT:
      case SQLParserParser::RLIKE:
      case SQLParserParser::ROLE:
      case SQLParserParser::ROLES:
      case SQLParserParser::ROLLBACK:
      case SQLParserParser::ROLLUP:
      case SQLParserParser::ROW:
      case SQLParserParser::ROWS:
      case SQLParserParser::SCHEMA:
      case SQLParserParser::SELECT:
      case SQLParserParser::SEMI:
      case SQLParserParser::SEPARATED:
      case SQLParserParser::SERDE:
      case SQLParserParser::SERDEPROPERTIES:
      case SQLParserParser::SESSION_USER:
      case SQLParserParser::SET:
      case SQLParserParser::SETMINUS:
      case SQLParserParser::SETS:
      case SQLParserParser::SHOW:
      case SQLParserParser::SKEWED:
      case SQLParserParser::SOME:
      case SQLParserParser::SORT:
      case SQLParserParser::SORTED:
      case SQLParserParser::START:
      case SQLParserParser::STATISTICS:
      case SQLParserParser::STORED:
      case SQLParserParser::STRATIFY:
      case SQLParserParser::STRUCT:
      case SQLParserParser::SUBSTR:
      case SQLParserParser::SUBSTRING:
      case SQLParserParser::TABLE:
      case SQLParserParser::TABLES:
      case SQLParserParser::TABLESAMPLE:
      case SQLParserParser::TBLPROPERTIES:
      case SQLParserParser::TEMPORARY:
      case SQLParserParser::TERMINATED:
      case SQLParserParser::THEN:
      case SQLParserParser::TO:
      case SQLParserParser::TOUCH:
      case SQLParserParser::TRAILING:
      case SQLParserParser::TRANSACTION:
      case SQLParserParser::TRANSACTIONS:
      case SQLParserParser::TRANSFORM:
      case SQLParserParser::TRIM:
      case SQLParserParser::TRUE:
      case SQLParserParser::TRUNCATE:
      case SQLParserParser::TYPE:
      case SQLParserParser::UNARCHIVE:
      case SQLParserParser::UNBOUNDED:
      case SQLParserParser::UNCACHE:
      case SQLParserParser::UNION:
      case SQLParserParser::UNIQUE:
      case SQLParserParser::UNKNOWN:
      case SQLParserParser::UNLOCK:
      case SQLParserParser::UNSET:
      case SQLParserParser::UPDATE:
      case SQLParserParser::USE:
      case SQLParserParser::USER:
      case SQLParserParser::USING:
      case SQLParserParser::VALUES:
      case SQLParserParser::VIEW:
      case SQLParserParser::VIEWS:
      case SQLParserParser::WHEN:
      case SQLParserParser::WHERE:
      case SQLParserParser::WINDOW:
      case SQLParserParser::WITH:
      case SQLParserParser::IDENTIFIER:
      case SQLParserParser::BACKQUOTED_IDENTIFIER: {
        _localctx = _tracker.createInstance<SQLParserParser::TableNameContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(212);
        multipartIdentifier();
        setState(213);
        tableAlias();
        break;
      }

      case SQLParserParser::T__2: {
        _localctx = _tracker.createInstance<SQLParserParser::AliasedQueryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(215);
        match(SQLParserParser::T__2);
        setState(216);
        query();
        setState(217);
        match(SQLParserParser::T__3);
        setState(218);
        tableAlias();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableAliasContext ------------------------------------------------------------------

SQLParserParser::TableAliasContext::TableAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::StrictIdentifierContext* SQLParserParser::TableAliasContext::strictIdentifier() {
  return getRuleContext<SQLParserParser::StrictIdentifierContext>(0);
}

tree::TerminalNode* SQLParserParser::TableAliasContext::AS() {
  return getToken(SQLParserParser::AS, 0);
}


size_t SQLParserParser::TableAliasContext::getRuleIndex() const {
  return SQLParserParser::RuleTableAlias;
}


std::any SQLParserParser::TableAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitTableAlias(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::TableAliasContext* SQLParserParser::tableAlias() {
  TableAliasContext *_localctx = _tracker.createInstance<TableAliasContext>(_ctx, getState());
  enterRule(_localctx, 36, SQLParserParser::RuleTableAlias);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(222);
      match(SQLParserParser::AS);
      break;
    }

    default:
      break;
    }
    setState(225);
    strictIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultipartIdentifierContext ------------------------------------------------------------------

SQLParserParser::MultipartIdentifierContext::MultipartIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::IdentifierContext *> SQLParserParser::MultipartIdentifierContext::identifier() {
  return getRuleContexts<SQLParserParser::IdentifierContext>();
}

SQLParserParser::IdentifierContext* SQLParserParser::MultipartIdentifierContext::identifier(size_t i) {
  return getRuleContext<SQLParserParser::IdentifierContext>(i);
}


size_t SQLParserParser::MultipartIdentifierContext::getRuleIndex() const {
  return SQLParserParser::RuleMultipartIdentifier;
}


std::any SQLParserParser::MultipartIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitMultipartIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::MultipartIdentifierContext* SQLParserParser::multipartIdentifier() {
  MultipartIdentifierContext *_localctx = _tracker.createInstance<MultipartIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 38, SQLParserParser::RuleMultipartIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    antlrcpp::downCast<MultipartIdentifierContext *>(_localctx)->identifierContext = identifier();
    antlrcpp::downCast<MultipartIdentifierContext *>(_localctx)->parts.push_back(antlrcpp::downCast<MultipartIdentifierContext *>(_localctx)->identifierContext);
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLParserParser::T__4) {
      setState(228);
      match(SQLParserParser::T__4);
      setState(229);
      antlrcpp::downCast<MultipartIdentifierContext *>(_localctx)->identifierContext = identifier();
      antlrcpp::downCast<MultipartIdentifierContext *>(_localctx)->parts.push_back(antlrcpp::downCast<MultipartIdentifierContext *>(_localctx)->identifierContext);
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedExpressionContext ------------------------------------------------------------------

SQLParserParser::NamedExpressionContext::NamedExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::ExpressionContext* SQLParserParser::NamedExpressionContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

SQLParserParser::IdentifierListContext* SQLParserParser::NamedExpressionContext::identifierList() {
  return getRuleContext<SQLParserParser::IdentifierListContext>(0);
}

tree::TerminalNode* SQLParserParser::NamedExpressionContext::AS() {
  return getToken(SQLParserParser::AS, 0);
}

SQLParserParser::IdentifierContext* SQLParserParser::NamedExpressionContext::identifier() {
  return getRuleContext<SQLParserParser::IdentifierContext>(0);
}


size_t SQLParserParser::NamedExpressionContext::getRuleIndex() const {
  return SQLParserParser::RuleNamedExpression;
}


std::any SQLParserParser::NamedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitNamedExpression(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::NamedExpressionContext* SQLParserParser::namedExpression() {
  NamedExpressionContext *_localctx = _tracker.createInstance<NamedExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, SQLParserParser::RuleNamedExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    expression();
    setState(243);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(237);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(236);
        match(SQLParserParser::AS);
        break;
      }

      default:
        break;
      }
      setState(241);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SQLParserParser::ADD:
        case SQLParserParser::AFTER:
        case SQLParserParser::ALL:
        case SQLParserParser::ALTER:
        case SQLParserParser::ANALYZE:
        case SQLParserParser::AND:
        case SQLParserParser::ANTI:
        case SQLParserParser::ANY:
        case SQLParserParser::ARCHIVE:
        case SQLParserParser::ARRAY:
        case SQLParserParser::AS:
        case SQLParserParser::ASC:
        case SQLParserParser::AT:
        case SQLParserParser::AUTHORIZATION:
        case SQLParserParser::BETWEEN:
        case SQLParserParser::BOTH:
        case SQLParserParser::BUCKET:
        case SQLParserParser::BUCKETS:
        case SQLParserParser::BY:
        case SQLParserParser::CACHE:
        case SQLParserParser::CASCADE:
        case SQLParserParser::CASE:
        case SQLParserParser::CAST:
        case SQLParserParser::CHANGE:
        case SQLParserParser::CHECK:
        case SQLParserParser::CLEAR:
        case SQLParserParser::CLUSTER:
        case SQLParserParser::CLUSTERED:
        case SQLParserParser::CODEGEN:
        case SQLParserParser::COLLATE:
        case SQLParserParser::COLLECTION:
        case SQLParserParser::COLUMN:
        case SQLParserParser::COLUMNS:
        case SQLParserParser::COMMENT:
        case SQLParserParser::COMMIT:
        case SQLParserParser::COMPACT:
        case SQLParserParser::COMPACTIONS:
        case SQLParserParser::COMPUTE:
        case SQLParserParser::CONCATENATE:
        case SQLParserParser::CONSTRAINT:
        case SQLParserParser::COST:
        case SQLParserParser::CREATE:
        case SQLParserParser::CROSS:
        case SQLParserParser::CUBE:
        case SQLParserParser::CURRENT:
        case SQLParserParser::CURRENT_DATE:
        case SQLParserParser::CURRENT_TIME:
        case SQLParserParser::CURRENT_TIMESTAMP:
        case SQLParserParser::CURRENT_USER:
        case SQLParserParser::DATA:
        case SQLParserParser::DATABASE:
        case SQLParserParser::DATABASES:
        case SQLParserParser::DBPROPERTIES:
        case SQLParserParser::DEFINED:
        case SQLParserParser::DELETE:
        case SQLParserParser::DELIMITED:
        case SQLParserParser::DESC:
        case SQLParserParser::DESCRIBE:
        case SQLParserParser::DFS:
        case SQLParserParser::DIRECTORIES:
        case SQLParserParser::DIRECTORY:
        case SQLParserParser::DISTINCT:
        case SQLParserParser::DISTRIBUTE:
        case SQLParserParser::DIV:
        case SQLParserParser::DROP:
        case SQLParserParser::ELSE:
        case SQLParserParser::END:
        case SQLParserParser::ESCAPE:
        case SQLParserParser::ESCAPED:
        case SQLParserParser::EXCEPT:
        case SQLParserParser::EXCHANGE:
        case SQLParserParser::EXISTS:
        case SQLParserParser::EXPLAIN:
        case SQLParserParser::EXPORT:
        case SQLParserParser::EXTENDED:
        case SQLParserParser::EXTERNAL:
        case SQLParserParser::EXTRACT:
        case SQLParserParser::FALSE:
        case SQLParserParser::FETCH:
        case SQLParserParser::FIELDS:
        case SQLParserParser::FILTER:
        case SQLParserParser::FILEFORMAT:
        case SQLParserParser::FIRST:
        case SQLParserParser::FOLLOWING:
        case SQLParserParser::FOR:
        case SQLParserParser::FOREIGN:
        case SQLParserParser::FORMAT:
        case SQLParserParser::FORMATTED:
        case SQLParserParser::FROM:
        case SQLParserParser::FULL:
        case SQLParserParser::FUNCTION:
        case SQLParserParser::FUNCTIONS:
        case SQLParserParser::GLOBAL:
        case SQLParserParser::GRANT:
        case SQLParserParser::GROUP:
        case SQLParserParser::GROUPING:
        case SQLParserParser::HAVING:
        case SQLParserParser::IF:
        case SQLParserParser::IGNORE:
        case SQLParserParser::IMPORT:
        case SQLParserParser::IN:
        case SQLParserParser::INDEX:
        case SQLParserParser::INDEXES:
        case SQLParserParser::INNER:
        case SQLParserParser::INPATH:
        case SQLParserParser::INPUTFORMAT:
        case SQLParserParser::INSERT:
        case SQLParserParser::INTERSECT:
        case SQLParserParser::INTERVAL:
        case SQLParserParser::INTO:
        case SQLParserParser::IS:
        case SQLParserParser::ITEMS:
        case SQLParserParser::JOIN:
        case SQLParserParser::KEYS:
        case SQLParserParser::LAST:
        case SQLParserParser::LATERAL:
        case SQLParserParser::LAZY:
        case SQLParserParser::LEADING:
        case SQLParserParser::LEFT:
        case SQLParserParser::LIKE:
        case SQLParserParser::LIMIT:
        case SQLParserParser::LINES:
        case SQLParserParser::LIST:
        case SQLParserParser::LOAD:
        case SQLParserParser::LOCAL:
        case SQLParserParser::LOCATION:
        case SQLParserParser::LOCK:
        case SQLParserParser::LOCKS:
        case SQLParserParser::LOGICAL:
        case SQLParserParser::MACRO:
        case SQLParserParser::MAP:
        case SQLParserParser::MATCHED:
        case SQLParserParser::MERGE:
        case SQLParserParser::MSCK:
        case SQLParserParser::NAMESPACE:
        case SQLParserParser::NAMESPACES:
        case SQLParserParser::NATURAL:
        case SQLParserParser::NO:
        case SQLParserParser::NOT:
        case SQLParserParser::NULL_:
        case SQLParserParser::NULLS:
        case SQLParserParser::OF:
        case SQLParserParser::ON:
        case SQLParserParser::ONLY:
        case SQLParserParser::OPTION:
        case SQLParserParser::OPTIONS:
        case SQLParserParser::OR:
        case SQLParserParser::ORDER:
        case SQLParserParser::OUT:
        case SQLParserParser::OUTER:
        case SQLParserParser::OUTPUTFORMAT:
        case SQLParserParser::OVER:
        case SQLParserParser::OVERLAPS:
        case SQLParserParser::OVERLAY:
        case SQLParserParser::OVERWRITE:
        case SQLParserParser::PARTITION:
        case SQLParserParser::PARTITIONED:
        case SQLParserParser::PARTITIONS:
        case SQLParserParser::PERCENTLIT:
        case SQLParserParser::PIVOT:
        case SQLParserParser::PLACING:
        case SQLParserParser::POSITION:
        case SQLParserParser::PRECEDING:
        case SQLParserParser::PRIMARY:
        case SQLParserParser::PRINCIPALS:
        case SQLParserParser::PROPERTIES:
        case SQLParserParser::PURGE:
        case SQLParserParser::QUERY:
        case SQLParserParser::RANGE:
        case SQLParserParser::RECORDREADER:
        case SQLParserParser::RECORDWRITER:
        case SQLParserParser::RECOVER:
        case SQLParserParser::REDUCE:
        case SQLParserParser::REFERENCES:
        case SQLParserParser::REFRESH:
        case SQLParserParser::RENAME:
        case SQLParserParser::REPAIR:
        case SQLParserParser::REPLACE:
        case SQLParserParser::RESET:
        case SQLParserParser::RESTRICT:
        case SQLParserParser::REVOKE:
        case SQLParserParser::RIGHT:
        case SQLParserParser::RLIKE:
        case SQLParserParser::ROLE:
        case SQLParserParser::ROLES:
        case SQLParserParser::ROLLBACK:
        case SQLParserParser::ROLLUP:
        case SQLParserParser::ROW:
        case SQLParserParser::ROWS:
        case SQLParserParser::SCHEMA:
        case SQLParserParser::SELECT:
        case SQLParserParser::SEMI:
        case SQLParserParser::SEPARATED:
        case SQLParserParser::SERDE:
        case SQLParserParser::SERDEPROPERTIES:
        case SQLParserParser::SESSION_USER:
        case SQLParserParser::SET:
        case SQLParserParser::SETMINUS:
        case SQLParserParser::SETS:
        case SQLParserParser::SHOW:
        case SQLParserParser::SKEWED:
        case SQLParserParser::SOME:
        case SQLParserParser::SORT:
        case SQLParserParser::SORTED:
        case SQLParserParser::START:
        case SQLParserParser::STATISTICS:
        case SQLParserParser::STORED:
        case SQLParserParser::STRATIFY:
        case SQLParserParser::STRUCT:
        case SQLParserParser::SUBSTR:
        case SQLParserParser::SUBSTRING:
        case SQLParserParser::TABLE:
        case SQLParserParser::TABLES:
        case SQLParserParser::TABLESAMPLE:
        case SQLParserParser::TBLPROPERTIES:
        case SQLParserParser::TEMPORARY:
        case SQLParserParser::TERMINATED:
        case SQLParserParser::THEN:
        case SQLParserParser::TO:
        case SQLParserParser::TOUCH:
        case SQLParserParser::TRAILING:
        case SQLParserParser::TRANSACTION:
        case SQLParserParser::TRANSACTIONS:
        case SQLParserParser::TRANSFORM:
        case SQLParserParser::TRIM:
        case SQLParserParser::TRUE:
        case SQLParserParser::TRUNCATE:
        case SQLParserParser::TYPE:
        case SQLParserParser::UNARCHIVE:
        case SQLParserParser::UNBOUNDED:
        case SQLParserParser::UNCACHE:
        case SQLParserParser::UNION:
        case SQLParserParser::UNIQUE:
        case SQLParserParser::UNKNOWN:
        case SQLParserParser::UNLOCK:
        case SQLParserParser::UNSET:
        case SQLParserParser::UPDATE:
        case SQLParserParser::USE:
        case SQLParserParser::USER:
        case SQLParserParser::USING:
        case SQLParserParser::VALUES:
        case SQLParserParser::VIEW:
        case SQLParserParser::VIEWS:
        case SQLParserParser::WHEN:
        case SQLParserParser::WHERE:
        case SQLParserParser::WINDOW:
        case SQLParserParser::WITH:
        case SQLParserParser::IDENTIFIER:
        case SQLParserParser::BACKQUOTED_IDENTIFIER: {
          setState(239);
          antlrcpp::downCast<NamedExpressionContext *>(_localctx)->name = identifier();
          break;
        }

        case SQLParserParser::T__2: {
          setState(240);
          identifierList();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedExpressionSeqContext ------------------------------------------------------------------

SQLParserParser::NamedExpressionSeqContext::NamedExpressionSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::NamedExpressionContext *> SQLParserParser::NamedExpressionSeqContext::namedExpression() {
  return getRuleContexts<SQLParserParser::NamedExpressionContext>();
}

SQLParserParser::NamedExpressionContext* SQLParserParser::NamedExpressionSeqContext::namedExpression(size_t i) {
  return getRuleContext<SQLParserParser::NamedExpressionContext>(i);
}


size_t SQLParserParser::NamedExpressionSeqContext::getRuleIndex() const {
  return SQLParserParser::RuleNamedExpressionSeq;
}


std::any SQLParserParser::NamedExpressionSeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitNamedExpressionSeq(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::NamedExpressionSeqContext* SQLParserParser::namedExpressionSeq() {
  NamedExpressionSeqContext *_localctx = _tracker.createInstance<NamedExpressionSeqContext>(_ctx, getState());
  enterRule(_localctx, 42, SQLParserParser::RuleNamedExpressionSeq);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    namedExpression();
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLParserParser::T__1) {
      setState(246);
      match(SQLParserParser::T__1);
      setState(247);
      namedExpression();
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SQLParserParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::BooleanExpressionContext* SQLParserParser::ExpressionContext::booleanExpression() {
  return getRuleContext<SQLParserParser::BooleanExpressionContext>(0);
}


size_t SQLParserParser::ExpressionContext::getRuleIndex() const {
  return SQLParserParser::RuleExpression;
}


std::any SQLParserParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::ExpressionContext* SQLParserParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, SQLParserParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    booleanExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanExpressionContext ------------------------------------------------------------------

SQLParserParser::BooleanExpressionContext::BooleanExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::BooleanExpressionContext::getRuleIndex() const {
  return SQLParserParser::RuleBooleanExpression;
}

void SQLParserParser::BooleanExpressionContext::copyFrom(BooleanExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicalNotContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::LogicalNotContext::NOT() {
  return getToken(SQLParserParser::NOT, 0);
}

SQLParserParser::BooleanExpressionContext* SQLParserParser::LogicalNotContext::booleanExpression() {
  return getRuleContext<SQLParserParser::BooleanExpressionContext>(0);
}

SQLParserParser::LogicalNotContext::LogicalNotContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::LogicalNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitLogicalNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PredicatedContext ------------------------------------------------------------------

SQLParserParser::ValueExpressionContext* SQLParserParser::PredicatedContext::valueExpression() {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(0);
}

SQLParserParser::PredicateContext* SQLParserParser::PredicatedContext::predicate() {
  return getRuleContext<SQLParserParser::PredicateContext>(0);
}

SQLParserParser::PredicatedContext::PredicatedContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::PredicatedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitPredicated(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalBinaryContext ------------------------------------------------------------------

std::vector<SQLParserParser::BooleanExpressionContext *> SQLParserParser::LogicalBinaryContext::booleanExpression() {
  return getRuleContexts<SQLParserParser::BooleanExpressionContext>();
}

SQLParserParser::BooleanExpressionContext* SQLParserParser::LogicalBinaryContext::booleanExpression(size_t i) {
  return getRuleContext<SQLParserParser::BooleanExpressionContext>(i);
}

tree::TerminalNode* SQLParserParser::LogicalBinaryContext::AND() {
  return getToken(SQLParserParser::AND, 0);
}

tree::TerminalNode* SQLParserParser::LogicalBinaryContext::OR() {
  return getToken(SQLParserParser::OR, 0);
}

SQLParserParser::LogicalBinaryContext::LogicalBinaryContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::LogicalBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitLogicalBinary(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::BooleanExpressionContext* SQLParserParser::booleanExpression() {
   return booleanExpression(0);
}

SQLParserParser::BooleanExpressionContext* SQLParserParser::booleanExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SQLParserParser::BooleanExpressionContext *_localctx = _tracker.createInstance<BooleanExpressionContext>(_ctx, parentState);
  SQLParserParser::BooleanExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, SQLParserParser::RuleBooleanExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LogicalNotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(256);
      match(SQLParserParser::NOT);
      setState(257);
      booleanExpression(4);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PredicatedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(258);
      valueExpression(0);
      setState(260);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(259);
        predicate();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(270);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LogicalBinaryContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
          setState(264);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(265);
          antlrcpp::downCast<LogicalBinaryContext *>(_localctx)->operator_ = match(SQLParserParser::AND);
          setState(266);
          antlrcpp::downCast<LogicalBinaryContext *>(_localctx)->right = booleanExpression(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LogicalBinaryContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
          setState(267);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(268);
          antlrcpp::downCast<LogicalBinaryContext *>(_localctx)->operator_ = match(SQLParserParser::OR);
          setState(269);
          antlrcpp::downCast<LogicalBinaryContext *>(_localctx)->right = booleanExpression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(274);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

SQLParserParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::PredicateContext::AND() {
  return getToken(SQLParserParser::AND, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::BETWEEN() {
  return getToken(SQLParserParser::BETWEEN, 0);
}

std::vector<SQLParserParser::ValueExpressionContext *> SQLParserParser::PredicateContext::valueExpression() {
  return getRuleContexts<SQLParserParser::ValueExpressionContext>();
}

SQLParserParser::ValueExpressionContext* SQLParserParser::PredicateContext::valueExpression(size_t i) {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(i);
}

tree::TerminalNode* SQLParserParser::PredicateContext::NOT() {
  return getToken(SQLParserParser::NOT, 0);
}

std::vector<SQLParserParser::ExpressionContext *> SQLParserParser::PredicateContext::expression() {
  return getRuleContexts<SQLParserParser::ExpressionContext>();
}

SQLParserParser::ExpressionContext* SQLParserParser::PredicateContext::expression(size_t i) {
  return getRuleContext<SQLParserParser::ExpressionContext>(i);
}

tree::TerminalNode* SQLParserParser::PredicateContext::IN() {
  return getToken(SQLParserParser::IN, 0);
}

SQLParserParser::QueryContext* SQLParserParser::PredicateContext::query() {
  return getRuleContext<SQLParserParser::QueryContext>(0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::RLIKE() {
  return getToken(SQLParserParser::RLIKE, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::LIKE() {
  return getToken(SQLParserParser::LIKE, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::ESCAPE() {
  return getToken(SQLParserParser::ESCAPE, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::STRING() {
  return getToken(SQLParserParser::STRING, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::IS() {
  return getToken(SQLParserParser::IS, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::NULL_() {
  return getToken(SQLParserParser::NULL_, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::TRUE() {
  return getToken(SQLParserParser::TRUE, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::FALSE() {
  return getToken(SQLParserParser::FALSE, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::UNKNOWN() {
  return getToken(SQLParserParser::UNKNOWN, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::FROM() {
  return getToken(SQLParserParser::FROM, 0);
}

tree::TerminalNode* SQLParserParser::PredicateContext::DISTINCT() {
  return getToken(SQLParserParser::DISTINCT, 0);
}


size_t SQLParserParser::PredicateContext::getRuleIndex() const {
  return SQLParserParser::RulePredicate;
}


std::any SQLParserParser::PredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitPredicate(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::PredicateContext* SQLParserParser::predicate() {
  PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, getState());
  enterRule(_localctx, 48, SQLParserParser::RulePredicate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(337);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(275);
        match(SQLParserParser::NOT);
      }
      setState(278);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::BETWEEN);
      setState(279);
      antlrcpp::downCast<PredicateContext *>(_localctx)->lower = valueExpression(0);
      setState(280);
      match(SQLParserParser::AND);
      setState(281);
      antlrcpp::downCast<PredicateContext *>(_localctx)->upper = valueExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(284);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(283);
        match(SQLParserParser::NOT);
      }
      setState(286);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::IN);
      setState(287);
      match(SQLParserParser::T__2);
      setState(288);
      expression();
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SQLParserParser::T__1) {
        setState(289);
        match(SQLParserParser::T__1);
        setState(290);
        expression();
        setState(295);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(296);
      match(SQLParserParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(299);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(298);
        match(SQLParserParser::NOT);
      }
      setState(301);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::IN);
      setState(302);
      match(SQLParserParser::T__2);
      setState(303);
      query();
      setState(304);
      match(SQLParserParser::T__3);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(307);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(306);
        match(SQLParserParser::NOT);
      }
      setState(309);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::RLIKE);
      setState(310);
      antlrcpp::downCast<PredicateContext *>(_localctx)->pattern = valueExpression(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(312);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(311);
        match(SQLParserParser::NOT);
      }
      setState(314);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::LIKE);
      setState(315);
      antlrcpp::downCast<PredicateContext *>(_localctx)->pattern = valueExpression(0);
      setState(318);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(316);
        match(SQLParserParser::ESCAPE);
        setState(317);
        antlrcpp::downCast<PredicateContext *>(_localctx)->escapeChar = match(SQLParserParser::STRING);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(320);
      match(SQLParserParser::IS);
      setState(322);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(321);
        match(SQLParserParser::NOT);
      }
      setState(324);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::NULL_);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(325);
      match(SQLParserParser::IS);
      setState(327);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(326);
        match(SQLParserParser::NOT);
      }
      setState(329);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == SQLParserParser::FALSE || _la == SQLParserParser::TRUE

      || _la == SQLParserParser::UNKNOWN)) {
        antlrcpp::downCast<PredicateContext *>(_localctx)->kind = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(330);
      match(SQLParserParser::IS);
      setState(332);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::NOT) {
        setState(331);
        match(SQLParserParser::NOT);
      }
      setState(334);
      antlrcpp::downCast<PredicateContext *>(_localctx)->kind = match(SQLParserParser::DISTINCT);
      setState(335);
      match(SQLParserParser::FROM);
      setState(336);
      antlrcpp::downCast<PredicateContext *>(_localctx)->right = valueExpression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueExpressionContext ------------------------------------------------------------------

SQLParserParser::ValueExpressionContext::ValueExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::ValueExpressionContext::getRuleIndex() const {
  return SQLParserParser::RuleValueExpression;
}

void SQLParserParser::ValueExpressionContext::copyFrom(ValueExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ValueExpressionDefaultContext ------------------------------------------------------------------

SQLParserParser::PrimaryExpressionContext* SQLParserParser::ValueExpressionDefaultContext::primaryExpression() {
  return getRuleContext<SQLParserParser::PrimaryExpressionContext>(0);
}

SQLParserParser::ValueExpressionDefaultContext::ValueExpressionDefaultContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ValueExpressionDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitValueExpressionDefault(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonContext ------------------------------------------------------------------

SQLParserParser::ComparisonOperatorContext* SQLParserParser::ComparisonContext::comparisonOperator() {
  return getRuleContext<SQLParserParser::ComparisonOperatorContext>(0);
}

std::vector<SQLParserParser::ValueExpressionContext *> SQLParserParser::ComparisonContext::valueExpression() {
  return getRuleContexts<SQLParserParser::ValueExpressionContext>();
}

SQLParserParser::ValueExpressionContext* SQLParserParser::ComparisonContext::valueExpression(size_t i) {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(i);
}

SQLParserParser::ComparisonContext::ComparisonContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticBinaryContext ------------------------------------------------------------------

std::vector<SQLParserParser::ValueExpressionContext *> SQLParserParser::ArithmeticBinaryContext::valueExpression() {
  return getRuleContexts<SQLParserParser::ValueExpressionContext>();
}

SQLParserParser::ValueExpressionContext* SQLParserParser::ArithmeticBinaryContext::valueExpression(size_t i) {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(i);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::ASTERISK() {
  return getToken(SQLParserParser::ASTERISK, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::SLASH() {
  return getToken(SQLParserParser::SLASH, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::PERCENT() {
  return getToken(SQLParserParser::PERCENT, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::DIV() {
  return getToken(SQLParserParser::DIV, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::PLUS() {
  return getToken(SQLParserParser::PLUS, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::CONCAT_PIPE() {
  return getToken(SQLParserParser::CONCAT_PIPE, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::AMPERSAND() {
  return getToken(SQLParserParser::AMPERSAND, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::HAT() {
  return getToken(SQLParserParser::HAT, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticBinaryContext::PIPE() {
  return getToken(SQLParserParser::PIPE, 0);
}

SQLParserParser::ArithmeticBinaryContext::ArithmeticBinaryContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ArithmeticBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticUnaryContext ------------------------------------------------------------------

SQLParserParser::ValueExpressionContext* SQLParserParser::ArithmeticUnaryContext::valueExpression() {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(0);
}

tree::TerminalNode* SQLParserParser::ArithmeticUnaryContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticUnaryContext::PLUS() {
  return getToken(SQLParserParser::PLUS, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticUnaryContext::TILDE() {
  return getToken(SQLParserParser::TILDE, 0);
}

SQLParserParser::ArithmeticUnaryContext::ArithmeticUnaryContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ArithmeticUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticUnary(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::ValueExpressionContext* SQLParserParser::valueExpression() {
   return valueExpression(0);
}

SQLParserParser::ValueExpressionContext* SQLParserParser::valueExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SQLParserParser::ValueExpressionContext *_localctx = _tracker.createInstance<ValueExpressionContext>(_ctx, parentState);
  SQLParserParser::ValueExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, SQLParserParser::RuleValueExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(343);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValueExpressionDefaultContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(340);
      primaryExpression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ArithmeticUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(341);
      antlrcpp::downCast<ArithmeticUnaryContext *>(_localctx)->operator_ = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 263) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 263)) & 35) != 0))) {
        antlrcpp::downCast<ArithmeticUnaryContext *>(_localctx)->operator_ = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(342);
      valueExpression(7);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(366);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(364);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(345);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(346);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SQLParserParser::DIV || ((((_la - 265) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 265)) & 7) != 0))) {
            antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(347);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(348);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(349);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 263) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 263)) & 259) != 0))) {
            antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(350);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(351);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(352);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = match(SQLParserParser::AMPERSAND);
          setState(353);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(354);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(355);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = match(SQLParserParser::HAT);
          setState(356);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(357);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(358);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->operator_ = match(SQLParserParser::PIPE);
          setState(359);
          antlrcpp::downCast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(3);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(360);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(361);
          comparisonOperator();
          setState(362);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->right = valueExpression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(368);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

SQLParserParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::PrimaryExpressionContext::getRuleIndex() const {
  return SQLParserParser::RulePrimaryExpression;
}

void SQLParserParser::PrimaryExpressionContext::copyFrom(PrimaryExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StructContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::StructContext::STRUCT() {
  return getToken(SQLParserParser::STRUCT, 0);
}

std::vector<SQLParserParser::NamedExpressionContext *> SQLParserParser::StructContext::namedExpression() {
  return getRuleContexts<SQLParserParser::NamedExpressionContext>();
}

SQLParserParser::NamedExpressionContext* SQLParserParser::StructContext::namedExpression(size_t i) {
  return getRuleContext<SQLParserParser::NamedExpressionContext>(i);
}

SQLParserParser::StructContext::StructContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::StructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitStruct(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DereferenceContext ------------------------------------------------------------------

SQLParserParser::PrimaryExpressionContext* SQLParserParser::DereferenceContext::primaryExpression() {
  return getRuleContext<SQLParserParser::PrimaryExpressionContext>(0);
}

SQLParserParser::IdentifierContext* SQLParserParser::DereferenceContext::identifier() {
  return getRuleContext<SQLParserParser::IdentifierContext>(0);
}

SQLParserParser::DereferenceContext::DereferenceContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::DereferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitDereference(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleCaseContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::SimpleCaseContext::CASE() {
  return getToken(SQLParserParser::CASE, 0);
}

tree::TerminalNode* SQLParserParser::SimpleCaseContext::END() {
  return getToken(SQLParserParser::END, 0);
}

std::vector<SQLParserParser::ExpressionContext *> SQLParserParser::SimpleCaseContext::expression() {
  return getRuleContexts<SQLParserParser::ExpressionContext>();
}

SQLParserParser::ExpressionContext* SQLParserParser::SimpleCaseContext::expression(size_t i) {
  return getRuleContext<SQLParserParser::ExpressionContext>(i);
}

std::vector<SQLParserParser::WhenClauseContext *> SQLParserParser::SimpleCaseContext::whenClause() {
  return getRuleContexts<SQLParserParser::WhenClauseContext>();
}

SQLParserParser::WhenClauseContext* SQLParserParser::SimpleCaseContext::whenClause(size_t i) {
  return getRuleContext<SQLParserParser::WhenClauseContext>(i);
}

tree::TerminalNode* SQLParserParser::SimpleCaseContext::ELSE() {
  return getToken(SQLParserParser::ELSE, 0);
}

SQLParserParser::SimpleCaseContext::SimpleCaseContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::SimpleCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSimpleCase(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ColumnReferenceContext ------------------------------------------------------------------

SQLParserParser::IdentifierContext* SQLParserParser::ColumnReferenceContext::identifier() {
  return getRuleContext<SQLParserParser::IdentifierContext>(0);
}

SQLParserParser::ColumnReferenceContext::ColumnReferenceContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ColumnReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitColumnReference(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RowConstructorContext ------------------------------------------------------------------

std::vector<SQLParserParser::NamedExpressionContext *> SQLParserParser::RowConstructorContext::namedExpression() {
  return getRuleContexts<SQLParserParser::NamedExpressionContext>();
}

SQLParserParser::NamedExpressionContext* SQLParserParser::RowConstructorContext::namedExpression(size_t i) {
  return getRuleContext<SQLParserParser::NamedExpressionContext>(i);
}

SQLParserParser::RowConstructorContext::RowConstructorContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::RowConstructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitRowConstructor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LastContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::LastContext::LAST() {
  return getToken(SQLParserParser::LAST, 0);
}

SQLParserParser::ExpressionContext* SQLParserParser::LastContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

tree::TerminalNode* SQLParserParser::LastContext::IGNORE() {
  return getToken(SQLParserParser::IGNORE, 0);
}

tree::TerminalNode* SQLParserParser::LastContext::NULLS() {
  return getToken(SQLParserParser::NULLS, 0);
}

SQLParserParser::LastContext::LastContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::LastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitLast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StarContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::StarContext::ASTERISK() {
  return getToken(SQLParserParser::ASTERISK, 0);
}

SQLParserParser::QualifiedNameContext* SQLParserParser::StarContext::qualifiedName() {
  return getRuleContext<SQLParserParser::QualifiedNameContext>(0);
}

SQLParserParser::StarContext::StarContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::StarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitStar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubscriptContext ------------------------------------------------------------------

SQLParserParser::PrimaryExpressionContext* SQLParserParser::SubscriptContext::primaryExpression() {
  return getRuleContext<SQLParserParser::PrimaryExpressionContext>(0);
}

SQLParserParser::ValueExpressionContext* SQLParserParser::SubscriptContext::valueExpression() {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(0);
}

SQLParserParser::SubscriptContext::SubscriptContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::SubscriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSubscript(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubqueryExpressionContext ------------------------------------------------------------------

SQLParserParser::QueryContext* SQLParserParser::SubqueryExpressionContext::query() {
  return getRuleContext<SQLParserParser::QueryContext>(0);
}

SQLParserParser::SubqueryExpressionContext::SubqueryExpressionContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::SubqueryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSubqueryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CurrentDatetimeContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::CurrentDatetimeContext::CURRENT_DATE() {
  return getToken(SQLParserParser::CURRENT_DATE, 0);
}

tree::TerminalNode* SQLParserParser::CurrentDatetimeContext::CURRENT_TIMESTAMP() {
  return getToken(SQLParserParser::CURRENT_TIMESTAMP, 0);
}

SQLParserParser::CurrentDatetimeContext::CurrentDatetimeContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::CurrentDatetimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitCurrentDatetime(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CastContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::CastContext::CAST() {
  return getToken(SQLParserParser::CAST, 0);
}

SQLParserParser::ExpressionContext* SQLParserParser::CastContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

tree::TerminalNode* SQLParserParser::CastContext::AS() {
  return getToken(SQLParserParser::AS, 0);
}

SQLParserParser::DataTypeContext* SQLParserParser::CastContext::dataType() {
  return getRuleContext<SQLParserParser::DataTypeContext>(0);
}

SQLParserParser::CastContext::CastContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantDefaultContext ------------------------------------------------------------------

SQLParserParser::ConstantContext* SQLParserParser::ConstantDefaultContext::constant() {
  return getRuleContext<SQLParserParser::ConstantContext>(0);
}

SQLParserParser::ConstantDefaultContext::ConstantDefaultContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ConstantDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitConstantDefault(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

SQLParserParser::ExpressionContext* SQLParserParser::ParenthesizedExpressionContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

SQLParserParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallContext ------------------------------------------------------------------

SQLParserParser::FunctionNameContext* SQLParserParser::FunctionCallContext::functionName() {
  return getRuleContext<SQLParserParser::FunctionNameContext>(0);
}

std::vector<SQLParserParser::ExpressionContext *> SQLParserParser::FunctionCallContext::expression() {
  return getRuleContexts<SQLParserParser::ExpressionContext>();
}

SQLParserParser::ExpressionContext* SQLParserParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<SQLParserParser::ExpressionContext>(i);
}

SQLParserParser::FunctionCallContext::FunctionCallContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SearchedCaseContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::SearchedCaseContext::CASE() {
  return getToken(SQLParserParser::CASE, 0);
}

tree::TerminalNode* SQLParserParser::SearchedCaseContext::END() {
  return getToken(SQLParserParser::END, 0);
}

std::vector<SQLParserParser::WhenClauseContext *> SQLParserParser::SearchedCaseContext::whenClause() {
  return getRuleContexts<SQLParserParser::WhenClauseContext>();
}

SQLParserParser::WhenClauseContext* SQLParserParser::SearchedCaseContext::whenClause(size_t i) {
  return getRuleContext<SQLParserParser::WhenClauseContext>(i);
}

tree::TerminalNode* SQLParserParser::SearchedCaseContext::ELSE() {
  return getToken(SQLParserParser::ELSE, 0);
}

SQLParserParser::ExpressionContext* SQLParserParser::SearchedCaseContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

SQLParserParser::SearchedCaseContext::SearchedCaseContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::SearchedCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSearchedCase(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PositionContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::PositionContext::POSITION() {
  return getToken(SQLParserParser::POSITION, 0);
}

tree::TerminalNode* SQLParserParser::PositionContext::IN() {
  return getToken(SQLParserParser::IN, 0);
}

std::vector<SQLParserParser::ValueExpressionContext *> SQLParserParser::PositionContext::valueExpression() {
  return getRuleContexts<SQLParserParser::ValueExpressionContext>();
}

SQLParserParser::ValueExpressionContext* SQLParserParser::PositionContext::valueExpression(size_t i) {
  return getRuleContext<SQLParserParser::ValueExpressionContext>(i);
}

SQLParserParser::PositionContext::PositionContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::PositionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitPosition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FirstContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::FirstContext::FIRST() {
  return getToken(SQLParserParser::FIRST, 0);
}

SQLParserParser::ExpressionContext* SQLParserParser::FirstContext::expression() {
  return getRuleContext<SQLParserParser::ExpressionContext>(0);
}

tree::TerminalNode* SQLParserParser::FirstContext::IGNORE() {
  return getToken(SQLParserParser::IGNORE, 0);
}

tree::TerminalNode* SQLParserParser::FirstContext::NULLS() {
  return getToken(SQLParserParser::NULLS, 0);
}

SQLParserParser::FirstContext::FirstContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::FirstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitFirst(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::PrimaryExpressionContext* SQLParserParser::primaryExpression() {
   return primaryExpression(0);
}

SQLParserParser::PrimaryExpressionContext* SQLParserParser::primaryExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SQLParserParser::PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, parentState);
  SQLParserParser::PrimaryExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, SQLParserParser::RulePrimaryExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CurrentDatetimeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(370);
      antlrcpp::downCast<CurrentDatetimeContext *>(_localctx)->name = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == SQLParserParser::CURRENT_DATE

      || _la == SQLParserParser::CURRENT_TIMESTAMP)) {
        antlrcpp::downCast<CurrentDatetimeContext *>(_localctx)->name = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SearchedCaseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(371);
      match(SQLParserParser::CASE);
      setState(373); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(372);
        whenClause();
        setState(375); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SQLParserParser::WHEN);
      setState(379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::ELSE) {
        setState(377);
        match(SQLParserParser::ELSE);
        setState(378);
        antlrcpp::downCast<SearchedCaseContext *>(_localctx)->elseExpression = expression();
      }
      setState(381);
      match(SQLParserParser::END);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SimpleCaseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(383);
      match(SQLParserParser::CASE);
      setState(384);
      antlrcpp::downCast<SimpleCaseContext *>(_localctx)->value = expression();
      setState(386); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(385);
        whenClause();
        setState(388); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SQLParserParser::WHEN);
      setState(392);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::ELSE) {
        setState(390);
        match(SQLParserParser::ELSE);
        setState(391);
        antlrcpp::downCast<SimpleCaseContext *>(_localctx)->elseExpression = expression();
      }
      setState(394);
      match(SQLParserParser::END);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CastContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(396);
      match(SQLParserParser::CAST);
      setState(397);
      match(SQLParserParser::T__2);
      setState(398);
      expression();
      setState(399);
      match(SQLParserParser::AS);
      setState(400);
      dataType();
      setState(401);
      match(SQLParserParser::T__3);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StructContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(403);
      match(SQLParserParser::STRUCT);
      setState(404);
      match(SQLParserParser::T__2);
      setState(413);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -248) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & -1) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & -1) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & 9223372036854775807) != 0) || ((((_la - 263) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 263)) & 2096167) != 0)) {
        setState(405);
        antlrcpp::downCast<StructContext *>(_localctx)->namedExpressionContext = namedExpression();
        antlrcpp::downCast<StructContext *>(_localctx)->argument.push_back(antlrcpp::downCast<StructContext *>(_localctx)->namedExpressionContext);
        setState(410);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLParserParser::T__1) {
          setState(406);
          match(SQLParserParser::T__1);
          setState(407);
          antlrcpp::downCast<StructContext *>(_localctx)->namedExpressionContext = namedExpression();
          antlrcpp::downCast<StructContext *>(_localctx)->argument.push_back(antlrcpp::downCast<StructContext *>(_localctx)->namedExpressionContext);
          setState(412);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(415);
      match(SQLParserParser::T__3);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FirstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(416);
      match(SQLParserParser::FIRST);
      setState(417);
      match(SQLParserParser::T__2);
      setState(418);
      expression();
      setState(421);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::IGNORE) {
        setState(419);
        match(SQLParserParser::IGNORE);
        setState(420);
        match(SQLParserParser::NULLS);
      }
      setState(423);
      match(SQLParserParser::T__3);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<LastContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(425);
      match(SQLParserParser::LAST);
      setState(426);
      match(SQLParserParser::T__2);
      setState(427);
      expression();
      setState(430);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::IGNORE) {
        setState(428);
        match(SQLParserParser::IGNORE);
        setState(429);
        match(SQLParserParser::NULLS);
      }
      setState(432);
      match(SQLParserParser::T__3);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PositionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(434);
      match(SQLParserParser::POSITION);
      setState(435);
      match(SQLParserParser::T__2);
      setState(436);
      antlrcpp::downCast<PositionContext *>(_localctx)->substr = valueExpression(0);
      setState(437);
      match(SQLParserParser::IN);
      setState(438);
      antlrcpp::downCast<PositionContext *>(_localctx)->str = valueExpression(0);
      setState(439);
      match(SQLParserParser::T__3);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ConstantDefaultContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(441);
      constant();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<StarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(442);
      match(SQLParserParser::ASTERISK);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<StarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(443);
      qualifiedName();
      setState(444);
      match(SQLParserParser::T__4);
      setState(445);
      match(SQLParserParser::ASTERISK);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<RowConstructorContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(447);
      match(SQLParserParser::T__2);
      setState(448);
      namedExpression();
      setState(451); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(449);
        match(SQLParserParser::T__1);
        setState(450);
        namedExpression();
        setState(453); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SQLParserParser::T__1);
      setState(455);
      match(SQLParserParser::T__3);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<SubqueryExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(457);
      match(SQLParserParser::T__2);
      setState(458);
      query();
      setState(459);
      match(SQLParserParser::T__3);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<FunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(461);
      functionName();
      setState(462);
      match(SQLParserParser::T__2);
      setState(471);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -248) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & -1) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & -1) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & 9223372036854775807) != 0) || ((((_la - 263) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 263)) & 2096167) != 0)) {
        setState(463);
        antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext = expression();
        antlrcpp::downCast<FunctionCallContext *>(_localctx)->argument.push_back(antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext);
        setState(468);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SQLParserParser::T__1) {
          setState(464);
          match(SQLParserParser::T__1);
          setState(465);
          antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext = expression();
          antlrcpp::downCast<FunctionCallContext *>(_localctx)->argument.push_back(antlrcpp::downCast<FunctionCallContext *>(_localctx)->expressionContext);
          setState(470);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(473);
      match(SQLParserParser::T__3);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<ColumnReferenceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(475);
      identifier();
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(476);
      match(SQLParserParser::T__2);
      setState(477);
      expression();
      setState(478);
      match(SQLParserParser::T__3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(492);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(490);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<SubscriptContext>(_tracker.createInstance<PrimaryExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->value = previousContext;
          pushNewRecursionContext(newContext, startState, RulePrimaryExpression);
          setState(482);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(483);
          match(SQLParserParser::T__5);
          setState(484);
          antlrcpp::downCast<SubscriptContext *>(_localctx)->index = valueExpression(0);
          setState(485);
          match(SQLParserParser::T__6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DereferenceContext>(_tracker.createInstance<PrimaryExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->base = previousContext;
          pushNewRecursionContext(newContext, startState, RulePrimaryExpression);
          setState(487);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(488);
          match(SQLParserParser::T__4);
          setState(489);
          antlrcpp::downCast<DereferenceContext *>(_localctx)->fieldName = identifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(494);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

SQLParserParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::ConstantContext::getRuleIndex() const {
  return SQLParserParser::RuleConstant;
}

void SQLParserParser::ConstantContext::copyFrom(ConstantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NullLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::NullLiteralContext::NULL_() {
  return getToken(SQLParserParser::NULL_, 0);
}

SQLParserParser::NullLiteralContext::NullLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::NullLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitNullLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringLiteralContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> SQLParserParser::StringLiteralContext::STRING() {
  return getTokens(SQLParserParser::STRING);
}

tree::TerminalNode* SQLParserParser::StringLiteralContext::STRING(size_t i) {
  return getToken(SQLParserParser::STRING, i);
}

SQLParserParser::StringLiteralContext::StringLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeConstructorContext ------------------------------------------------------------------

SQLParserParser::IdentifierContext* SQLParserParser::TypeConstructorContext::identifier() {
  return getRuleContext<SQLParserParser::IdentifierContext>(0);
}

tree::TerminalNode* SQLParserParser::TypeConstructorContext::STRING() {
  return getToken(SQLParserParser::STRING, 0);
}

SQLParserParser::TypeConstructorContext::TypeConstructorContext(ConstantContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::TypeConstructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitTypeConstructor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntervalLiteralContext ------------------------------------------------------------------

SQLParserParser::IntervalContext* SQLParserParser::IntervalLiteralContext::interval() {
  return getRuleContext<SQLParserParser::IntervalContext>(0);
}

SQLParserParser::IntervalLiteralContext::IntervalLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::IntervalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitIntervalLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumericLiteralContext ------------------------------------------------------------------

SQLParserParser::NumberContext* SQLParserParser::NumericLiteralContext::number() {
  return getRuleContext<SQLParserParser::NumberContext>(0);
}

SQLParserParser::NumericLiteralContext::NumericLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanLiteralContext ------------------------------------------------------------------

SQLParserParser::BooleanValueContext* SQLParserParser::BooleanLiteralContext::booleanValue() {
  return getRuleContext<SQLParserParser::BooleanValueContext>(0);
}

SQLParserParser::BooleanLiteralContext::BooleanLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::ConstantContext* SQLParserParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 54, SQLParserParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(507);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SQLParserParser::NullLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(495);
      match(SQLParserParser::NULL_);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SQLParserParser::IntervalLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(496);
      interval();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SQLParserParser::TypeConstructorContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(497);
      identifier();
      setState(498);
      match(SQLParserParser::STRING);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SQLParserParser::NumericLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(500);
      number();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<SQLParserParser::BooleanLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(501);
      booleanValue();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<SQLParserParser::StringLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(503); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(502);
                match(SQLParserParser::STRING);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(505); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

SQLParserParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::EQ() {
  return getToken(SQLParserParser::EQ, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::NEQ() {
  return getToken(SQLParserParser::NEQ, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::NEQJ() {
  return getToken(SQLParserParser::NEQJ, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::LT() {
  return getToken(SQLParserParser::LT, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::LTE() {
  return getToken(SQLParserParser::LTE, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::GT() {
  return getToken(SQLParserParser::GT, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::GTE() {
  return getToken(SQLParserParser::GTE, 0);
}

tree::TerminalNode* SQLParserParser::ComparisonOperatorContext::NSEQ() {
  return getToken(SQLParserParser::NSEQ, 0);
}


size_t SQLParserParser::ComparisonOperatorContext::getRuleIndex() const {
  return SQLParserParser::RuleComparisonOperator;
}


std::any SQLParserParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::ComparisonOperatorContext* SQLParserParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 56, SQLParserParser::RuleComparisonOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    _la = _input->LA(1);
    if (!(((((_la - 255) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 255)) & 255) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticOperatorContext ------------------------------------------------------------------

SQLParserParser::ArithmeticOperatorContext::ArithmeticOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::PLUS() {
  return getToken(SQLParserParser::PLUS, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::ASTERISK() {
  return getToken(SQLParserParser::ASTERISK, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::SLASH() {
  return getToken(SQLParserParser::SLASH, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::PERCENT() {
  return getToken(SQLParserParser::PERCENT, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::DIV() {
  return getToken(SQLParserParser::DIV, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::TILDE() {
  return getToken(SQLParserParser::TILDE, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::AMPERSAND() {
  return getToken(SQLParserParser::AMPERSAND, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::PIPE() {
  return getToken(SQLParserParser::PIPE, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::CONCAT_PIPE() {
  return getToken(SQLParserParser::CONCAT_PIPE, 0);
}

tree::TerminalNode* SQLParserParser::ArithmeticOperatorContext::HAT() {
  return getToken(SQLParserParser::HAT, 0);
}


size_t SQLParserParser::ArithmeticOperatorContext::getRuleIndex() const {
  return SQLParserParser::RuleArithmeticOperator;
}


std::any SQLParserParser::ArithmeticOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticOperator(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::ArithmeticOperatorContext* SQLParserParser::arithmeticOperator() {
  ArithmeticOperatorContext *_localctx = _tracker.createInstance<ArithmeticOperatorContext>(_ctx, getState());
  enterRule(_localctx, 58, SQLParserParser::RuleArithmeticOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    _la = _input->LA(1);
    if (!(_la == SQLParserParser::DIV || ((((_la - 263) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 263)) & 1023) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateOperatorContext ------------------------------------------------------------------

SQLParserParser::PredicateOperatorContext::PredicateOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::PredicateOperatorContext::OR() {
  return getToken(SQLParserParser::OR, 0);
}

tree::TerminalNode* SQLParserParser::PredicateOperatorContext::AND() {
  return getToken(SQLParserParser::AND, 0);
}

tree::TerminalNode* SQLParserParser::PredicateOperatorContext::IN() {
  return getToken(SQLParserParser::IN, 0);
}

tree::TerminalNode* SQLParserParser::PredicateOperatorContext::NOT() {
  return getToken(SQLParserParser::NOT, 0);
}


size_t SQLParserParser::PredicateOperatorContext::getRuleIndex() const {
  return SQLParserParser::RulePredicateOperator;
}


std::any SQLParserParser::PredicateOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitPredicateOperator(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::PredicateOperatorContext* SQLParserParser::predicateOperator() {
  PredicateOperatorContext *_localctx = _tracker.createInstance<PredicateOperatorContext>(_ctx, getState());
  enterRule(_localctx, 60, SQLParserParser::RulePredicateOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    _la = _input->LA(1);
    if (!(_la == SQLParserParser::AND || ((((_la - 108) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 108)) & 70643622084609) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanValueContext ------------------------------------------------------------------

SQLParserParser::BooleanValueContext::BooleanValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::BooleanValueContext::TRUE() {
  return getToken(SQLParserParser::TRUE, 0);
}

tree::TerminalNode* SQLParserParser::BooleanValueContext::FALSE() {
  return getToken(SQLParserParser::FALSE, 0);
}


size_t SQLParserParser::BooleanValueContext::getRuleIndex() const {
  return SQLParserParser::RuleBooleanValue;
}


std::any SQLParserParser::BooleanValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitBooleanValue(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::BooleanValueContext* SQLParserParser::booleanValue() {
  BooleanValueContext *_localctx = _tracker.createInstance<BooleanValueContext>(_ctx, getState());
  enterRule(_localctx, 62, SQLParserParser::RuleBooleanValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    _la = _input->LA(1);
    if (!(_la == SQLParserParser::FALSE || _la == SQLParserParser::TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalContext ------------------------------------------------------------------

SQLParserParser::IntervalContext::IntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::IntervalContext::INTERVAL() {
  return getToken(SQLParserParser::INTERVAL, 0);
}

SQLParserParser::ErrorCapturingMultiUnitsIntervalContext* SQLParserParser::IntervalContext::errorCapturingMultiUnitsInterval() {
  return getRuleContext<SQLParserParser::ErrorCapturingMultiUnitsIntervalContext>(0);
}

SQLParserParser::ErrorCapturingUnitToUnitIntervalContext* SQLParserParser::IntervalContext::errorCapturingUnitToUnitInterval() {
  return getRuleContext<SQLParserParser::ErrorCapturingUnitToUnitIntervalContext>(0);
}


size_t SQLParserParser::IntervalContext::getRuleIndex() const {
  return SQLParserParser::RuleInterval;
}


std::any SQLParserParser::IntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitInterval(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::IntervalContext* SQLParserParser::interval() {
  IntervalContext *_localctx = _tracker.createInstance<IntervalContext>(_ctx, getState());
  enterRule(_localctx, 64, SQLParserParser::RuleInterval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
    match(SQLParserParser::INTERVAL);
    setState(520);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(518);
      errorCapturingMultiUnitsInterval();
      break;
    }

    case 2: {
      setState(519);
      errorCapturingUnitToUnitInterval();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorCapturingMultiUnitsIntervalContext ------------------------------------------------------------------

SQLParserParser::ErrorCapturingMultiUnitsIntervalContext::ErrorCapturingMultiUnitsIntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::MultiUnitsIntervalContext* SQLParserParser::ErrorCapturingMultiUnitsIntervalContext::multiUnitsInterval() {
  return getRuleContext<SQLParserParser::MultiUnitsIntervalContext>(0);
}

SQLParserParser::UnitToUnitIntervalContext* SQLParserParser::ErrorCapturingMultiUnitsIntervalContext::unitToUnitInterval() {
  return getRuleContext<SQLParserParser::UnitToUnitIntervalContext>(0);
}


size_t SQLParserParser::ErrorCapturingMultiUnitsIntervalContext::getRuleIndex() const {
  return SQLParserParser::RuleErrorCapturingMultiUnitsInterval;
}


std::any SQLParserParser::ErrorCapturingMultiUnitsIntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitErrorCapturingMultiUnitsInterval(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::ErrorCapturingMultiUnitsIntervalContext* SQLParserParser::errorCapturingMultiUnitsInterval() {
  ErrorCapturingMultiUnitsIntervalContext *_localctx = _tracker.createInstance<ErrorCapturingMultiUnitsIntervalContext>(_ctx, getState());
  enterRule(_localctx, 66, SQLParserParser::RuleErrorCapturingMultiUnitsInterval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    multiUnitsInterval();
    setState(524);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      setState(523);
      unitToUnitInterval();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiUnitsIntervalContext ------------------------------------------------------------------

SQLParserParser::MultiUnitsIntervalContext::MultiUnitsIntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::IntervalValueContext *> SQLParserParser::MultiUnitsIntervalContext::intervalValue() {
  return getRuleContexts<SQLParserParser::IntervalValueContext>();
}

SQLParserParser::IntervalValueContext* SQLParserParser::MultiUnitsIntervalContext::intervalValue(size_t i) {
  return getRuleContext<SQLParserParser::IntervalValueContext>(i);
}

std::vector<SQLParserParser::IdentifierContext *> SQLParserParser::MultiUnitsIntervalContext::identifier() {
  return getRuleContexts<SQLParserParser::IdentifierContext>();
}

SQLParserParser::IdentifierContext* SQLParserParser::MultiUnitsIntervalContext::identifier(size_t i) {
  return getRuleContext<SQLParserParser::IdentifierContext>(i);
}


size_t SQLParserParser::MultiUnitsIntervalContext::getRuleIndex() const {
  return SQLParserParser::RuleMultiUnitsInterval;
}


std::any SQLParserParser::MultiUnitsIntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitMultiUnitsInterval(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::MultiUnitsIntervalContext* SQLParserParser::multiUnitsInterval() {
  MultiUnitsIntervalContext *_localctx = _tracker.createInstance<MultiUnitsIntervalContext>(_ctx, getState());
  enterRule(_localctx, 68, SQLParserParser::RuleMultiUnitsInterval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(529); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(526);
              intervalValue();
              setState(527);
              antlrcpp::downCast<MultiUnitsIntervalContext *>(_localctx)->identifierContext = identifier();
              antlrcpp::downCast<MultiUnitsIntervalContext *>(_localctx)->unit.push_back(antlrcpp::downCast<MultiUnitsIntervalContext *>(_localctx)->identifierContext);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(531); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorCapturingUnitToUnitIntervalContext ------------------------------------------------------------------

SQLParserParser::ErrorCapturingUnitToUnitIntervalContext::ErrorCapturingUnitToUnitIntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::UnitToUnitIntervalContext *> SQLParserParser::ErrorCapturingUnitToUnitIntervalContext::unitToUnitInterval() {
  return getRuleContexts<SQLParserParser::UnitToUnitIntervalContext>();
}

SQLParserParser::UnitToUnitIntervalContext* SQLParserParser::ErrorCapturingUnitToUnitIntervalContext::unitToUnitInterval(size_t i) {
  return getRuleContext<SQLParserParser::UnitToUnitIntervalContext>(i);
}

SQLParserParser::MultiUnitsIntervalContext* SQLParserParser::ErrorCapturingUnitToUnitIntervalContext::multiUnitsInterval() {
  return getRuleContext<SQLParserParser::MultiUnitsIntervalContext>(0);
}


size_t SQLParserParser::ErrorCapturingUnitToUnitIntervalContext::getRuleIndex() const {
  return SQLParserParser::RuleErrorCapturingUnitToUnitInterval;
}


std::any SQLParserParser::ErrorCapturingUnitToUnitIntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitErrorCapturingUnitToUnitInterval(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::ErrorCapturingUnitToUnitIntervalContext* SQLParserParser::errorCapturingUnitToUnitInterval() {
  ErrorCapturingUnitToUnitIntervalContext *_localctx = _tracker.createInstance<ErrorCapturingUnitToUnitIntervalContext>(_ctx, getState());
  enterRule(_localctx, 70, SQLParserParser::RuleErrorCapturingUnitToUnitInterval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    antlrcpp::downCast<ErrorCapturingUnitToUnitIntervalContext *>(_localctx)->body = unitToUnitInterval();
    setState(536);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      setState(534);
      antlrcpp::downCast<ErrorCapturingUnitToUnitIntervalContext *>(_localctx)->error1 = multiUnitsInterval();
      break;
    }

    case 2: {
      setState(535);
      antlrcpp::downCast<ErrorCapturingUnitToUnitIntervalContext *>(_localctx)->error2 = unitToUnitInterval();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitToUnitIntervalContext ------------------------------------------------------------------

SQLParserParser::UnitToUnitIntervalContext::UnitToUnitIntervalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::UnitToUnitIntervalContext::TO() {
  return getToken(SQLParserParser::TO, 0);
}

SQLParserParser::IntervalValueContext* SQLParserParser::UnitToUnitIntervalContext::intervalValue() {
  return getRuleContext<SQLParserParser::IntervalValueContext>(0);
}

std::vector<SQLParserParser::IdentifierContext *> SQLParserParser::UnitToUnitIntervalContext::identifier() {
  return getRuleContexts<SQLParserParser::IdentifierContext>();
}

SQLParserParser::IdentifierContext* SQLParserParser::UnitToUnitIntervalContext::identifier(size_t i) {
  return getRuleContext<SQLParserParser::IdentifierContext>(i);
}


size_t SQLParserParser::UnitToUnitIntervalContext::getRuleIndex() const {
  return SQLParserParser::RuleUnitToUnitInterval;
}


std::any SQLParserParser::UnitToUnitIntervalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitUnitToUnitInterval(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::UnitToUnitIntervalContext* SQLParserParser::unitToUnitInterval() {
  UnitToUnitIntervalContext *_localctx = _tracker.createInstance<UnitToUnitIntervalContext>(_ctx, getState());
  enterRule(_localctx, 72, SQLParserParser::RuleUnitToUnitInterval);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    antlrcpp::downCast<UnitToUnitIntervalContext *>(_localctx)->value = intervalValue();
    setState(539);
    antlrcpp::downCast<UnitToUnitIntervalContext *>(_localctx)->from = identifier();
    setState(540);
    match(SQLParserParser::TO);
    setState(541);
    antlrcpp::downCast<UnitToUnitIntervalContext *>(_localctx)->to = identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalValueContext ------------------------------------------------------------------

SQLParserParser::IntervalValueContext::IntervalValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::IntervalValueContext::INTEGER_VALUE() {
  return getToken(SQLParserParser::INTEGER_VALUE, 0);
}

tree::TerminalNode* SQLParserParser::IntervalValueContext::DECIMAL_VALUE() {
  return getToken(SQLParserParser::DECIMAL_VALUE, 0);
}

tree::TerminalNode* SQLParserParser::IntervalValueContext::PLUS() {
  return getToken(SQLParserParser::PLUS, 0);
}

tree::TerminalNode* SQLParserParser::IntervalValueContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

tree::TerminalNode* SQLParserParser::IntervalValueContext::STRING() {
  return getToken(SQLParserParser::STRING, 0);
}


size_t SQLParserParser::IntervalValueContext::getRuleIndex() const {
  return SQLParserParser::RuleIntervalValue;
}


std::any SQLParserParser::IntervalValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitIntervalValue(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::IntervalValueContext* SQLParserParser::intervalValue() {
  IntervalValueContext *_localctx = _tracker.createInstance<IntervalValueContext>(_ctx, getState());
  enterRule(_localctx, 74, SQLParserParser::RuleIntervalValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(548);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLParserParser::PLUS:
      case SQLParserParser::MINUS:
      case SQLParserParser::INTEGER_VALUE:
      case SQLParserParser::DECIMAL_VALUE: {
        enterOuterAlt(_localctx, 1);
        setState(544);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SQLParserParser::PLUS

        || _la == SQLParserParser::MINUS) {
          setState(543);
          _la = _input->LA(1);
          if (!(_la == SQLParserParser::PLUS

          || _la == SQLParserParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(546);
        _la = _input->LA(1);
        if (!(_la == SQLParserParser::INTEGER_VALUE

        || _la == SQLParserParser::DECIMAL_VALUE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case SQLParserParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(547);
        match(SQLParserParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

SQLParserParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::DataTypeContext::getRuleIndex() const {
  return SQLParserParser::RuleDataType;
}

void SQLParserParser::DataTypeContext::copyFrom(DataTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ComplexDataTypeContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::ComplexDataTypeContext::LT() {
  return getToken(SQLParserParser::LT, 0);
}

std::vector<SQLParserParser::DataTypeContext *> SQLParserParser::ComplexDataTypeContext::dataType() {
  return getRuleContexts<SQLParserParser::DataTypeContext>();
}

SQLParserParser::DataTypeContext* SQLParserParser::ComplexDataTypeContext::dataType(size_t i) {
  return getRuleContext<SQLParserParser::DataTypeContext>(i);
}

tree::TerminalNode* SQLParserParser::ComplexDataTypeContext::GT() {
  return getToken(SQLParserParser::GT, 0);
}

tree::TerminalNode* SQLParserParser::ComplexDataTypeContext::ARRAY() {
  return getToken(SQLParserParser::ARRAY, 0);
}

tree::TerminalNode* SQLParserParser::ComplexDataTypeContext::MAP() {
  return getToken(SQLParserParser::MAP, 0);
}

SQLParserParser::ComplexDataTypeContext::ComplexDataTypeContext(DataTypeContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::ComplexDataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitComplexDataType(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::DataTypeContext* SQLParserParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 76, SQLParserParser::RuleDataType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(562);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SQLParserParser::ARRAY: {
        _localctx = _tracker.createInstance<SQLParserParser::ComplexDataTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(550);
        antlrcpp::downCast<ComplexDataTypeContext *>(_localctx)->complex = match(SQLParserParser::ARRAY);
        setState(551);
        match(SQLParserParser::LT);
        setState(552);
        dataType();
        setState(553);
        match(SQLParserParser::GT);
        break;
      }

      case SQLParserParser::MAP: {
        _localctx = _tracker.createInstance<SQLParserParser::ComplexDataTypeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(555);
        antlrcpp::downCast<ComplexDataTypeContext *>(_localctx)->complex = match(SQLParserParser::MAP);
        setState(556);
        match(SQLParserParser::LT);
        setState(557);
        dataType();
        setState(558);
        match(SQLParserParser::T__1);
        setState(559);
        dataType();
        setState(560);
        match(SQLParserParser::GT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenClauseContext ------------------------------------------------------------------

SQLParserParser::WhenClauseContext::WhenClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::WhenClauseContext::WHEN() {
  return getToken(SQLParserParser::WHEN, 0);
}

tree::TerminalNode* SQLParserParser::WhenClauseContext::THEN() {
  return getToken(SQLParserParser::THEN, 0);
}

std::vector<SQLParserParser::ExpressionContext *> SQLParserParser::WhenClauseContext::expression() {
  return getRuleContexts<SQLParserParser::ExpressionContext>();
}

SQLParserParser::ExpressionContext* SQLParserParser::WhenClauseContext::expression(size_t i) {
  return getRuleContext<SQLParserParser::ExpressionContext>(i);
}


size_t SQLParserParser::WhenClauseContext::getRuleIndex() const {
  return SQLParserParser::RuleWhenClause;
}


std::any SQLParserParser::WhenClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitWhenClause(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::WhenClauseContext* SQLParserParser::whenClause() {
  WhenClauseContext *_localctx = _tracker.createInstance<WhenClauseContext>(_ctx, getState());
  enterRule(_localctx, 78, SQLParserParser::RuleWhenClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(SQLParserParser::WHEN);
    setState(565);
    antlrcpp::downCast<WhenClauseContext *>(_localctx)->condition = expression();
    setState(566);
    match(SQLParserParser::THEN);
    setState(567);
    antlrcpp::downCast<WhenClauseContext *>(_localctx)->result = expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameListContext ------------------------------------------------------------------

SQLParserParser::QualifiedNameListContext::QualifiedNameListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::QualifiedNameContext *> SQLParserParser::QualifiedNameListContext::qualifiedName() {
  return getRuleContexts<SQLParserParser::QualifiedNameContext>();
}

SQLParserParser::QualifiedNameContext* SQLParserParser::QualifiedNameListContext::qualifiedName(size_t i) {
  return getRuleContext<SQLParserParser::QualifiedNameContext>(i);
}


size_t SQLParserParser::QualifiedNameListContext::getRuleIndex() const {
  return SQLParserParser::RuleQualifiedNameList;
}


std::any SQLParserParser::QualifiedNameListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedNameList(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::QualifiedNameListContext* SQLParserParser::qualifiedNameList() {
  QualifiedNameListContext *_localctx = _tracker.createInstance<QualifiedNameListContext>(_ctx, getState());
  enterRule(_localctx, 80, SQLParserParser::RuleQualifiedNameList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    qualifiedName();
    setState(574);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SQLParserParser::T__1) {
      setState(570);
      match(SQLParserParser::T__1);
      setState(571);
      qualifiedName();
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionNameContext ------------------------------------------------------------------

SQLParserParser::FunctionNameContext::FunctionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::QualifiedNameContext* SQLParserParser::FunctionNameContext::qualifiedName() {
  return getRuleContext<SQLParserParser::QualifiedNameContext>(0);
}

tree::TerminalNode* SQLParserParser::FunctionNameContext::FILTER() {
  return getToken(SQLParserParser::FILTER, 0);
}

tree::TerminalNode* SQLParserParser::FunctionNameContext::LEFT() {
  return getToken(SQLParserParser::LEFT, 0);
}

tree::TerminalNode* SQLParserParser::FunctionNameContext::RIGHT() {
  return getToken(SQLParserParser::RIGHT, 0);
}


size_t SQLParserParser::FunctionNameContext::getRuleIndex() const {
  return SQLParserParser::RuleFunctionName;
}


std::any SQLParserParser::FunctionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitFunctionName(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::FunctionNameContext* SQLParserParser::functionName() {
  FunctionNameContext *_localctx = _tracker.createInstance<FunctionNameContext>(_ctx, getState());
  enterRule(_localctx, 82, SQLParserParser::RuleFunctionName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(581);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(577);
      qualifiedName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(578);
      match(SQLParserParser::FILTER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(579);
      match(SQLParserParser::LEFT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(580);
      match(SQLParserParser::RIGHT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameContext ------------------------------------------------------------------

SQLParserParser::QualifiedNameContext::QualifiedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SQLParserParser::IdentifierContext *> SQLParserParser::QualifiedNameContext::identifier() {
  return getRuleContexts<SQLParserParser::IdentifierContext>();
}

SQLParserParser::IdentifierContext* SQLParserParser::QualifiedNameContext::identifier(size_t i) {
  return getRuleContext<SQLParserParser::IdentifierContext>(i);
}


size_t SQLParserParser::QualifiedNameContext::getRuleIndex() const {
  return SQLParserParser::RuleQualifiedName;
}


std::any SQLParserParser::QualifiedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedName(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::QualifiedNameContext* SQLParserParser::qualifiedName() {
  QualifiedNameContext *_localctx = _tracker.createInstance<QualifiedNameContext>(_ctx, getState());
  enterRule(_localctx, 84, SQLParserParser::RuleQualifiedName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(583);
    identifier();
    setState(588);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(584);
        match(SQLParserParser::T__4);
        setState(585);
        identifier(); 
      }
      setState(590);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

SQLParserParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SQLParserParser::StrictIdentifierContext* SQLParserParser::IdentifierContext::strictIdentifier() {
  return getRuleContext<SQLParserParser::StrictIdentifierContext>(0);
}

SQLParserParser::StrictNonReservedContext* SQLParserParser::IdentifierContext::strictNonReserved() {
  return getRuleContext<SQLParserParser::StrictNonReservedContext>(0);
}


size_t SQLParserParser::IdentifierContext::getRuleIndex() const {
  return SQLParserParser::RuleIdentifier;
}


std::any SQLParserParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::IdentifierContext* SQLParserParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 86, SQLParserParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(593);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(591);
      strictIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(592);
      strictNonReserved();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrictIdentifierContext ------------------------------------------------------------------

SQLParserParser::StrictIdentifierContext::StrictIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::StrictIdentifierContext::getRuleIndex() const {
  return SQLParserParser::RuleStrictIdentifier;
}

void SQLParserParser::StrictIdentifierContext::copyFrom(StrictIdentifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- QuotedIdentifierAlternativeContext ------------------------------------------------------------------

SQLParserParser::QuotedIdentifierContext* SQLParserParser::QuotedIdentifierAlternativeContext::quotedIdentifier() {
  return getRuleContext<SQLParserParser::QuotedIdentifierContext>(0);
}

SQLParserParser::QuotedIdentifierAlternativeContext::QuotedIdentifierAlternativeContext(StrictIdentifierContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::QuotedIdentifierAlternativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQuotedIdentifierAlternative(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnquotedIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::UnquotedIdentifierContext::IDENTIFIER() {
  return getToken(SQLParserParser::IDENTIFIER, 0);
}

SQLParserParser::AnsiNonReservedContext* SQLParserParser::UnquotedIdentifierContext::ansiNonReserved() {
  return getRuleContext<SQLParserParser::AnsiNonReservedContext>(0);
}

SQLParserParser::NonReservedContext* SQLParserParser::UnquotedIdentifierContext::nonReserved() {
  return getRuleContext<SQLParserParser::NonReservedContext>(0);
}

SQLParserParser::UnquotedIdentifierContext::UnquotedIdentifierContext(StrictIdentifierContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::UnquotedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitUnquotedIdentifier(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::StrictIdentifierContext* SQLParserParser::strictIdentifier() {
  StrictIdentifierContext *_localctx = _tracker.createInstance<StrictIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 88, SQLParserParser::RuleStrictIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(599);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SQLParserParser::UnquotedIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(595);
      match(SQLParserParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SQLParserParser::QuotedIdentifierAlternativeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(596);
      quotedIdentifier();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SQLParserParser::UnquotedIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(597);
      ansiNonReserved();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SQLParserParser::UnquotedIdentifierContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(598);
      nonReserved();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuotedIdentifierContext ------------------------------------------------------------------

SQLParserParser::QuotedIdentifierContext::QuotedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::QuotedIdentifierContext::BACKQUOTED_IDENTIFIER() {
  return getToken(SQLParserParser::BACKQUOTED_IDENTIFIER, 0);
}


size_t SQLParserParser::QuotedIdentifierContext::getRuleIndex() const {
  return SQLParserParser::RuleQuotedIdentifier;
}


std::any SQLParserParser::QuotedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitQuotedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::QuotedIdentifierContext* SQLParserParser::quotedIdentifier() {
  QuotedIdentifierContext *_localctx = _tracker.createInstance<QuotedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 90, SQLParserParser::RuleQuotedIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    match(SQLParserParser::BACKQUOTED_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SQLParserParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SQLParserParser::NumberContext::getRuleIndex() const {
  return SQLParserParser::RuleNumber;
}

void SQLParserParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BigIntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::BigIntLiteralContext::BIGINT_LITERAL() {
  return getToken(SQLParserParser::BIGINT_LITERAL, 0);
}

tree::TerminalNode* SQLParserParser::BigIntLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::BigIntLiteralContext::BigIntLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::BigIntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitBigIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TinyIntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::TinyIntLiteralContext::TINYINT_LITERAL() {
  return getToken(SQLParserParser::TINYINT_LITERAL, 0);
}

tree::TerminalNode* SQLParserParser::TinyIntLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::TinyIntLiteralContext::TinyIntLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::TinyIntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitTinyIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LegacyDecimalLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::LegacyDecimalLiteralContext::EXPONENT_VALUE() {
  return getToken(SQLParserParser::EXPONENT_VALUE, 0);
}

tree::TerminalNode* SQLParserParser::LegacyDecimalLiteralContext::DECIMAL_VALUE() {
  return getToken(SQLParserParser::DECIMAL_VALUE, 0);
}

tree::TerminalNode* SQLParserParser::LegacyDecimalLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::LegacyDecimalLiteralContext::LegacyDecimalLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::LegacyDecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitLegacyDecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BigDecimalLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::BigDecimalLiteralContext::BIGDECIMAL_LITERAL() {
  return getToken(SQLParserParser::BIGDECIMAL_LITERAL, 0);
}

tree::TerminalNode* SQLParserParser::BigDecimalLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::BigDecimalLiteralContext::BigDecimalLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::BigDecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitBigDecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::DoubleLiteralContext::DOUBLE_LITERAL() {
  return getToken(SQLParserParser::DOUBLE_LITERAL, 0);
}

tree::TerminalNode* SQLParserParser::DoubleLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::DoubleLiteralContext::DoubleLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::DoubleLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitDoubleLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::IntegerLiteralContext::INTEGER_VALUE() {
  return getToken(SQLParserParser::INTEGER_VALUE, 0);
}

tree::TerminalNode* SQLParserParser::IntegerLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::IntegerLiteralContext::IntegerLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SmallIntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SQLParserParser::SmallIntLiteralContext::SMALLINT_LITERAL() {
  return getToken(SQLParserParser::SMALLINT_LITERAL, 0);
}

tree::TerminalNode* SQLParserParser::SmallIntLiteralContext::MINUS() {
  return getToken(SQLParserParser::MINUS, 0);
}

SQLParserParser::SmallIntLiteralContext::SmallIntLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


std::any SQLParserParser::SmallIntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitSmallIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
SQLParserParser::NumberContext* SQLParserParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 92, SQLParserParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SQLParserParser::LegacyDecimalLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(604);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(603);
        match(SQLParserParser::MINUS);
      }
      setState(606);
      _la = _input->LA(1);
      if (!(_la == SQLParserParser::EXPONENT_VALUE

      || _la == SQLParserParser::DECIMAL_VALUE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SQLParserParser::IntegerLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(608);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(607);
        match(SQLParserParser::MINUS);
      }
      setState(610);
      match(SQLParserParser::INTEGER_VALUE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SQLParserParser::BigIntLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(612);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(611);
        match(SQLParserParser::MINUS);
      }
      setState(614);
      match(SQLParserParser::BIGINT_LITERAL);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SQLParserParser::SmallIntLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(616);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(615);
        match(SQLParserParser::MINUS);
      }
      setState(618);
      match(SQLParserParser::SMALLINT_LITERAL);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<SQLParserParser::TinyIntLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(620);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(619);
        match(SQLParserParser::MINUS);
      }
      setState(622);
      match(SQLParserParser::TINYINT_LITERAL);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<SQLParserParser::DoubleLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(624);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(623);
        match(SQLParserParser::MINUS);
      }
      setState(626);
      match(SQLParserParser::DOUBLE_LITERAL);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<SQLParserParser::BigDecimalLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(628);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SQLParserParser::MINUS) {
        setState(627);
        match(SQLParserParser::MINUS);
      }
      setState(630);
      match(SQLParserParser::BIGDECIMAL_LITERAL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnsiNonReservedContext ------------------------------------------------------------------

SQLParserParser::AnsiNonReservedContext::AnsiNonReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ADD() {
  return getToken(SQLParserParser::ADD, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::AFTER() {
  return getToken(SQLParserParser::AFTER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ALTER() {
  return getToken(SQLParserParser::ALTER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ANALYZE() {
  return getToken(SQLParserParser::ANALYZE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ANTI() {
  return getToken(SQLParserParser::ANTI, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ARCHIVE() {
  return getToken(SQLParserParser::ARCHIVE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ARRAY() {
  return getToken(SQLParserParser::ARRAY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ASC() {
  return getToken(SQLParserParser::ASC, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::AT() {
  return getToken(SQLParserParser::AT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::BETWEEN() {
  return getToken(SQLParserParser::BETWEEN, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::BUCKET() {
  return getToken(SQLParserParser::BUCKET, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::BUCKETS() {
  return getToken(SQLParserParser::BUCKETS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::BY() {
  return getToken(SQLParserParser::BY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CACHE() {
  return getToken(SQLParserParser::CACHE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CASCADE() {
  return getToken(SQLParserParser::CASCADE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CHANGE() {
  return getToken(SQLParserParser::CHANGE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CLEAR() {
  return getToken(SQLParserParser::CLEAR, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CLUSTER() {
  return getToken(SQLParserParser::CLUSTER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CLUSTERED() {
  return getToken(SQLParserParser::CLUSTERED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CODEGEN() {
  return getToken(SQLParserParser::CODEGEN, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COLLECTION() {
  return getToken(SQLParserParser::COLLECTION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COLUMNS() {
  return getToken(SQLParserParser::COLUMNS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COMMENT() {
  return getToken(SQLParserParser::COMMENT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COMMIT() {
  return getToken(SQLParserParser::COMMIT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COMPACT() {
  return getToken(SQLParserParser::COMPACT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COMPACTIONS() {
  return getToken(SQLParserParser::COMPACTIONS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COMPUTE() {
  return getToken(SQLParserParser::COMPUTE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CONCATENATE() {
  return getToken(SQLParserParser::CONCATENATE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::COST() {
  return getToken(SQLParserParser::COST, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CUBE() {
  return getToken(SQLParserParser::CUBE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::CURRENT() {
  return getToken(SQLParserParser::CURRENT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DATA() {
  return getToken(SQLParserParser::DATA, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DATABASE() {
  return getToken(SQLParserParser::DATABASE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DATABASES() {
  return getToken(SQLParserParser::DATABASES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DBPROPERTIES() {
  return getToken(SQLParserParser::DBPROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DEFINED() {
  return getToken(SQLParserParser::DEFINED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DELETE() {
  return getToken(SQLParserParser::DELETE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DELIMITED() {
  return getToken(SQLParserParser::DELIMITED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DESC() {
  return getToken(SQLParserParser::DESC, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DESCRIBE() {
  return getToken(SQLParserParser::DESCRIBE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DFS() {
  return getToken(SQLParserParser::DFS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DIRECTORIES() {
  return getToken(SQLParserParser::DIRECTORIES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DIRECTORY() {
  return getToken(SQLParserParser::DIRECTORY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DISTRIBUTE() {
  return getToken(SQLParserParser::DISTRIBUTE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DIV() {
  return getToken(SQLParserParser::DIV, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::DROP() {
  return getToken(SQLParserParser::DROP, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ESCAPED() {
  return getToken(SQLParserParser::ESCAPED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXCHANGE() {
  return getToken(SQLParserParser::EXCHANGE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXISTS() {
  return getToken(SQLParserParser::EXISTS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXPLAIN() {
  return getToken(SQLParserParser::EXPLAIN, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXPORT() {
  return getToken(SQLParserParser::EXPORT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXTENDED() {
  return getToken(SQLParserParser::EXTENDED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXTERNAL() {
  return getToken(SQLParserParser::EXTERNAL, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::EXTRACT() {
  return getToken(SQLParserParser::EXTRACT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FIELDS() {
  return getToken(SQLParserParser::FIELDS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FILEFORMAT() {
  return getToken(SQLParserParser::FILEFORMAT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FIRST() {
  return getToken(SQLParserParser::FIRST, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FOLLOWING() {
  return getToken(SQLParserParser::FOLLOWING, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FORMAT() {
  return getToken(SQLParserParser::FORMAT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FORMATTED() {
  return getToken(SQLParserParser::FORMATTED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FUNCTION() {
  return getToken(SQLParserParser::FUNCTION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::FUNCTIONS() {
  return getToken(SQLParserParser::FUNCTIONS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::GLOBAL() {
  return getToken(SQLParserParser::GLOBAL, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::GROUPING() {
  return getToken(SQLParserParser::GROUPING, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::IF() {
  return getToken(SQLParserParser::IF, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::IGNORE() {
  return getToken(SQLParserParser::IGNORE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::IMPORT() {
  return getToken(SQLParserParser::IMPORT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::INDEX() {
  return getToken(SQLParserParser::INDEX, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::INDEXES() {
  return getToken(SQLParserParser::INDEXES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::INPATH() {
  return getToken(SQLParserParser::INPATH, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::INPUTFORMAT() {
  return getToken(SQLParserParser::INPUTFORMAT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::INSERT() {
  return getToken(SQLParserParser::INSERT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::INTERVAL() {
  return getToken(SQLParserParser::INTERVAL, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ITEMS() {
  return getToken(SQLParserParser::ITEMS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::KEYS() {
  return getToken(SQLParserParser::KEYS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LAST() {
  return getToken(SQLParserParser::LAST, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LATERAL() {
  return getToken(SQLParserParser::LATERAL, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LAZY() {
  return getToken(SQLParserParser::LAZY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LIKE() {
  return getToken(SQLParserParser::LIKE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LIMIT() {
  return getToken(SQLParserParser::LIMIT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LINES() {
  return getToken(SQLParserParser::LINES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LIST() {
  return getToken(SQLParserParser::LIST, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LOAD() {
  return getToken(SQLParserParser::LOAD, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LOCAL() {
  return getToken(SQLParserParser::LOCAL, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LOCATION() {
  return getToken(SQLParserParser::LOCATION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LOCK() {
  return getToken(SQLParserParser::LOCK, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LOCKS() {
  return getToken(SQLParserParser::LOCKS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::LOGICAL() {
  return getToken(SQLParserParser::LOGICAL, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::MACRO() {
  return getToken(SQLParserParser::MACRO, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::MAP() {
  return getToken(SQLParserParser::MAP, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::MATCHED() {
  return getToken(SQLParserParser::MATCHED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::MERGE() {
  return getToken(SQLParserParser::MERGE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::MSCK() {
  return getToken(SQLParserParser::MSCK, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::NAMESPACE() {
  return getToken(SQLParserParser::NAMESPACE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::NAMESPACES() {
  return getToken(SQLParserParser::NAMESPACES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::NO() {
  return getToken(SQLParserParser::NO, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::NULLS() {
  return getToken(SQLParserParser::NULLS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OF() {
  return getToken(SQLParserParser::OF, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OPTION() {
  return getToken(SQLParserParser::OPTION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OPTIONS() {
  return getToken(SQLParserParser::OPTIONS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OUT() {
  return getToken(SQLParserParser::OUT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OUTPUTFORMAT() {
  return getToken(SQLParserParser::OUTPUTFORMAT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OVER() {
  return getToken(SQLParserParser::OVER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OVERLAY() {
  return getToken(SQLParserParser::OVERLAY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::OVERWRITE() {
  return getToken(SQLParserParser::OVERWRITE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PARTITION() {
  return getToken(SQLParserParser::PARTITION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PARTITIONED() {
  return getToken(SQLParserParser::PARTITIONED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PARTITIONS() {
  return getToken(SQLParserParser::PARTITIONS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PERCENTLIT() {
  return getToken(SQLParserParser::PERCENTLIT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PIVOT() {
  return getToken(SQLParserParser::PIVOT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PLACING() {
  return getToken(SQLParserParser::PLACING, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::POSITION() {
  return getToken(SQLParserParser::POSITION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PRECEDING() {
  return getToken(SQLParserParser::PRECEDING, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PRINCIPALS() {
  return getToken(SQLParserParser::PRINCIPALS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PROPERTIES() {
  return getToken(SQLParserParser::PROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::PURGE() {
  return getToken(SQLParserParser::PURGE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::QUERY() {
  return getToken(SQLParserParser::QUERY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RANGE() {
  return getToken(SQLParserParser::RANGE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RECORDREADER() {
  return getToken(SQLParserParser::RECORDREADER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RECORDWRITER() {
  return getToken(SQLParserParser::RECORDWRITER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RECOVER() {
  return getToken(SQLParserParser::RECOVER, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::REDUCE() {
  return getToken(SQLParserParser::REDUCE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::REFRESH() {
  return getToken(SQLParserParser::REFRESH, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RENAME() {
  return getToken(SQLParserParser::RENAME, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::REPAIR() {
  return getToken(SQLParserParser::REPAIR, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::REPLACE() {
  return getToken(SQLParserParser::REPLACE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RESET() {
  return getToken(SQLParserParser::RESET, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RESTRICT() {
  return getToken(SQLParserParser::RESTRICT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::REVOKE() {
  return getToken(SQLParserParser::REVOKE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::RLIKE() {
  return getToken(SQLParserParser::RLIKE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ROLE() {
  return getToken(SQLParserParser::ROLE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ROLES() {
  return getToken(SQLParserParser::ROLES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ROLLBACK() {
  return getToken(SQLParserParser::ROLLBACK, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ROLLUP() {
  return getToken(SQLParserParser::ROLLUP, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ROW() {
  return getToken(SQLParserParser::ROW, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::ROWS() {
  return getToken(SQLParserParser::ROWS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SCHEMA() {
  return getToken(SQLParserParser::SCHEMA, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SEMI() {
  return getToken(SQLParserParser::SEMI, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SEPARATED() {
  return getToken(SQLParserParser::SEPARATED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SERDE() {
  return getToken(SQLParserParser::SERDE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SERDEPROPERTIES() {
  return getToken(SQLParserParser::SERDEPROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SET() {
  return getToken(SQLParserParser::SET, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SETMINUS() {
  return getToken(SQLParserParser::SETMINUS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SETS() {
  return getToken(SQLParserParser::SETS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SHOW() {
  return getToken(SQLParserParser::SHOW, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SKEWED() {
  return getToken(SQLParserParser::SKEWED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SORT() {
  return getToken(SQLParserParser::SORT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SORTED() {
  return getToken(SQLParserParser::SORTED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::START() {
  return getToken(SQLParserParser::START, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::STATISTICS() {
  return getToken(SQLParserParser::STATISTICS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::STORED() {
  return getToken(SQLParserParser::STORED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::STRATIFY() {
  return getToken(SQLParserParser::STRATIFY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::STRUCT() {
  return getToken(SQLParserParser::STRUCT, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SUBSTR() {
  return getToken(SQLParserParser::SUBSTR, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::SUBSTRING() {
  return getToken(SQLParserParser::SUBSTRING, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TABLES() {
  return getToken(SQLParserParser::TABLES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TABLESAMPLE() {
  return getToken(SQLParserParser::TABLESAMPLE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TBLPROPERTIES() {
  return getToken(SQLParserParser::TBLPROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TEMPORARY() {
  return getToken(SQLParserParser::TEMPORARY, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TERMINATED() {
  return getToken(SQLParserParser::TERMINATED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TOUCH() {
  return getToken(SQLParserParser::TOUCH, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TRANSACTION() {
  return getToken(SQLParserParser::TRANSACTION, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TRANSACTIONS() {
  return getToken(SQLParserParser::TRANSACTIONS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TRANSFORM() {
  return getToken(SQLParserParser::TRANSFORM, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TRIM() {
  return getToken(SQLParserParser::TRIM, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TRUE() {
  return getToken(SQLParserParser::TRUE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TRUNCATE() {
  return getToken(SQLParserParser::TRUNCATE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::TYPE() {
  return getToken(SQLParserParser::TYPE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::UNARCHIVE() {
  return getToken(SQLParserParser::UNARCHIVE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::UNBOUNDED() {
  return getToken(SQLParserParser::UNBOUNDED, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::UNCACHE() {
  return getToken(SQLParserParser::UNCACHE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::UNLOCK() {
  return getToken(SQLParserParser::UNLOCK, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::UNSET() {
  return getToken(SQLParserParser::UNSET, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::UPDATE() {
  return getToken(SQLParserParser::UPDATE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::USE() {
  return getToken(SQLParserParser::USE, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::VALUES() {
  return getToken(SQLParserParser::VALUES, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::VIEW() {
  return getToken(SQLParserParser::VIEW, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::VIEWS() {
  return getToken(SQLParserParser::VIEWS, 0);
}

tree::TerminalNode* SQLParserParser::AnsiNonReservedContext::WINDOW() {
  return getToken(SQLParserParser::WINDOW, 0);
}


size_t SQLParserParser::AnsiNonReservedContext::getRuleIndex() const {
  return SQLParserParser::RuleAnsiNonReserved;
}


std::any SQLParserParser::AnsiNonReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitAnsiNonReserved(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::AnsiNonReservedContext* SQLParserParser::ansiNonReserved() {
  AnsiNonReservedContext *_localctx = _tracker.createInstance<AnsiNonReservedContext>(_ctx, getState());
  enterRule(_localctx, 94, SQLParserParser::RuleAnsiNonReserved);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -136938269280871680) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -7019019874473094689) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -2314859009608056833) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & 2827275308946552767) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrictNonReservedContext ------------------------------------------------------------------

SQLParserParser::StrictNonReservedContext::StrictNonReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::ANTI() {
  return getToken(SQLParserParser::ANTI, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::CROSS() {
  return getToken(SQLParserParser::CROSS, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::EXCEPT() {
  return getToken(SQLParserParser::EXCEPT, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::FULL() {
  return getToken(SQLParserParser::FULL, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::INNER() {
  return getToken(SQLParserParser::INNER, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::INTERSECT() {
  return getToken(SQLParserParser::INTERSECT, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::JOIN() {
  return getToken(SQLParserParser::JOIN, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::LEFT() {
  return getToken(SQLParserParser::LEFT, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::NATURAL() {
  return getToken(SQLParserParser::NATURAL, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::ON() {
  return getToken(SQLParserParser::ON, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::RIGHT() {
  return getToken(SQLParserParser::RIGHT, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::SEMI() {
  return getToken(SQLParserParser::SEMI, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::SETMINUS() {
  return getToken(SQLParserParser::SETMINUS, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::UNION() {
  return getToken(SQLParserParser::UNION, 0);
}

tree::TerminalNode* SQLParserParser::StrictNonReservedContext::USING() {
  return getToken(SQLParserParser::USING, 0);
}


size_t SQLParserParser::StrictNonReservedContext::getRuleIndex() const {
  return SQLParserParser::RuleStrictNonReserved;
}


std::any SQLParserParser::StrictNonReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitStrictNonReserved(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::StrictNonReservedContext* SQLParserParser::strictNonReserved() {
  StrictNonReservedContext *_localctx = _tracker.createInstance<StrictNonReservedContext>(_ctx, getState());
  enterRule(_localctx, 96, SQLParserParser::RuleStrictNonReserved);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    _la = _input->LA(1);
    if (!(((((_la - 14) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 14)) & -9223371968135299071) != 0) || ((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 9147937288634369) != 0) || ((((_la - 189) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 189)) & 289356276058620929) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonReservedContext ------------------------------------------------------------------

SQLParserParser::NonReservedContext::NonReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ADD() {
  return getToken(SQLParserParser::ADD, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::AFTER() {
  return getToken(SQLParserParser::AFTER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ALL() {
  return getToken(SQLParserParser::ALL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ALTER() {
  return getToken(SQLParserParser::ALTER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ANALYZE() {
  return getToken(SQLParserParser::ANALYZE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::AND() {
  return getToken(SQLParserParser::AND, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ANY() {
  return getToken(SQLParserParser::ANY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ARCHIVE() {
  return getToken(SQLParserParser::ARCHIVE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ARRAY() {
  return getToken(SQLParserParser::ARRAY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::AS() {
  return getToken(SQLParserParser::AS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ASC() {
  return getToken(SQLParserParser::ASC, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::AT() {
  return getToken(SQLParserParser::AT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::AUTHORIZATION() {
  return getToken(SQLParserParser::AUTHORIZATION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::BETWEEN() {
  return getToken(SQLParserParser::BETWEEN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::BOTH() {
  return getToken(SQLParserParser::BOTH, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::BUCKET() {
  return getToken(SQLParserParser::BUCKET, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::BUCKETS() {
  return getToken(SQLParserParser::BUCKETS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::BY() {
  return getToken(SQLParserParser::BY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CACHE() {
  return getToken(SQLParserParser::CACHE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CASCADE() {
  return getToken(SQLParserParser::CASCADE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CASE() {
  return getToken(SQLParserParser::CASE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CAST() {
  return getToken(SQLParserParser::CAST, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CHANGE() {
  return getToken(SQLParserParser::CHANGE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CHECK() {
  return getToken(SQLParserParser::CHECK, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CLEAR() {
  return getToken(SQLParserParser::CLEAR, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CLUSTER() {
  return getToken(SQLParserParser::CLUSTER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CLUSTERED() {
  return getToken(SQLParserParser::CLUSTERED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CODEGEN() {
  return getToken(SQLParserParser::CODEGEN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COLLATE() {
  return getToken(SQLParserParser::COLLATE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COLLECTION() {
  return getToken(SQLParserParser::COLLECTION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COLUMN() {
  return getToken(SQLParserParser::COLUMN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COLUMNS() {
  return getToken(SQLParserParser::COLUMNS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COMMENT() {
  return getToken(SQLParserParser::COMMENT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COMMIT() {
  return getToken(SQLParserParser::COMMIT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COMPACT() {
  return getToken(SQLParserParser::COMPACT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COMPACTIONS() {
  return getToken(SQLParserParser::COMPACTIONS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COMPUTE() {
  return getToken(SQLParserParser::COMPUTE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CONCATENATE() {
  return getToken(SQLParserParser::CONCATENATE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CONSTRAINT() {
  return getToken(SQLParserParser::CONSTRAINT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::COST() {
  return getToken(SQLParserParser::COST, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CREATE() {
  return getToken(SQLParserParser::CREATE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CUBE() {
  return getToken(SQLParserParser::CUBE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CURRENT() {
  return getToken(SQLParserParser::CURRENT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CURRENT_DATE() {
  return getToken(SQLParserParser::CURRENT_DATE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CURRENT_TIME() {
  return getToken(SQLParserParser::CURRENT_TIME, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CURRENT_TIMESTAMP() {
  return getToken(SQLParserParser::CURRENT_TIMESTAMP, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::CURRENT_USER() {
  return getToken(SQLParserParser::CURRENT_USER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DATA() {
  return getToken(SQLParserParser::DATA, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DATABASE() {
  return getToken(SQLParserParser::DATABASE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DATABASES() {
  return getToken(SQLParserParser::DATABASES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DBPROPERTIES() {
  return getToken(SQLParserParser::DBPROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DEFINED() {
  return getToken(SQLParserParser::DEFINED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DELETE() {
  return getToken(SQLParserParser::DELETE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DELIMITED() {
  return getToken(SQLParserParser::DELIMITED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DESC() {
  return getToken(SQLParserParser::DESC, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DESCRIBE() {
  return getToken(SQLParserParser::DESCRIBE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DFS() {
  return getToken(SQLParserParser::DFS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DIRECTORIES() {
  return getToken(SQLParserParser::DIRECTORIES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DIRECTORY() {
  return getToken(SQLParserParser::DIRECTORY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DISTINCT() {
  return getToken(SQLParserParser::DISTINCT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DISTRIBUTE() {
  return getToken(SQLParserParser::DISTRIBUTE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DIV() {
  return getToken(SQLParserParser::DIV, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::DROP() {
  return getToken(SQLParserParser::DROP, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ELSE() {
  return getToken(SQLParserParser::ELSE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::END() {
  return getToken(SQLParserParser::END, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ESCAPE() {
  return getToken(SQLParserParser::ESCAPE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ESCAPED() {
  return getToken(SQLParserParser::ESCAPED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXCHANGE() {
  return getToken(SQLParserParser::EXCHANGE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXISTS() {
  return getToken(SQLParserParser::EXISTS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXPLAIN() {
  return getToken(SQLParserParser::EXPLAIN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXPORT() {
  return getToken(SQLParserParser::EXPORT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXTENDED() {
  return getToken(SQLParserParser::EXTENDED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXTERNAL() {
  return getToken(SQLParserParser::EXTERNAL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::EXTRACT() {
  return getToken(SQLParserParser::EXTRACT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FALSE() {
  return getToken(SQLParserParser::FALSE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FETCH() {
  return getToken(SQLParserParser::FETCH, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FILTER() {
  return getToken(SQLParserParser::FILTER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FIELDS() {
  return getToken(SQLParserParser::FIELDS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FILEFORMAT() {
  return getToken(SQLParserParser::FILEFORMAT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FIRST() {
  return getToken(SQLParserParser::FIRST, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FOLLOWING() {
  return getToken(SQLParserParser::FOLLOWING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FOR() {
  return getToken(SQLParserParser::FOR, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FOREIGN() {
  return getToken(SQLParserParser::FOREIGN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FORMAT() {
  return getToken(SQLParserParser::FORMAT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FORMATTED() {
  return getToken(SQLParserParser::FORMATTED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FROM() {
  return getToken(SQLParserParser::FROM, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FUNCTION() {
  return getToken(SQLParserParser::FUNCTION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::FUNCTIONS() {
  return getToken(SQLParserParser::FUNCTIONS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::GLOBAL() {
  return getToken(SQLParserParser::GLOBAL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::GRANT() {
  return getToken(SQLParserParser::GRANT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::GROUP() {
  return getToken(SQLParserParser::GROUP, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::GROUPING() {
  return getToken(SQLParserParser::GROUPING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::HAVING() {
  return getToken(SQLParserParser::HAVING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::IF() {
  return getToken(SQLParserParser::IF, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::IGNORE() {
  return getToken(SQLParserParser::IGNORE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::IMPORT() {
  return getToken(SQLParserParser::IMPORT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::IN() {
  return getToken(SQLParserParser::IN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INDEX() {
  return getToken(SQLParserParser::INDEX, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INDEXES() {
  return getToken(SQLParserParser::INDEXES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INPATH() {
  return getToken(SQLParserParser::INPATH, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INPUTFORMAT() {
  return getToken(SQLParserParser::INPUTFORMAT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INSERT() {
  return getToken(SQLParserParser::INSERT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INTERVAL() {
  return getToken(SQLParserParser::INTERVAL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::INTO() {
  return getToken(SQLParserParser::INTO, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::IS() {
  return getToken(SQLParserParser::IS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ITEMS() {
  return getToken(SQLParserParser::ITEMS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::KEYS() {
  return getToken(SQLParserParser::KEYS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LAST() {
  return getToken(SQLParserParser::LAST, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LATERAL() {
  return getToken(SQLParserParser::LATERAL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LAZY() {
  return getToken(SQLParserParser::LAZY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LEADING() {
  return getToken(SQLParserParser::LEADING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LIKE() {
  return getToken(SQLParserParser::LIKE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LIMIT() {
  return getToken(SQLParserParser::LIMIT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LINES() {
  return getToken(SQLParserParser::LINES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LIST() {
  return getToken(SQLParserParser::LIST, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LOAD() {
  return getToken(SQLParserParser::LOAD, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LOCAL() {
  return getToken(SQLParserParser::LOCAL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LOCATION() {
  return getToken(SQLParserParser::LOCATION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LOCK() {
  return getToken(SQLParserParser::LOCK, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LOCKS() {
  return getToken(SQLParserParser::LOCKS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::LOGICAL() {
  return getToken(SQLParserParser::LOGICAL, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::MACRO() {
  return getToken(SQLParserParser::MACRO, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::MAP() {
  return getToken(SQLParserParser::MAP, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::MATCHED() {
  return getToken(SQLParserParser::MATCHED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::MERGE() {
  return getToken(SQLParserParser::MERGE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::MSCK() {
  return getToken(SQLParserParser::MSCK, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::NAMESPACE() {
  return getToken(SQLParserParser::NAMESPACE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::NAMESPACES() {
  return getToken(SQLParserParser::NAMESPACES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::NO() {
  return getToken(SQLParserParser::NO, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::NOT() {
  return getToken(SQLParserParser::NOT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::NULL_() {
  return getToken(SQLParserParser::NULL_, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::NULLS() {
  return getToken(SQLParserParser::NULLS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OF() {
  return getToken(SQLParserParser::OF, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ONLY() {
  return getToken(SQLParserParser::ONLY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OPTION() {
  return getToken(SQLParserParser::OPTION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OPTIONS() {
  return getToken(SQLParserParser::OPTIONS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OR() {
  return getToken(SQLParserParser::OR, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ORDER() {
  return getToken(SQLParserParser::ORDER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OUT() {
  return getToken(SQLParserParser::OUT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OUTER() {
  return getToken(SQLParserParser::OUTER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OUTPUTFORMAT() {
  return getToken(SQLParserParser::OUTPUTFORMAT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OVER() {
  return getToken(SQLParserParser::OVER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OVERLAPS() {
  return getToken(SQLParserParser::OVERLAPS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OVERLAY() {
  return getToken(SQLParserParser::OVERLAY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::OVERWRITE() {
  return getToken(SQLParserParser::OVERWRITE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PARTITION() {
  return getToken(SQLParserParser::PARTITION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PARTITIONED() {
  return getToken(SQLParserParser::PARTITIONED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PARTITIONS() {
  return getToken(SQLParserParser::PARTITIONS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PERCENTLIT() {
  return getToken(SQLParserParser::PERCENTLIT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PIVOT() {
  return getToken(SQLParserParser::PIVOT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PLACING() {
  return getToken(SQLParserParser::PLACING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::POSITION() {
  return getToken(SQLParserParser::POSITION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PRECEDING() {
  return getToken(SQLParserParser::PRECEDING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PRIMARY() {
  return getToken(SQLParserParser::PRIMARY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PRINCIPALS() {
  return getToken(SQLParserParser::PRINCIPALS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PROPERTIES() {
  return getToken(SQLParserParser::PROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::PURGE() {
  return getToken(SQLParserParser::PURGE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::QUERY() {
  return getToken(SQLParserParser::QUERY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RANGE() {
  return getToken(SQLParserParser::RANGE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RECORDREADER() {
  return getToken(SQLParserParser::RECORDREADER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RECORDWRITER() {
  return getToken(SQLParserParser::RECORDWRITER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RECOVER() {
  return getToken(SQLParserParser::RECOVER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::REDUCE() {
  return getToken(SQLParserParser::REDUCE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::REFERENCES() {
  return getToken(SQLParserParser::REFERENCES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::REFRESH() {
  return getToken(SQLParserParser::REFRESH, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RENAME() {
  return getToken(SQLParserParser::RENAME, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::REPAIR() {
  return getToken(SQLParserParser::REPAIR, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::REPLACE() {
  return getToken(SQLParserParser::REPLACE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RESET() {
  return getToken(SQLParserParser::RESET, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RESTRICT() {
  return getToken(SQLParserParser::RESTRICT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::REVOKE() {
  return getToken(SQLParserParser::REVOKE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::RLIKE() {
  return getToken(SQLParserParser::RLIKE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ROLE() {
  return getToken(SQLParserParser::ROLE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ROLES() {
  return getToken(SQLParserParser::ROLES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ROLLBACK() {
  return getToken(SQLParserParser::ROLLBACK, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ROLLUP() {
  return getToken(SQLParserParser::ROLLUP, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ROW() {
  return getToken(SQLParserParser::ROW, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::ROWS() {
  return getToken(SQLParserParser::ROWS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SCHEMA() {
  return getToken(SQLParserParser::SCHEMA, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SELECT() {
  return getToken(SQLParserParser::SELECT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SEPARATED() {
  return getToken(SQLParserParser::SEPARATED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SERDE() {
  return getToken(SQLParserParser::SERDE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SERDEPROPERTIES() {
  return getToken(SQLParserParser::SERDEPROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SESSION_USER() {
  return getToken(SQLParserParser::SESSION_USER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SET() {
  return getToken(SQLParserParser::SET, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SETS() {
  return getToken(SQLParserParser::SETS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SHOW() {
  return getToken(SQLParserParser::SHOW, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SKEWED() {
  return getToken(SQLParserParser::SKEWED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SOME() {
  return getToken(SQLParserParser::SOME, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SORT() {
  return getToken(SQLParserParser::SORT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SORTED() {
  return getToken(SQLParserParser::SORTED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::START() {
  return getToken(SQLParserParser::START, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::STATISTICS() {
  return getToken(SQLParserParser::STATISTICS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::STORED() {
  return getToken(SQLParserParser::STORED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::STRATIFY() {
  return getToken(SQLParserParser::STRATIFY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::STRUCT() {
  return getToken(SQLParserParser::STRUCT, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SUBSTR() {
  return getToken(SQLParserParser::SUBSTR, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::SUBSTRING() {
  return getToken(SQLParserParser::SUBSTRING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TABLE() {
  return getToken(SQLParserParser::TABLE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TABLES() {
  return getToken(SQLParserParser::TABLES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TABLESAMPLE() {
  return getToken(SQLParserParser::TABLESAMPLE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TBLPROPERTIES() {
  return getToken(SQLParserParser::TBLPROPERTIES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TEMPORARY() {
  return getToken(SQLParserParser::TEMPORARY, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TERMINATED() {
  return getToken(SQLParserParser::TERMINATED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::THEN() {
  return getToken(SQLParserParser::THEN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TO() {
  return getToken(SQLParserParser::TO, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TOUCH() {
  return getToken(SQLParserParser::TOUCH, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRAILING() {
  return getToken(SQLParserParser::TRAILING, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRANSACTION() {
  return getToken(SQLParserParser::TRANSACTION, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRANSACTIONS() {
  return getToken(SQLParserParser::TRANSACTIONS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRANSFORM() {
  return getToken(SQLParserParser::TRANSFORM, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRIM() {
  return getToken(SQLParserParser::TRIM, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRUE() {
  return getToken(SQLParserParser::TRUE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TRUNCATE() {
  return getToken(SQLParserParser::TRUNCATE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::TYPE() {
  return getToken(SQLParserParser::TYPE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNARCHIVE() {
  return getToken(SQLParserParser::UNARCHIVE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNBOUNDED() {
  return getToken(SQLParserParser::UNBOUNDED, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNCACHE() {
  return getToken(SQLParserParser::UNCACHE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNIQUE() {
  return getToken(SQLParserParser::UNIQUE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNKNOWN() {
  return getToken(SQLParserParser::UNKNOWN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNLOCK() {
  return getToken(SQLParserParser::UNLOCK, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UNSET() {
  return getToken(SQLParserParser::UNSET, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::UPDATE() {
  return getToken(SQLParserParser::UPDATE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::USE() {
  return getToken(SQLParserParser::USE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::USER() {
  return getToken(SQLParserParser::USER, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::VALUES() {
  return getToken(SQLParserParser::VALUES, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::VIEW() {
  return getToken(SQLParserParser::VIEW, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::VIEWS() {
  return getToken(SQLParserParser::VIEWS, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::WHEN() {
  return getToken(SQLParserParser::WHEN, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::WHERE() {
  return getToken(SQLParserParser::WHERE, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::WINDOW() {
  return getToken(SQLParserParser::WINDOW, 0);
}

tree::TerminalNode* SQLParserParser::NonReservedContext::WITH() {
  return getToken(SQLParserParser::WITH, 0);
}


size_t SQLParserParser::NonReservedContext::getRuleIndex() const {
  return SQLParserParser::RuleNonReserved;
}


std::any SQLParserParser::NonReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SQLParserVisitor*>(visitor))
    return parserVisitor->visitNonReserved(this);
  else
    return visitor->visitChildren(this);
}

SQLParserParser::NonReservedContext* SQLParserParser::nonReserved() {
  NonReservedContext *_localctx = _tracker.createInstance<NonReservedContext>(_ctx, getState());
  enterRule(_localctx, 98, SQLParserParser::RuleNonReserved);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -1125899906859264) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & -4686136158357299201) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & -2305843009217953793) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & 9187202502347448191) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SQLParserParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return booleanExpressionSempred(antlrcpp::downCast<BooleanExpressionContext *>(context), predicateIndex);
    case 25: return valueExpressionSempred(antlrcpp::downCast<ValueExpressionContext *>(context), predicateIndex);
    case 26: return primaryExpressionSempred(antlrcpp::downCast<PrimaryExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SQLParserParser::booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SQLParserParser::valueExpressionSempred(ValueExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SQLParserParser::primaryExpressionSempred(PrimaryExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void SQLParserParser::initialize() {
  ::antlr4::internal::call_once(sqlparserParserOnceFlag, sqlparserParserInitialize);
}
