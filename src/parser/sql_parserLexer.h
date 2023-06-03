
// Generated from ./src/parser/sql_parser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace sql {


class  sql_parserLexer : public antlr4::Lexer {
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

  explicit sql_parserLexer(antlr4::CharStream *input);

  ~sql_parserLexer() override;


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
