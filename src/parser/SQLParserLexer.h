
// Generated from ./src/parser/SQLParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace sql {


class  SQLParserLexer : public antlr4::Lexer {
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

  explicit SQLParserLexer(antlr4::CharStream *input);

  ~SQLParserLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace sql
