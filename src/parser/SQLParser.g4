grammar SQLParser;


singleStatement
    : statement ';'* EOF
    ;

singleDataType
    : dataType EOF
    ;

statement
    : query                                                            #statementDefault
    ;

commentSpec
    : COMMENT STRING
    ;

query
    : queryTerm queryOrganization
    ;

queryOrganization
    : (ORDER BY order+=sortItem (',' order+=sortItem)*)?
      (SORT BY sort+=sortItem (',' sort+=sortItem)*)?
      (LIMIT (ALL | limit=expression))?
    ;

queryTerm
    : queryPrimary                                                                       #queryTermDefault
    ;

queryPrimary
    : querySpecification                                                    #queryPrimaryDefault
    | TABLE multipartIdentifier                                             #table
    | '(' query ')'                                                         #subquery
    ;

sortItem
    : expression ordering=(ASC | DESC)? (NULLS nullOrder=(LAST | FIRST))?
    ;



querySpecification
    : selectClause
      fromClause?
      whereClause?
    ;


selectClause
    : SELECT setQuantifier? namedExpressionSeq
    ;

whereClause
    : WHERE booleanExpression
    ;

fromClause
    : FROM relation (',' relation)*
    ;

setQuantifier
    : DISTINCT
    | ALL
    ;

relation
    : relationPrimary
    ;

identifierList
    : '(' identifierSeq ')'
    ;

identifierSeq
    : ident+=errorCapturingIdentifier (',' ident+=errorCapturingIdentifier)*
    ;

orderedIdentifierList
    : '(' orderedIdentifier (',' orderedIdentifier)* ')'
    ;

orderedIdentifier
    : ident=errorCapturingIdentifier ordering=(ASC | DESC)?
    ;

identifierCommentList
    : '(' identifierComment (',' identifierComment)* ')'
    ;

identifierComment
    : identifier commentSpec?
    ;

relationPrimary
    : multipartIdentifier tableAlias  #tableName
    | '(' query ')' tableAlias        #aliasedQuery
    | '(' relation ')' tableAlias     #aliasedRelation
    ;



tableAlias
    : (AS? strictIdentifier identifierList?)?
    ;


multipartIdentifierList
    : multipartIdentifier (',' multipartIdentifier)*
    ;

multipartIdentifier
    : parts+=errorCapturingIdentifier ('.' parts+=errorCapturingIdentifier)*
    ;



namedExpression
    : expression (AS? (name=errorCapturingIdentifier | identifierList))?
    ;

namedExpressionSeq
    : namedExpression (',' namedExpression)*
    ;

expression
    : booleanExpression
    ;

booleanExpression
    : NOT booleanExpression                                        #logicalNot
    | valueExpression predicate?                                   #predicated
    | left=booleanExpression operator=AND right=booleanExpression  #logicalBinary
    | left=booleanExpression operator=OR right=booleanExpression   #logicalBinary
    ;

predicate
    : NOT? kind=BETWEEN lower=valueExpression AND upper=valueExpression
    | NOT? kind=IN '(' expression (',' expression)* ')'
    | NOT? kind=IN '(' query ')'
    | NOT? kind=RLIKE pattern=valueExpression
    | NOT? kind=LIKE pattern=valueExpression (ESCAPE escapeChar=STRING)?
    | IS NOT? kind=NULL
    | IS NOT? kind=(TRUE | FALSE | UNKNOWN)
    | IS NOT? kind=DISTINCT FROM right=valueExpression
    ;

valueExpression
    : primaryExpression                                                                      #valueExpressionDefault
    | operator=(MINUS | PLUS | TILDE) valueExpression                                        #arithmeticUnary
    | left=valueExpression operator=(ASTERISK | SLASH | PERCENT | DIV) right=valueExpression #arithmeticBinary
    | left=valueExpression operator=(PLUS | MINUS | CONCAT_PIPE) right=valueExpression       #arithmeticBinary
    | left=valueExpression operator=AMPERSAND right=valueExpression                          #arithmeticBinary
    | left=valueExpression operator=HAT right=valueExpression                                #arithmeticBinary
    | left=valueExpression operator=PIPE right=valueExpression                               #arithmeticBinary
    | left=valueExpression comparisonOperator right=valueExpression                          #comparison
    ;

primaryExpression
    : name=(CURRENT_DATE | CURRENT_TIMESTAMP)                                                  #currentDatetime
    | CASE whenClause+ (ELSE elseExpression=expression)? END                                   #searchedCase
    | CASE value=expression whenClause+ (ELSE elseExpression=expression)? END                  #simpleCase
    | CAST '(' expression AS dataType ')'                                                      #cast
    | STRUCT '(' (argument+=namedExpression (',' argument+=namedExpression)*)? ')'             #struct
    | FIRST '(' expression (IGNORE NULLS)? ')'                                                 #first
    | LAST '(' expression (IGNORE NULLS)? ')'                                                  #last
    | POSITION '(' substr=valueExpression IN str=valueExpression ')'                           #position
    | constant                                                                                 #constantDefault
    | ASTERISK                                                                                 #star
    | qualifiedName '.' ASTERISK                                                               #star
    | '(' namedExpression (',' namedExpression)+ ')'                                           #rowConstructor
    | '(' query ')'                                                                            #subqueryExpression
    | functionName '(' (argument+=expression (',' argument+=expression)*)? ')'                      #functionCall
    | value=primaryExpression '[' index=valueExpression ']'                                    #subscript
    | identifier                                                                               #columnReference
    | base=primaryExpression '.' fieldName=identifier                                          #dereference
    | '(' expression ')'                                                                       #parenthesizedExpression
    ;

constant
    : NULL                                                                                     #nullLiteral
    | interval                                                                                 #intervalLiteral
    | identifier STRING                                                                        #typeConstructor
    | number                                                                                   #numericLiteral
    | booleanValue                                                                             #booleanLiteral
    | STRING+                                                                                  #stringLiteral
    ;

comparisonOperator
    : EQ | NEQ | NEQJ | LT | LTE | GT | GTE | NSEQ
    ;

arithmeticOperator
    : PLUS | MINUS | ASTERISK | SLASH | PERCENT | DIV | TILDE | AMPERSAND | PIPE | CONCAT_PIPE | HAT
    ;

predicateOperator
    : OR | AND | IN | NOT
    ;

booleanValue
    : TRUE | FALSE
    ;

interval
    : INTERVAL (errorCapturingMultiUnitsInterval | errorCapturingUnitToUnitInterval)?
    ;

errorCapturingMultiUnitsInterval
    : multiUnitsInterval unitToUnitInterval?
    ;

multiUnitsInterval
    : (intervalValue unit+=identifier)+
    ;

errorCapturingUnitToUnitInterval
    : body=unitToUnitInterval (error1=multiUnitsInterval | error2=unitToUnitInterval)?
    ;

unitToUnitInterval
    : value=intervalValue from=identifier TO to=identifier
    ;

intervalValue
    : (PLUS | MINUS)? (INTEGER_VALUE | DECIMAL_VALUE)
    | STRING
    ;

colPosition
    : position=FIRST | position=AFTER afterCol=errorCapturingIdentifier
    ;

dataType
    : complex=ARRAY '<' dataType '>'                            #complexDataType
    | complex=MAP '<' dataType ',' dataType '>'                 #complexDataType
    | complex=STRUCT ('<' complexColTypeList? '>' | NEQ)        #complexDataType
    | identifier ('(' INTEGER_VALUE (',' INTEGER_VALUE)* ')')?  #primitiveDataType
    ;

qualifiedColTypeWithPositionList
    : qualifiedColTypeWithPosition (',' qualifiedColTypeWithPosition)*
    ;

qualifiedColTypeWithPosition
    : name=multipartIdentifier dataType (NOT NULL)? commentSpec? colPosition?
    ;

colTypeList
    : colType (',' colType)*
    ;

colType
    : colName=errorCapturingIdentifier dataType (NOT NULL)? commentSpec?
    ;

complexColTypeList
    : complexColType (',' complexColType)*
    ;

complexColType
    : identifier ':' dataType (NOT NULL)? commentSpec?
    ;

whenClause
    : WHEN condition=expression THEN result=expression
    ;

windowClause
    : WINDOW namedWindow (',' namedWindow)*
    ;

namedWindow
    : name=errorCapturingIdentifier AS windowSpec
    ;

windowSpec
    : name=errorCapturingIdentifier         #windowRef
    | '('name=errorCapturingIdentifier')'   #windowRef
    | '('
      ( CLUSTER BY partition+=expression (',' partition+=expression)*
      | ((PARTITION | DISTRIBUTE) BY partition+=expression (',' partition+=expression)*)?
        ((ORDER | SORT) BY sortItem (',' sortItem)*)?)
      windowFrame?
      ')'                                   #windowDef
    ;

windowFrame
    : frameType=RANGE start=frameBound
    | frameType=ROWS start=frameBound
    | frameType=RANGE BETWEEN start=frameBound AND end=frameBound
    | frameType=ROWS BETWEEN start=frameBound AND end=frameBound
    ;

frameBound
    : UNBOUNDED boundType=(PRECEDING | FOLLOWING)
    | boundType=CURRENT ROW
    | expression boundType=(PRECEDING | FOLLOWING)
    ;

qualifiedNameList
    : qualifiedName (',' qualifiedName)*
    ;

functionName
    : qualifiedName
    | FILTER
    | LEFT
    | RIGHT
    ;

qualifiedName
    : identifier ('.' identifier)*
    ;

// this rule is used for explicitly capturing wrong identifiers such as test-table, which should actually be `test-table`
// replace identifier with errorCapturingIdentifier where the immediate follow symbol is not an expression, otherwise
// valid expressions such as "a-b" can be recognized as an identifier
errorCapturingIdentifier
    : identifier errorCapturingIdentifierExtra
    ;

// extra left-factoring grammar
errorCapturingIdentifierExtra
    : (MINUS identifier)+    #errorIdent
    |                        #realIdent
    ;

identifier
    : strictIdentifier
    | strictNonReserved
    ;

strictIdentifier
    : IDENTIFIER              #unquotedIdentifier
    | quotedIdentifier        #quotedIdentifierAlternative
    | ansiNonReserved #unquotedIdentifier
    | nonReserved    #unquotedIdentifier
    ;

quotedIdentifier
    : BACKQUOTED_IDENTIFIER
    ;

number
    : MINUS? (EXPONENT_VALUE | DECIMAL_VALUE) #legacyDecimalLiteral
    | MINUS? INTEGER_VALUE            #integerLiteral
    | MINUS? BIGINT_LITERAL           #bigIntLiteral
    | MINUS? SMALLINT_LITERAL         #smallIntLiteral
    | MINUS? TINYINT_LITERAL          #tinyIntLiteral
    | MINUS? DOUBLE_LITERAL           #doubleLiteral
    | MINUS? BIGDECIMAL_LITERAL       #bigDecimalLiteral
    ;

alterColumnAction
    : TYPE dataType
    | commentSpec
    | colPosition
    | setOrDrop=(SET | DROP) NOT NULL
    ;

ansiNonReserved
    : ADD
    | AFTER
    | ALTER
    | ANALYZE
    | ANTI
    | ARCHIVE
    | ARRAY
    | ASC
    | AT
    | BETWEEN
    | BUCKET
    | BUCKETS
    | BY
    | CACHE
    | CASCADE
    | CHANGE
    | CLEAR
    | CLUSTER
    | CLUSTERED
    | CODEGEN
    | COLLECTION
    | COLUMNS
    | COMMENT
    | COMMIT
    | COMPACT
    | COMPACTIONS
    | COMPUTE
    | CONCATENATE
    | COST
    | CUBE
    | CURRENT
    | DATA
    | DATABASE
    | DATABASES
    | DBPROPERTIES
    | DEFINED
    | DELETE
    | DELIMITED
    | DESC
    | DESCRIBE
    | DFS
    | DIRECTORIES
    | DIRECTORY
    | DISTRIBUTE
    | DIV
    | DROP
    | ESCAPED
    | EXCHANGE
    | EXISTS
    | EXPLAIN
    | EXPORT
    | EXTENDED
    | EXTERNAL
    | EXTRACT
    | FIELDS
    | FILEFORMAT
    | FIRST
    | FOLLOWING
    | FORMAT
    | FORMATTED
    | FUNCTION
    | FUNCTIONS
    | GLOBAL
    | GROUPING
    | IF
    | IGNORE
    | IMPORT
    | INDEX
    | INDEXES
    | INPATH
    | INPUTFORMAT
    | INSERT
    | INTERVAL
    | ITEMS
    | KEYS
    | LAST
    | LATERAL
    | LAZY
    | LIKE
    | LIMIT
    | LINES
    | LIST
    | LOAD
    | LOCAL
    | LOCATION
    | LOCK
    | LOCKS
    | LOGICAL
    | MACRO
    | MAP
    | MATCHED
    | MERGE
    | MSCK
    | NAMESPACE
    | NAMESPACES
    | NO
    | NULLS
    | OF
    | OPTION
    | OPTIONS
    | OUT
    | OUTPUTFORMAT
    | OVER
    | OVERLAY
    | OVERWRITE
    | PARTITION
    | PARTITIONED
    | PARTITIONS
    | PERCENTLIT
    | PIVOT
    | PLACING
    | POSITION
    | PRECEDING
    | PRINCIPALS
    | PROPERTIES
    | PURGE
    | QUERY
    | RANGE
    | RECORDREADER
    | RECORDWRITER
    | RECOVER
    | REDUCE
    | REFRESH
    | RENAME
    | REPAIR
    | REPLACE
    | RESET
    | RESTRICT
    | REVOKE
    | RLIKE
    | ROLE
    | ROLES
    | ROLLBACK
    | ROLLUP
    | ROW
    | ROWS
    | SCHEMA
    | SEMI
    | SEPARATED
    | SERDE
    | SERDEPROPERTIES
    | SET
    | SETMINUS
    | SETS
    | SHOW
    | SKEWED
    | SORT
    | SORTED
    | START
    | STATISTICS
    | STORED
    | STRATIFY
    | STRUCT
    | SUBSTR
    | SUBSTRING
    | TABLES
    | TABLESAMPLE
    | TBLPROPERTIES
    | TEMPORARY
    | TERMINATED
    | TOUCH
    | TRANSACTION
    | TRANSACTIONS
    | TRANSFORM
    | TRIM
    | TRUE
    | TRUNCATE
    | TYPE
    | UNARCHIVE
    | UNBOUNDED
    | UNCACHE
    | UNLOCK
    | UNSET
    | UPDATE
    | USE
    | VALUES
    | VIEW
    | VIEWS
    | WINDOW
    ;

strictNonReserved
    : ANTI
    | CROSS
    | EXCEPT
    | FULL
    | INNER
    | INTERSECT
    | JOIN
    | LEFT
    | NATURAL
    | ON
    | RIGHT
    | SEMI
    | SETMINUS
    | UNION
    | USING
    ;

nonReserved
    : ADD
    | AFTER
    | ALL
    | ALTER
    | ANALYZE
    | AND
    | ANY
    | ARCHIVE
    | ARRAY
    | AS
    | ASC
    | AT
    | AUTHORIZATION
    | BETWEEN
    | BOTH
    | BUCKET
    | BUCKETS
    | BY
    | CACHE
    | CASCADE
    | CASE
    | CAST
    | CHANGE
    | CHECK
    | CLEAR
    | CLUSTER
    | CLUSTERED
    | CODEGEN
    | COLLATE
    | COLLECTION
    | COLUMN
    | COLUMNS
    | COMMENT
    | COMMIT
    | COMPACT
    | COMPACTIONS
    | COMPUTE
    | CONCATENATE
    | CONSTRAINT
    | COST
    | CREATE
    | CUBE
    | CURRENT
    | CURRENT_DATE
    | CURRENT_TIME
    | CURRENT_TIMESTAMP
    | CURRENT_USER
    | DATA
    | DATABASE
    | DATABASES
    | DBPROPERTIES
    | DEFINED
    | DELETE
    | DELIMITED
    | DESC
    | DESCRIBE
    | DFS
    | DIRECTORIES
    | DIRECTORY
    | DISTINCT
    | DISTRIBUTE
    | DIV
    | DROP
    | ELSE
    | END
    | ESCAPE
    | ESCAPED
    | EXCHANGE
    | EXISTS
    | EXPLAIN
    | EXPORT
    | EXTENDED
    | EXTERNAL
    | EXTRACT
    | FALSE
    | FETCH
    | FILTER
    | FIELDS
    | FILEFORMAT
    | FIRST
    | FOLLOWING
    | FOR
    | FOREIGN
    | FORMAT
    | FORMATTED
    | FROM
    | FUNCTION
    | FUNCTIONS
    | GLOBAL
    | GRANT
    | GROUP
    | GROUPING
    | HAVING
    | IF
    | IGNORE
    | IMPORT
    | IN
    | INDEX
    | INDEXES
    | INPATH
    | INPUTFORMAT
    | INSERT
    | INTERVAL
    | INTO
    | IS
    | ITEMS
    | KEYS
    | LAST
    | LATERAL
    | LAZY
    | LEADING
    | LIKE
    | LIMIT
    | LINES
    | LIST
    | LOAD
    | LOCAL
    | LOCATION
    | LOCK
    | LOCKS
    | LOGICAL
    | MACRO
    | MAP
    | MATCHED
    | MERGE
    | MSCK
    | NAMESPACE
    | NAMESPACES
    | NO
    | NOT
    | NULL
    | NULLS
    | OF
    | ONLY
    | OPTION
    | OPTIONS
    | OR
    | ORDER
    | OUT
    | OUTER
    | OUTPUTFORMAT
    | OVER
    | OVERLAPS
    | OVERLAY
    | OVERWRITE
    | PARTITION
    | PARTITIONED
    | PARTITIONS
    | PERCENTLIT
    | PIVOT
    | PLACING
    | POSITION
    | PRECEDING
    | PRIMARY
    | PRINCIPALS
    | PROPERTIES
    | PURGE
    | QUERY
    | RANGE
    | RECORDREADER
    | RECORDWRITER
    | RECOVER
    | REDUCE
    | REFERENCES
    | REFRESH
    | RENAME
    | REPAIR
    | REPLACE
    | RESET
    | RESTRICT
    | REVOKE
    | RLIKE
    | ROLE
    | ROLES
    | ROLLBACK
    | ROLLUP
    | ROW
    | ROWS
    | SCHEMA
    | SELECT
    | SEPARATED
    | SERDE
    | SERDEPROPERTIES
    | SESSION_USER
    | SET
    | SETS
    | SHOW
    | SKEWED
    | SOME
    | SORT
    | SORTED
    | START
    | STATISTICS
    | STORED
    | STRATIFY
    | STRUCT
    | SUBSTR
    | SUBSTRING
    | TABLE
    | TABLES
    | TABLESAMPLE
    | TBLPROPERTIES
    | TEMPORARY
    | TERMINATED
    | THEN
    | TO
    | TOUCH
    | TRAILING
    | TRANSACTION
    | TRANSACTIONS
    | TRANSFORM
    | TRIM
    | TRUE
    | TRUNCATE
    | TYPE
    | UNARCHIVE
    | UNBOUNDED
    | UNCACHE
    | UNIQUE
    | UNKNOWN
    | UNLOCK
    | UNSET
    | UPDATE
    | USE
    | USER
    | VALUES
    | VIEW
    | VIEWS
    | WHEN
    | WHERE
    | WINDOW
    | WITH
    ;

ADD: 'ADD';
AFTER: 'AFTER';
ALL: 'ALL';
ALTER: 'ALTER';
ANALYZE: 'ANALYZE';
AND: 'AND';
ANTI: 'ANTI';
ANY: 'ANY';
ARCHIVE: 'ARCHIVE';
ARRAY: 'ARRAY';
AS: 'AS';
ASC: 'ASC';
AT: 'AT';
AUTHORIZATION: 'AUTHORIZATION';
BETWEEN: 'BETWEEN';
BOTH: 'BOTH';
BUCKET: 'BUCKET';
BUCKETS: 'BUCKETS';
BY: 'BY';
CACHE: 'CACHE';
CASCADE: 'CASCADE';
CASE: 'CASE';
CAST: 'CAST';
CHANGE: 'CHANGE';
CHECK: 'CHECK';
CLEAR: 'CLEAR';
CLUSTER: 'CLUSTER';
CLUSTERED: 'CLUSTERED';
CODEGEN: 'CODEGEN';
COLLATE: 'COLLATE';
COLLECTION: 'COLLECTION';
COLUMN: 'COLUMN';
COLUMNS: 'COLUMNS';
COMMENT: 'COMMENT';
COMMIT: 'COMMIT';
COMPACT: 'COMPACT';
COMPACTIONS: 'COMPACTIONS';
COMPUTE: 'COMPUTE';
CONCATENATE: 'CONCATENATE';
CONSTRAINT: 'CONSTRAINT';
COST: 'COST';
CREATE: 'CREATE';
CROSS: 'CROSS';
CUBE: 'CUBE';
CURRENT: 'CURRENT';
CURRENT_DATE: 'CURRENT_DATE';
CURRENT_TIME: 'CURRENT_TIME';
CURRENT_TIMESTAMP: 'CURRENT_TIMESTAMP';
CURRENT_USER: 'CURRENT_USER';
DATA: 'DATA';
DATABASE: 'DATABASE';
DATABASES: 'DATABASES' | 'SCHEMAS';
DBPROPERTIES: 'DBPROPERTIES';
DEFINED: 'DEFINED';
DELETE: 'DELETE';
DELIMITED: 'DELIMITED';
DESC: 'DESC';
DESCRIBE: 'DESCRIBE';
DFS: 'DFS';
DIRECTORIES: 'DIRECTORIES';
DIRECTORY: 'DIRECTORY';
DISTINCT: 'DISTINCT';
DISTRIBUTE: 'DISTRIBUTE';
DIV: 'DIV';
DROP: 'DROP';
ELSE: 'ELSE';
END: 'END';
ESCAPE: 'ESCAPE';
ESCAPED: 'ESCAPED';
EXCEPT: 'EXCEPT';
EXCHANGE: 'EXCHANGE';
EXISTS: 'EXISTS';
EXPLAIN: 'EXPLAIN';
EXPORT: 'EXPORT';
EXTENDED: 'EXTENDED';
EXTERNAL: 'EXTERNAL';
EXTRACT: 'EXTRACT';
FALSE: 'FALSE';
FETCH: 'FETCH';
FIELDS: 'FIELDS';
FILTER: 'FILTER';
FILEFORMAT: 'FILEFORMAT';
FIRST: 'FIRST';
FOLLOWING: 'FOLLOWING';
FOR: 'FOR';
FOREIGN: 'FOREIGN';
FORMAT: 'FORMAT';
FORMATTED: 'FORMATTED';
FROM: 'FROM';
FULL: 'FULL';
FUNCTION: 'FUNCTION';
FUNCTIONS: 'FUNCTIONS';
GLOBAL: 'GLOBAL';
GRANT: 'GRANT';
GROUP: 'GROUP';
GROUPING: 'GROUPING';
HAVING: 'HAVING';
IF: 'IF';
IGNORE: 'IGNORE';
IMPORT: 'IMPORT';
IN: 'IN';
INDEX: 'INDEX';
INDEXES: 'INDEXES';
INNER: 'INNER';
INPATH: 'INPATH';
INPUTFORMAT: 'INPUTFORMAT';
INSERT: 'INSERT';
INTERSECT: 'INTERSECT';
INTERVAL: 'INTERVAL';
INTO: 'INTO';
IS: 'IS';
ITEMS: 'ITEMS';
JOIN: 'JOIN';
KEYS: 'KEYS';
LAST: 'LAST';
LATERAL: 'LATERAL';
LAZY: 'LAZY';
LEADING: 'LEADING';
LEFT: 'LEFT';
LIKE: 'LIKE';
LIMIT: 'LIMIT';
LINES: 'LINES';
LIST: 'LIST';
LOAD: 'LOAD';
LOCAL: 'LOCAL';
LOCATION: 'LOCATION';
LOCK: 'LOCK';
LOCKS: 'LOCKS';
LOGICAL: 'LOGICAL';
MACRO: 'MACRO';
MAP: 'MAP';
MATCHED: 'MATCHED';
MERGE: 'MERGE';
MSCK: 'MSCK';
NAMESPACE: 'NAMESPACE';
NAMESPACES: 'NAMESPACES';
NATURAL: 'NATURAL';
NO: 'NO';
NOT: 'NOT' | '!';
NULL: 'NULL';
NULLS: 'NULLS';
OF: 'OF';
ON: 'ON';
ONLY: 'ONLY';
OPTION: 'OPTION';
OPTIONS: 'OPTIONS';
OR: 'OR';
ORDER: 'ORDER';
OUT: 'OUT';
OUTER: 'OUTER';
OUTPUTFORMAT: 'OUTPUTFORMAT';
OVER: 'OVER';
OVERLAPS: 'OVERLAPS';
OVERLAY: 'OVERLAY';
OVERWRITE: 'OVERWRITE';
PARTITION: 'PARTITION';
PARTITIONED: 'PARTITIONED';
PARTITIONS: 'PARTITIONS';
PERCENTLIT: 'PERCENT';
PIVOT: 'PIVOT';
PLACING: 'PLACING';
POSITION: 'POSITION';
PRECEDING: 'PRECEDING';
PRIMARY: 'PRIMARY';
PRINCIPALS: 'PRINCIPALS';
PROPERTIES: 'PROPERTIES';
PURGE: 'PURGE';
QUERY: 'QUERY';
RANGE: 'RANGE';
RECORDREADER: 'RECORDREADER';
RECORDWRITER: 'RECORDWRITER';
RECOVER: 'RECOVER';
REDUCE: 'REDUCE';
REFERENCES: 'REFERENCES';
REFRESH: 'REFRESH';
RENAME: 'RENAME';
REPAIR: 'REPAIR';
REPLACE: 'REPLACE';
RESET: 'RESET';
RESTRICT: 'RESTRICT';
REVOKE: 'REVOKE';
RIGHT: 'RIGHT';
RLIKE: 'RLIKE' | 'REGEXP';
ROLE: 'ROLE';
ROLES: 'ROLES';
ROLLBACK: 'ROLLBACK';
ROLLUP: 'ROLLUP';
ROW: 'ROW';
ROWS: 'ROWS';
SCHEMA: 'SCHEMA';
SELECT: 'SELECT';
SEMI: 'SEMI';
SEPARATED: 'SEPARATED';
SERDE: 'SERDE';
SERDEPROPERTIES: 'SERDEPROPERTIES';
SESSION_USER: 'SESSION_USER';
SET: 'SET';
SETMINUS: 'MINUS';
SETS: 'SETS';
SHOW: 'SHOW';
SKEWED: 'SKEWED';
SOME: 'SOME';
SORT: 'SORT';
SORTED: 'SORTED';
START: 'START';
STATISTICS: 'STATISTICS';
STORED: 'STORED';
STRATIFY: 'STRATIFY';
STRUCT: 'STRUCT';
SUBSTR: 'SUBSTR';
SUBSTRING: 'SUBSTRING';
TABLE: 'TABLE';
TABLES: 'TABLES';
TABLESAMPLE: 'TABLESAMPLE';
TBLPROPERTIES: 'TBLPROPERTIES';
TEMPORARY: 'TEMPORARY' | 'TEMP';
TERMINATED: 'TERMINATED';
THEN: 'THEN';
TO: 'TO';
TOUCH: 'TOUCH';
TRAILING: 'TRAILING';
TRANSACTION: 'TRANSACTION';
TRANSACTIONS: 'TRANSACTIONS';
TRANSFORM: 'TRANSFORM';
TRIM: 'TRIM';
TRUE: 'TRUE';
TRUNCATE: 'TRUNCATE';
TYPE: 'TYPE';
UNARCHIVE: 'UNARCHIVE';
UNBOUNDED: 'UNBOUNDED';
UNCACHE: 'UNCACHE';
UNION: 'UNION';
UNIQUE: 'UNIQUE';
UNKNOWN: 'UNKNOWN';
UNLOCK: 'UNLOCK';
UNSET: 'UNSET';
UPDATE: 'UPDATE';
USE: 'USE';
USER: 'USER';
USING: 'USING';
VALUES: 'VALUES';
VIEW: 'VIEW';
VIEWS: 'VIEWS';
WHEN: 'WHEN';
WHERE: 'WHERE';
WINDOW: 'WINDOW';
WITH: 'WITH';

EQ  : '=' | '==';
NSEQ: '<=>';
NEQ : '<>';
NEQJ: '!=';
LT  : '<';
LTE : '<=' | '!>';
GT  : '>';
GTE : '>=' | '!<';

PLUS: '+';
MINUS: '-';
ASTERISK: '*';
SLASH: '/';
PERCENT: '%';
TILDE: '~';
AMPERSAND: '&';
PIPE: '|';
CONCAT_PIPE: '||';
HAT: '^';

STRING
    : '\'' ( ~('\''|'\\') | ('\\' .) )* '\''
    | '"' ( ~('"'|'\\') | ('\\' .) )* '"'
    ;

BIGINT_LITERAL
    : DIGIT+ 'L'
    ;

SMALLINT_LITERAL
    : DIGIT+ 'S'
    ;

TINYINT_LITERAL
    : DIGIT+ 'Y'
    ;

INTEGER_VALUE
    : DIGIT+
    ;

EXPONENT_VALUE
    : DIGIT+ EXPONENT
    | DECIMAL_DIGITS EXPONENT
    ;

DECIMAL_VALUE
    : DECIMAL_DIGITS
    ;

DOUBLE_LITERAL
    : DIGIT+ EXPONENT? 'D'
    | DECIMAL_DIGITS EXPONENT? 'D'
    ;

BIGDECIMAL_LITERAL
    : DIGIT+ EXPONENT? 'BD'
    | DECIMAL_DIGITS EXPONENT? 'BD'
    ;

IDENTIFIER
    : (LETTER | DIGIT | '_')+
    ;

BACKQUOTED_IDENTIFIER
    : '`' ( ~'`' | '``' )* '`'
    ;

fragment DECIMAL_DIGITS
    : DIGIT+ '.' DIGIT*
    | '.' DIGIT+
    ;

fragment EXPONENT
    : 'E' [+-]? DIGIT+
    ;

fragment DIGIT
    : [0-9]
    ;

fragment LETTER
    : [A-Z]
    ;

SIMPLE_COMMENT
    : '--' ('\\\n' | ~[\r\n])* '\r'? '\n'? -> channel(HIDDEN)
    ;

BRACKETED_EMPTY_COMMENT
    : '/**/' -> channel(HIDDEN)
    ;

BRACKETED_COMMENT
    : '/*' ~[+] .*? '*/' -> channel(HIDDEN)
    ;

WS
    : [ \r\n\t]+ -> channel(HIDDEN)
    ;

UNRECOGNIZED
    : .
    ;
