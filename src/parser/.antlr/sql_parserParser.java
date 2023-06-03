// Generated from /home/meng/workspace/compiler/src/parser/sql_parser.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class sql_parserParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, ADD=9, 
		AFTER=10, ALL=11, ALTER=12, ANALYZE=13, AND=14, ANTI=15, ANY=16, ARCHIVE=17, 
		ARRAY=18, AS=19, ASC=20, AT=21, AUTHORIZATION=22, BETWEEN=23, BOTH=24, 
		BUCKET=25, BUCKETS=26, BY=27, CACHE=28, CASCADE=29, CASE=30, CAST=31, 
		CHANGE=32, CHECK=33, CLEAR=34, CLUSTER=35, CLUSTERED=36, CODEGEN=37, COLLATE=38, 
		COLLECTION=39, COLUMN=40, COLUMNS=41, COMMENT=42, COMMIT=43, COMPACT=44, 
		COMPACTIONS=45, COMPUTE=46, CONCATENATE=47, CONSTRAINT=48, COST=49, CREATE=50, 
		CROSS=51, CUBE=52, CURRENT=53, CURRENT_DATE=54, CURRENT_TIME=55, CURRENT_TIMESTAMP=56, 
		CURRENT_USER=57, DATA=58, DATABASE=59, DATABASES=60, DBPROPERTIES=61, 
		DEFINED=62, DELETE=63, DELIMITED=64, DESC=65, DESCRIBE=66, DFS=67, DIRECTORIES=68, 
		DIRECTORY=69, DISTINCT=70, DISTRIBUTE=71, DIV=72, DROP=73, ELSE=74, END=75, 
		ESCAPE=76, ESCAPED=77, EXCEPT=78, EXCHANGE=79, EXISTS=80, EXPLAIN=81, 
		EXPORT=82, EXTENDED=83, EXTERNAL=84, EXTRACT=85, FALSE=86, FETCH=87, FIELDS=88, 
		FILTER=89, FILEFORMAT=90, FIRST=91, FOLLOWING=92, FOR=93, FOREIGN=94, 
		FORMAT=95, FORMATTED=96, FROM=97, FULL=98, FUNCTION=99, FUNCTIONS=100, 
		GLOBAL=101, GRANT=102, GROUP=103, GROUPING=104, HAVING=105, IF=106, IGNORE=107, 
		IMPORT=108, IN=109, INDEX=110, INDEXES=111, INNER=112, INPATH=113, INPUTFORMAT=114, 
		INSERT=115, INTERSECT=116, INTERVAL=117, INTO=118, IS=119, ITEMS=120, 
		JOIN=121, KEYS=122, LAST=123, LATERAL=124, LAZY=125, LEADING=126, LEFT=127, 
		LIKE=128, LIMIT=129, LINES=130, LIST=131, LOAD=132, LOCAL=133, LOCATION=134, 
		LOCK=135, LOCKS=136, LOGICAL=137, MACRO=138, MAP=139, MATCHED=140, MERGE=141, 
		MSCK=142, NAMESPACE=143, NAMESPACES=144, NATURAL=145, NO=146, NOT=147, 
		NULL=148, NULLS=149, OF=150, ON=151, ONLY=152, OPTION=153, OPTIONS=154, 
		OR=155, ORDER=156, OUT=157, OUTER=158, OUTPUTFORMAT=159, OVER=160, OVERLAPS=161, 
		OVERLAY=162, OVERWRITE=163, PARTITION=164, PARTITIONED=165, PARTITIONS=166, 
		PERCENTLIT=167, PIVOT=168, PLACING=169, POSITION=170, PRECEDING=171, PRIMARY=172, 
		PRINCIPALS=173, PROPERTIES=174, PURGE=175, QUERY=176, RANGE=177, RECORDREADER=178, 
		RECORDWRITER=179, RECOVER=180, REDUCE=181, REFERENCES=182, REFRESH=183, 
		RENAME=184, REPAIR=185, REPLACE=186, RESET=187, RESTRICT=188, REVOKE=189, 
		RIGHT=190, RLIKE=191, ROLE=192, ROLES=193, ROLLBACK=194, ROLLUP=195, ROW=196, 
		ROWS=197, SCHEMA=198, SELECT=199, SEMI=200, SEPARATED=201, SERDE=202, 
		SERDEPROPERTIES=203, SESSION_USER=204, SET=205, SETMINUS=206, SETS=207, 
		SHOW=208, SKEWED=209, SOME=210, SORT=211, SORTED=212, START=213, STATISTICS=214, 
		STORED=215, STRATIFY=216, STRUCT=217, SUBSTR=218, SUBSTRING=219, TABLE=220, 
		TABLES=221, TABLESAMPLE=222, TBLPROPERTIES=223, TEMPORARY=224, TERMINATED=225, 
		THEN=226, TO=227, TOUCH=228, TRAILING=229, TRANSACTION=230, TRANSACTIONS=231, 
		TRANSFORM=232, TRIM=233, TRUE=234, TRUNCATE=235, TYPE=236, UNARCHIVE=237, 
		UNBOUNDED=238, UNCACHE=239, UNION=240, UNIQUE=241, UNKNOWN=242, UNLOCK=243, 
		UNSET=244, UPDATE=245, USE=246, USER=247, USING=248, VALUES=249, VIEW=250, 
		VIEWS=251, WHEN=252, WHERE=253, WINDOW=254, WITH=255, EQ=256, NSEQ=257, 
		NEQ=258, NEQJ=259, LT=260, LTE=261, GT=262, GTE=263, PLUS=264, MINUS=265, 
		ASTERISK=266, SLASH=267, PERCENT=268, TILDE=269, AMPERSAND=270, PIPE=271, 
		CONCAT_PIPE=272, HAT=273, STRING=274, BIGINT_LITERAL=275, SMALLINT_LITERAL=276, 
		TINYINT_LITERAL=277, INTEGER_VALUE=278, EXPONENT_VALUE=279, DECIMAL_VALUE=280, 
		DOUBLE_LITERAL=281, BIGDECIMAL_LITERAL=282, IDENTIFIER=283, BACKQUOTED_IDENTIFIER=284, 
		SIMPLE_COMMENT=285, BRACKETED_EMPTY_COMMENT=286, BRACKETED_COMMENT=287, 
		WS=288, UNRECOGNIZED=289;
	public static final int
		RULE_singleStatement = 0, RULE_singleDataType = 1, RULE_statement = 2, 
		RULE_commentSpec = 3, RULE_query = 4, RULE_queryOrganization = 5, RULE_queryTerm = 6, 
		RULE_queryPrimary = 7, RULE_sortItem = 8, RULE_querySpecification = 9, 
		RULE_selectClause = 10, RULE_whereClause = 11, RULE_fromClause = 12, RULE_setQuantifier = 13, 
		RULE_relation = 14, RULE_identifierList = 15, RULE_identifierSeq = 16, 
		RULE_orderedIdentifierList = 17, RULE_orderedIdentifier = 18, RULE_identifierCommentList = 19, 
		RULE_identifierComment = 20, RULE_relationPrimary = 21, RULE_tableAlias = 22, 
		RULE_multipartIdentifierList = 23, RULE_multipartIdentifier = 24, RULE_namedExpression = 25, 
		RULE_namedExpressionSeq = 26, RULE_expression = 27, RULE_booleanExpression = 28, 
		RULE_predicate = 29, RULE_valueExpression = 30, RULE_primaryExpression = 31, 
		RULE_constant = 32, RULE_comparisonOperator = 33, RULE_arithmeticOperator = 34, 
		RULE_predicateOperator = 35, RULE_booleanValue = 36, RULE_interval = 37, 
		RULE_errorCapturingMultiUnitsInterval = 38, RULE_multiUnitsInterval = 39, 
		RULE_errorCapturingUnitToUnitInterval = 40, RULE_unitToUnitInterval = 41, 
		RULE_intervalValue = 42, RULE_colPosition = 43, RULE_dataType = 44, RULE_qualifiedColTypeWithPositionList = 45, 
		RULE_qualifiedColTypeWithPosition = 46, RULE_colTypeList = 47, RULE_colType = 48, 
		RULE_complexColTypeList = 49, RULE_complexColType = 50, RULE_whenClause = 51, 
		RULE_windowClause = 52, RULE_namedWindow = 53, RULE_windowSpec = 54, RULE_windowFrame = 55, 
		RULE_frameBound = 56, RULE_qualifiedNameList = 57, RULE_functionName = 58, 
		RULE_qualifiedName = 59, RULE_errorCapturingIdentifier = 60, RULE_errorCapturingIdentifierExtra = 61, 
		RULE_identifier = 62, RULE_strictIdentifier = 63, RULE_quotedIdentifier = 64, 
		RULE_number = 65, RULE_alterColumnAction = 66, RULE_ansiNonReserved = 67, 
		RULE_strictNonReserved = 68, RULE_nonReserved = 69;
	private static String[] makeRuleNames() {
		return new String[] {
			"singleStatement", "singleDataType", "statement", "commentSpec", "query", 
			"queryOrganization", "queryTerm", "queryPrimary", "sortItem", "querySpecification", 
			"selectClause", "whereClause", "fromClause", "setQuantifier", "relation", 
			"identifierList", "identifierSeq", "orderedIdentifierList", "orderedIdentifier", 
			"identifierCommentList", "identifierComment", "relationPrimary", "tableAlias", 
			"multipartIdentifierList", "multipartIdentifier", "namedExpression", 
			"namedExpressionSeq", "expression", "booleanExpression", "predicate", 
			"valueExpression", "primaryExpression", "constant", "comparisonOperator", 
			"arithmeticOperator", "predicateOperator", "booleanValue", "interval", 
			"errorCapturingMultiUnitsInterval", "multiUnitsInterval", "errorCapturingUnitToUnitInterval", 
			"unitToUnitInterval", "intervalValue", "colPosition", "dataType", "qualifiedColTypeWithPositionList", 
			"qualifiedColTypeWithPosition", "colTypeList", "colType", "complexColTypeList", 
			"complexColType", "whenClause", "windowClause", "namedWindow", "windowSpec", 
			"windowFrame", "frameBound", "qualifiedNameList", "functionName", "qualifiedName", 
			"errorCapturingIdentifier", "errorCapturingIdentifierExtra", "identifier", 
			"strictIdentifier", "quotedIdentifier", "number", "alterColumnAction", 
			"ansiNonReserved", "strictNonReserved", "nonReserved"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "','", "'('", "')'", "'.'", "'['", "']'", "':'", "'ADD'", 
			"'AFTER'", "'ALL'", "'ALTER'", "'ANALYZE'", "'AND'", "'ANTI'", "'ANY'", 
			"'ARCHIVE'", "'ARRAY'", "'AS'", "'ASC'", "'AT'", "'AUTHORIZATION'", "'BETWEEN'", 
			"'BOTH'", "'BUCKET'", "'BUCKETS'", "'BY'", "'CACHE'", "'CASCADE'", "'CASE'", 
			"'CAST'", "'CHANGE'", "'CHECK'", "'CLEAR'", "'CLUSTER'", "'CLUSTERED'", 
			"'CODEGEN'", "'COLLATE'", "'COLLECTION'", "'COLUMN'", "'COLUMNS'", "'COMMENT'", 
			"'COMMIT'", "'COMPACT'", "'COMPACTIONS'", "'COMPUTE'", "'CONCATENATE'", 
			"'CONSTRAINT'", "'COST'", "'CREATE'", "'CROSS'", "'CUBE'", "'CURRENT'", 
			"'CURRENT_DATE'", "'CURRENT_TIME'", "'CURRENT_TIMESTAMP'", "'CURRENT_USER'", 
			"'DATA'", "'DATABASE'", null, "'DBPROPERTIES'", "'DEFINED'", "'DELETE'", 
			"'DELIMITED'", "'DESC'", "'DESCRIBE'", "'DFS'", "'DIRECTORIES'", "'DIRECTORY'", 
			"'DISTINCT'", "'DISTRIBUTE'", "'DIV'", "'DROP'", "'ELSE'", "'END'", "'ESCAPE'", 
			"'ESCAPED'", "'EXCEPT'", "'EXCHANGE'", "'EXISTS'", "'EXPLAIN'", "'EXPORT'", 
			"'EXTENDED'", "'EXTERNAL'", "'EXTRACT'", "'FALSE'", "'FETCH'", "'FIELDS'", 
			"'FILTER'", "'FILEFORMAT'", "'FIRST'", "'FOLLOWING'", "'FOR'", "'FOREIGN'", 
			"'FORMAT'", "'FORMATTED'", "'FROM'", "'FULL'", "'FUNCTION'", "'FUNCTIONS'", 
			"'GLOBAL'", "'GRANT'", "'GROUP'", "'GROUPING'", "'HAVING'", "'IF'", "'IGNORE'", 
			"'IMPORT'", "'IN'", "'INDEX'", "'INDEXES'", "'INNER'", "'INPATH'", "'INPUTFORMAT'", 
			"'INSERT'", "'INTERSECT'", "'INTERVAL'", "'INTO'", "'IS'", "'ITEMS'", 
			"'JOIN'", "'KEYS'", "'LAST'", "'LATERAL'", "'LAZY'", "'LEADING'", "'LEFT'", 
			"'LIKE'", "'LIMIT'", "'LINES'", "'LIST'", "'LOAD'", "'LOCAL'", "'LOCATION'", 
			"'LOCK'", "'LOCKS'", "'LOGICAL'", "'MACRO'", "'MAP'", "'MATCHED'", "'MERGE'", 
			"'MSCK'", "'NAMESPACE'", "'NAMESPACES'", "'NATURAL'", "'NO'", null, "'NULL'", 
			"'NULLS'", "'OF'", "'ON'", "'ONLY'", "'OPTION'", "'OPTIONS'", "'OR'", 
			"'ORDER'", "'OUT'", "'OUTER'", "'OUTPUTFORMAT'", "'OVER'", "'OVERLAPS'", 
			"'OVERLAY'", "'OVERWRITE'", "'PARTITION'", "'PARTITIONED'", "'PARTITIONS'", 
			"'PERCENT'", "'PIVOT'", "'PLACING'", "'POSITION'", "'PRECEDING'", "'PRIMARY'", 
			"'PRINCIPALS'", "'PROPERTIES'", "'PURGE'", "'QUERY'", "'RANGE'", "'RECORDREADER'", 
			"'RECORDWRITER'", "'RECOVER'", "'REDUCE'", "'REFERENCES'", "'REFRESH'", 
			"'RENAME'", "'REPAIR'", "'REPLACE'", "'RESET'", "'RESTRICT'", "'REVOKE'", 
			"'RIGHT'", null, "'ROLE'", "'ROLES'", "'ROLLBACK'", "'ROLLUP'", "'ROW'", 
			"'ROWS'", "'SCHEMA'", "'SELECT'", "'SEMI'", "'SEPARATED'", "'SERDE'", 
			"'SERDEPROPERTIES'", "'SESSION_USER'", "'SET'", "'MINUS'", "'SETS'", 
			"'SHOW'", "'SKEWED'", "'SOME'", "'SORT'", "'SORTED'", "'START'", "'STATISTICS'", 
			"'STORED'", "'STRATIFY'", "'STRUCT'", "'SUBSTR'", "'SUBSTRING'", "'TABLE'", 
			"'TABLES'", "'TABLESAMPLE'", "'TBLPROPERTIES'", null, "'TERMINATED'", 
			"'THEN'", "'TO'", "'TOUCH'", "'TRAILING'", "'TRANSACTION'", "'TRANSACTIONS'", 
			"'TRANSFORM'", "'TRIM'", "'TRUE'", "'TRUNCATE'", "'TYPE'", "'UNARCHIVE'", 
			"'UNBOUNDED'", "'UNCACHE'", "'UNION'", "'UNIQUE'", "'UNKNOWN'", "'UNLOCK'", 
			"'UNSET'", "'UPDATE'", "'USE'", "'USER'", "'USING'", "'VALUES'", "'VIEW'", 
			"'VIEWS'", "'WHEN'", "'WHERE'", "'WINDOW'", "'WITH'", null, "'<=>'", 
			"'<>'", "'!='", "'<'", null, "'>'", null, "'+'", "'-'", "'*'", "'/'", 
			"'%'", "'~'", "'&'", "'|'", "'||'", "'^'", null, null, null, null, null, 
			null, null, null, null, null, null, null, "'/**/'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "ADD", "AFTER", 
			"ALL", "ALTER", "ANALYZE", "AND", "ANTI", "ANY", "ARCHIVE", "ARRAY", 
			"AS", "ASC", "AT", "AUTHORIZATION", "BETWEEN", "BOTH", "BUCKET", "BUCKETS", 
			"BY", "CACHE", "CASCADE", "CASE", "CAST", "CHANGE", "CHECK", "CLEAR", 
			"CLUSTER", "CLUSTERED", "CODEGEN", "COLLATE", "COLLECTION", "COLUMN", 
			"COLUMNS", "COMMENT", "COMMIT", "COMPACT", "COMPACTIONS", "COMPUTE", 
			"CONCATENATE", "CONSTRAINT", "COST", "CREATE", "CROSS", "CUBE", "CURRENT", 
			"CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER", 
			"DATA", "DATABASE", "DATABASES", "DBPROPERTIES", "DEFINED", "DELETE", 
			"DELIMITED", "DESC", "DESCRIBE", "DFS", "DIRECTORIES", "DIRECTORY", "DISTINCT", 
			"DISTRIBUTE", "DIV", "DROP", "ELSE", "END", "ESCAPE", "ESCAPED", "EXCEPT", 
			"EXCHANGE", "EXISTS", "EXPLAIN", "EXPORT", "EXTENDED", "EXTERNAL", "EXTRACT", 
			"FALSE", "FETCH", "FIELDS", "FILTER", "FILEFORMAT", "FIRST", "FOLLOWING", 
			"FOR", "FOREIGN", "FORMAT", "FORMATTED", "FROM", "FULL", "FUNCTION", 
			"FUNCTIONS", "GLOBAL", "GRANT", "GROUP", "GROUPING", "HAVING", "IF", 
			"IGNORE", "IMPORT", "IN", "INDEX", "INDEXES", "INNER", "INPATH", "INPUTFORMAT", 
			"INSERT", "INTERSECT", "INTERVAL", "INTO", "IS", "ITEMS", "JOIN", "KEYS", 
			"LAST", "LATERAL", "LAZY", "LEADING", "LEFT", "LIKE", "LIMIT", "LINES", 
			"LIST", "LOAD", "LOCAL", "LOCATION", "LOCK", "LOCKS", "LOGICAL", "MACRO", 
			"MAP", "MATCHED", "MERGE", "MSCK", "NAMESPACE", "NAMESPACES", "NATURAL", 
			"NO", "NOT", "NULL", "NULLS", "OF", "ON", "ONLY", "OPTION", "OPTIONS", 
			"OR", "ORDER", "OUT", "OUTER", "OUTPUTFORMAT", "OVER", "OVERLAPS", "OVERLAY", 
			"OVERWRITE", "PARTITION", "PARTITIONED", "PARTITIONS", "PERCENTLIT", 
			"PIVOT", "PLACING", "POSITION", "PRECEDING", "PRIMARY", "PRINCIPALS", 
			"PROPERTIES", "PURGE", "QUERY", "RANGE", "RECORDREADER", "RECORDWRITER", 
			"RECOVER", "REDUCE", "REFERENCES", "REFRESH", "RENAME", "REPAIR", "REPLACE", 
			"RESET", "RESTRICT", "REVOKE", "RIGHT", "RLIKE", "ROLE", "ROLES", "ROLLBACK", 
			"ROLLUP", "ROW", "ROWS", "SCHEMA", "SELECT", "SEMI", "SEPARATED", "SERDE", 
			"SERDEPROPERTIES", "SESSION_USER", "SET", "SETMINUS", "SETS", "SHOW", 
			"SKEWED", "SOME", "SORT", "SORTED", "START", "STATISTICS", "STORED", 
			"STRATIFY", "STRUCT", "SUBSTR", "SUBSTRING", "TABLE", "TABLES", "TABLESAMPLE", 
			"TBLPROPERTIES", "TEMPORARY", "TERMINATED", "THEN", "TO", "TOUCH", "TRAILING", 
			"TRANSACTION", "TRANSACTIONS", "TRANSFORM", "TRIM", "TRUE", "TRUNCATE", 
			"TYPE", "UNARCHIVE", "UNBOUNDED", "UNCACHE", "UNION", "UNIQUE", "UNKNOWN", 
			"UNLOCK", "UNSET", "UPDATE", "USE", "USER", "USING", "VALUES", "VIEW", 
			"VIEWS", "WHEN", "WHERE", "WINDOW", "WITH", "EQ", "NSEQ", "NEQ", "NEQJ", 
			"LT", "LTE", "GT", "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", 
			"TILDE", "AMPERSAND", "PIPE", "CONCAT_PIPE", "HAT", "STRING", "BIGINT_LITERAL", 
			"SMALLINT_LITERAL", "TINYINT_LITERAL", "INTEGER_VALUE", "EXPONENT_VALUE", 
			"DECIMAL_VALUE", "DOUBLE_LITERAL", "BIGDECIMAL_LITERAL", "IDENTIFIER", 
			"BACKQUOTED_IDENTIFIER", "SIMPLE_COMMENT", "BRACKETED_EMPTY_COMMENT", 
			"BRACKETED_COMMENT", "WS", "UNRECOGNIZED"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "sql_parser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public sql_parserParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class SingleStatementContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public TerminalNode EOF() { return getToken(sql_parserParser.EOF, 0); }
		public SingleStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleStatement; }
	}

	public final SingleStatementContext singleStatement() throws RecognitionException {
		SingleStatementContext _localctx = new SingleStatementContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_singleStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(140);
			statement();
			setState(144);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(141);
				match(T__0);
				}
				}
				setState(146);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(147);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SingleDataTypeContext extends ParserRuleContext {
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public TerminalNode EOF() { return getToken(sql_parserParser.EOF, 0); }
		public SingleDataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleDataType; }
	}

	public final SingleDataTypeContext singleDataType() throws RecognitionException {
		SingleDataTypeContext _localctx = new SingleDataTypeContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_singleDataType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			dataType();
			setState(150);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StatementDefaultContext extends StatementContext {
		public QueryContext query() {
			return getRuleContext(QueryContext.class,0);
		}
		public StatementDefaultContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statement);
		try {
			_localctx = new StatementDefaultContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			query();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CommentSpecContext extends ParserRuleContext {
		public TerminalNode COMMENT() { return getToken(sql_parserParser.COMMENT, 0); }
		public TerminalNode STRING() { return getToken(sql_parserParser.STRING, 0); }
		public CommentSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_commentSpec; }
	}

	public final CommentSpecContext commentSpec() throws RecognitionException {
		CommentSpecContext _localctx = new CommentSpecContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_commentSpec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(154);
			match(COMMENT);
			setState(155);
			match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryContext extends ParserRuleContext {
		public QueryTermContext queryTerm() {
			return getRuleContext(QueryTermContext.class,0);
		}
		public QueryOrganizationContext queryOrganization() {
			return getRuleContext(QueryOrganizationContext.class,0);
		}
		public QueryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_query; }
	}

	public final QueryContext query() throws RecognitionException {
		QueryContext _localctx = new QueryContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_query);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
			queryTerm();
			setState(158);
			queryOrganization();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryOrganizationContext extends ParserRuleContext {
		public SortItemContext sortItem;
		public List<SortItemContext> order = new ArrayList<SortItemContext>();
		public List<SortItemContext> sort = new ArrayList<SortItemContext>();
		public ExpressionContext limit;
		public TerminalNode ORDER() { return getToken(sql_parserParser.ORDER, 0); }
		public List<TerminalNode> BY() { return getTokens(sql_parserParser.BY); }
		public TerminalNode BY(int i) {
			return getToken(sql_parserParser.BY, i);
		}
		public TerminalNode SORT() { return getToken(sql_parserParser.SORT, 0); }
		public TerminalNode LIMIT() { return getToken(sql_parserParser.LIMIT, 0); }
		public List<SortItemContext> sortItem() {
			return getRuleContexts(SortItemContext.class);
		}
		public SortItemContext sortItem(int i) {
			return getRuleContext(SortItemContext.class,i);
		}
		public TerminalNode ALL() { return getToken(sql_parserParser.ALL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public QueryOrganizationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_queryOrganization; }
	}

	public final QueryOrganizationContext queryOrganization() throws RecognitionException {
		QueryOrganizationContext _localctx = new QueryOrganizationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_queryOrganization);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ORDER) {
				{
				setState(160);
				match(ORDER);
				setState(161);
				match(BY);
				setState(162);
				((QueryOrganizationContext)_localctx).sortItem = sortItem();
				((QueryOrganizationContext)_localctx).order.add(((QueryOrganizationContext)_localctx).sortItem);
				setState(167);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(163);
					match(T__1);
					setState(164);
					((QueryOrganizationContext)_localctx).sortItem = sortItem();
					((QueryOrganizationContext)_localctx).order.add(((QueryOrganizationContext)_localctx).sortItem);
					}
					}
					setState(169);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(182);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SORT) {
				{
				setState(172);
				match(SORT);
				setState(173);
				match(BY);
				setState(174);
				((QueryOrganizationContext)_localctx).sortItem = sortItem();
				((QueryOrganizationContext)_localctx).sort.add(((QueryOrganizationContext)_localctx).sortItem);
				setState(179);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(175);
					match(T__1);
					setState(176);
					((QueryOrganizationContext)_localctx).sortItem = sortItem();
					((QueryOrganizationContext)_localctx).sort.add(((QueryOrganizationContext)_localctx).sortItem);
					}
					}
					setState(181);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(189);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LIMIT) {
				{
				setState(184);
				match(LIMIT);
				setState(187);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
				case 1:
					{
					setState(185);
					match(ALL);
					}
					break;
				case 2:
					{
					setState(186);
					((QueryOrganizationContext)_localctx).limit = expression();
					}
					break;
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryTermContext extends ParserRuleContext {
		public QueryTermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_queryTerm; }
	 
		public QueryTermContext() { }
		public void copyFrom(QueryTermContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class QueryTermDefaultContext extends QueryTermContext {
		public QueryPrimaryContext queryPrimary() {
			return getRuleContext(QueryPrimaryContext.class,0);
		}
		public QueryTermDefaultContext(QueryTermContext ctx) { copyFrom(ctx); }
	}

	public final QueryTermContext queryTerm() throws RecognitionException {
		QueryTermContext _localctx = new QueryTermContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_queryTerm);
		try {
			_localctx = new QueryTermDefaultContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(191);
			queryPrimary();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QueryPrimaryContext extends ParserRuleContext {
		public QueryPrimaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_queryPrimary; }
	 
		public QueryPrimaryContext() { }
		public void copyFrom(QueryPrimaryContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class SubqueryContext extends QueryPrimaryContext {
		public QueryContext query() {
			return getRuleContext(QueryContext.class,0);
		}
		public SubqueryContext(QueryPrimaryContext ctx) { copyFrom(ctx); }
	}
	public static class QueryPrimaryDefaultContext extends QueryPrimaryContext {
		public QuerySpecificationContext querySpecification() {
			return getRuleContext(QuerySpecificationContext.class,0);
		}
		public QueryPrimaryDefaultContext(QueryPrimaryContext ctx) { copyFrom(ctx); }
	}
	public static class TableContext extends QueryPrimaryContext {
		public TerminalNode TABLE() { return getToken(sql_parserParser.TABLE, 0); }
		public MultipartIdentifierContext multipartIdentifier() {
			return getRuleContext(MultipartIdentifierContext.class,0);
		}
		public TableContext(QueryPrimaryContext ctx) { copyFrom(ctx); }
	}

	public final QueryPrimaryContext queryPrimary() throws RecognitionException {
		QueryPrimaryContext _localctx = new QueryPrimaryContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_queryPrimary);
		try {
			setState(200);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SELECT:
				_localctx = new QueryPrimaryDefaultContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(193);
				querySpecification();
				}
				break;
			case TABLE:
				_localctx = new TableContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(194);
				match(TABLE);
				setState(195);
				multipartIdentifier();
				}
				break;
			case T__2:
				_localctx = new SubqueryContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(196);
				match(T__2);
				setState(197);
				query();
				setState(198);
				match(T__3);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SortItemContext extends ParserRuleContext {
		public Token ordering;
		public Token nullOrder;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode NULLS() { return getToken(sql_parserParser.NULLS, 0); }
		public TerminalNode ASC() { return getToken(sql_parserParser.ASC, 0); }
		public TerminalNode DESC() { return getToken(sql_parserParser.DESC, 0); }
		public TerminalNode LAST() { return getToken(sql_parserParser.LAST, 0); }
		public TerminalNode FIRST() { return getToken(sql_parserParser.FIRST, 0); }
		public SortItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sortItem; }
	}

	public final SortItemContext sortItem() throws RecognitionException {
		SortItemContext _localctx = new SortItemContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_sortItem);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(202);
			expression();
			setState(204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASC || _la==DESC) {
				{
				setState(203);
				((SortItemContext)_localctx).ordering = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ASC || _la==DESC) ) {
					((SortItemContext)_localctx).ordering = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(208);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NULLS) {
				{
				setState(206);
				match(NULLS);
				setState(207);
				((SortItemContext)_localctx).nullOrder = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==FIRST || _la==LAST) ) {
					((SortItemContext)_localctx).nullOrder = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QuerySpecificationContext extends ParserRuleContext {
		public SelectClauseContext selectClause() {
			return getRuleContext(SelectClauseContext.class,0);
		}
		public FromClauseContext fromClause() {
			return getRuleContext(FromClauseContext.class,0);
		}
		public WhereClauseContext whereClause() {
			return getRuleContext(WhereClauseContext.class,0);
		}
		public QuerySpecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_querySpecification; }
	}

	public final QuerySpecificationContext querySpecification() throws RecognitionException {
		QuerySpecificationContext _localctx = new QuerySpecificationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_querySpecification);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			selectClause();
			setState(212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FROM) {
				{
				setState(211);
				fromClause();
				}
			}

			setState(215);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(214);
				whereClause();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectClauseContext extends ParserRuleContext {
		public TerminalNode SELECT() { return getToken(sql_parserParser.SELECT, 0); }
		public NamedExpressionSeqContext namedExpressionSeq() {
			return getRuleContext(NamedExpressionSeqContext.class,0);
		}
		public SetQuantifierContext setQuantifier() {
			return getRuleContext(SetQuantifierContext.class,0);
		}
		public SelectClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectClause; }
	}

	public final SelectClauseContext selectClause() throws RecognitionException {
		SelectClauseContext _localctx = new SelectClauseContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_selectClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			match(SELECT);
			setState(219);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				setState(218);
				setQuantifier();
				}
				break;
			}
			setState(221);
			namedExpressionSeq();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhereClauseContext extends ParserRuleContext {
		public TerminalNode WHERE() { return getToken(sql_parserParser.WHERE, 0); }
		public BooleanExpressionContext booleanExpression() {
			return getRuleContext(BooleanExpressionContext.class,0);
		}
		public WhereClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whereClause; }
	}

	public final WhereClauseContext whereClause() throws RecognitionException {
		WhereClauseContext _localctx = new WhereClauseContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_whereClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			match(WHERE);
			setState(224);
			booleanExpression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FromClauseContext extends ParserRuleContext {
		public TerminalNode FROM() { return getToken(sql_parserParser.FROM, 0); }
		public List<RelationContext> relation() {
			return getRuleContexts(RelationContext.class);
		}
		public RelationContext relation(int i) {
			return getRuleContext(RelationContext.class,i);
		}
		public FromClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fromClause; }
	}

	public final FromClauseContext fromClause() throws RecognitionException {
		FromClauseContext _localctx = new FromClauseContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_fromClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(226);
			match(FROM);
			setState(227);
			relation();
			setState(232);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(228);
				match(T__1);
				setState(229);
				relation();
				}
				}
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SetQuantifierContext extends ParserRuleContext {
		public TerminalNode DISTINCT() { return getToken(sql_parserParser.DISTINCT, 0); }
		public TerminalNode ALL() { return getToken(sql_parserParser.ALL, 0); }
		public SetQuantifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setQuantifier; }
	}

	public final SetQuantifierContext setQuantifier() throws RecognitionException {
		SetQuantifierContext _localctx = new SetQuantifierContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_setQuantifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			_la = _input.LA(1);
			if ( !(_la==ALL || _la==DISTINCT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationContext extends ParserRuleContext {
		public RelationPrimaryContext relationPrimary() {
			return getRuleContext(RelationPrimaryContext.class,0);
		}
		public RelationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relation; }
	}

	public final RelationContext relation() throws RecognitionException {
		RelationContext _localctx = new RelationContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_relation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(237);
			relationPrimary();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierListContext extends ParserRuleContext {
		public IdentifierSeqContext identifierSeq() {
			return getRuleContext(IdentifierSeqContext.class,0);
		}
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_identifierList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(239);
			match(T__2);
			setState(240);
			identifierSeq();
			setState(241);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierSeqContext extends ParserRuleContext {
		public ErrorCapturingIdentifierContext errorCapturingIdentifier;
		public List<ErrorCapturingIdentifierContext> ident = new ArrayList<ErrorCapturingIdentifierContext>();
		public List<ErrorCapturingIdentifierContext> errorCapturingIdentifier() {
			return getRuleContexts(ErrorCapturingIdentifierContext.class);
		}
		public ErrorCapturingIdentifierContext errorCapturingIdentifier(int i) {
			return getRuleContext(ErrorCapturingIdentifierContext.class,i);
		}
		public IdentifierSeqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierSeq; }
	}

	public final IdentifierSeqContext identifierSeq() throws RecognitionException {
		IdentifierSeqContext _localctx = new IdentifierSeqContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_identifierSeq);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(243);
			((IdentifierSeqContext)_localctx).errorCapturingIdentifier = errorCapturingIdentifier();
			((IdentifierSeqContext)_localctx).ident.add(((IdentifierSeqContext)_localctx).errorCapturingIdentifier);
			setState(248);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(244);
				match(T__1);
				setState(245);
				((IdentifierSeqContext)_localctx).errorCapturingIdentifier = errorCapturingIdentifier();
				((IdentifierSeqContext)_localctx).ident.add(((IdentifierSeqContext)_localctx).errorCapturingIdentifier);
				}
				}
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OrderedIdentifierListContext extends ParserRuleContext {
		public List<OrderedIdentifierContext> orderedIdentifier() {
			return getRuleContexts(OrderedIdentifierContext.class);
		}
		public OrderedIdentifierContext orderedIdentifier(int i) {
			return getRuleContext(OrderedIdentifierContext.class,i);
		}
		public OrderedIdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orderedIdentifierList; }
	}

	public final OrderedIdentifierListContext orderedIdentifierList() throws RecognitionException {
		OrderedIdentifierListContext _localctx = new OrderedIdentifierListContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_orderedIdentifierList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(251);
			match(T__2);
			setState(252);
			orderedIdentifier();
			setState(257);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(253);
				match(T__1);
				setState(254);
				orderedIdentifier();
				}
				}
				setState(259);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(260);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OrderedIdentifierContext extends ParserRuleContext {
		public ErrorCapturingIdentifierContext ident;
		public Token ordering;
		public ErrorCapturingIdentifierContext errorCapturingIdentifier() {
			return getRuleContext(ErrorCapturingIdentifierContext.class,0);
		}
		public TerminalNode ASC() { return getToken(sql_parserParser.ASC, 0); }
		public TerminalNode DESC() { return getToken(sql_parserParser.DESC, 0); }
		public OrderedIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_orderedIdentifier; }
	}

	public final OrderedIdentifierContext orderedIdentifier() throws RecognitionException {
		OrderedIdentifierContext _localctx = new OrderedIdentifierContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_orderedIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(262);
			((OrderedIdentifierContext)_localctx).ident = errorCapturingIdentifier();
			setState(264);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASC || _la==DESC) {
				{
				setState(263);
				((OrderedIdentifierContext)_localctx).ordering = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==ASC || _la==DESC) ) {
					((OrderedIdentifierContext)_localctx).ordering = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierCommentListContext extends ParserRuleContext {
		public List<IdentifierCommentContext> identifierComment() {
			return getRuleContexts(IdentifierCommentContext.class);
		}
		public IdentifierCommentContext identifierComment(int i) {
			return getRuleContext(IdentifierCommentContext.class,i);
		}
		public IdentifierCommentListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierCommentList; }
	}

	public final IdentifierCommentListContext identifierCommentList() throws RecognitionException {
		IdentifierCommentListContext _localctx = new IdentifierCommentListContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_identifierCommentList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(266);
			match(T__2);
			setState(267);
			identifierComment();
			setState(272);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(268);
				match(T__1);
				setState(269);
				identifierComment();
				}
				}
				setState(274);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(275);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierCommentContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public CommentSpecContext commentSpec() {
			return getRuleContext(CommentSpecContext.class,0);
		}
		public IdentifierCommentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierComment; }
	}

	public final IdentifierCommentContext identifierComment() throws RecognitionException {
		IdentifierCommentContext _localctx = new IdentifierCommentContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_identifierComment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			identifier();
			setState(279);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMENT) {
				{
				setState(278);
				commentSpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RelationPrimaryContext extends ParserRuleContext {
		public RelationPrimaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relationPrimary; }
	 
		public RelationPrimaryContext() { }
		public void copyFrom(RelationPrimaryContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AliasedRelationContext extends RelationPrimaryContext {
		public RelationContext relation() {
			return getRuleContext(RelationContext.class,0);
		}
		public TableAliasContext tableAlias() {
			return getRuleContext(TableAliasContext.class,0);
		}
		public AliasedRelationContext(RelationPrimaryContext ctx) { copyFrom(ctx); }
	}
	public static class AliasedQueryContext extends RelationPrimaryContext {
		public QueryContext query() {
			return getRuleContext(QueryContext.class,0);
		}
		public TableAliasContext tableAlias() {
			return getRuleContext(TableAliasContext.class,0);
		}
		public AliasedQueryContext(RelationPrimaryContext ctx) { copyFrom(ctx); }
	}
	public static class TableNameContext extends RelationPrimaryContext {
		public MultipartIdentifierContext multipartIdentifier() {
			return getRuleContext(MultipartIdentifierContext.class,0);
		}
		public TableAliasContext tableAlias() {
			return getRuleContext(TableAliasContext.class,0);
		}
		public TableNameContext(RelationPrimaryContext ctx) { copyFrom(ctx); }
	}

	public final RelationPrimaryContext relationPrimary() throws RecognitionException {
		RelationPrimaryContext _localctx = new RelationPrimaryContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_relationPrimary);
		try {
			setState(294);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				_localctx = new TableNameContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(281);
				multipartIdentifier();
				setState(282);
				tableAlias();
				}
				break;
			case 2:
				_localctx = new AliasedQueryContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(284);
				match(T__2);
				setState(285);
				query();
				setState(286);
				match(T__3);
				setState(287);
				tableAlias();
				}
				break;
			case 3:
				_localctx = new AliasedRelationContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(289);
				match(T__2);
				setState(290);
				relation();
				setState(291);
				match(T__3);
				setState(292);
				tableAlias();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TableAliasContext extends ParserRuleContext {
		public StrictIdentifierContext strictIdentifier() {
			return getRuleContext(StrictIdentifierContext.class,0);
		}
		public TerminalNode AS() { return getToken(sql_parserParser.AS, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TableAliasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableAlias; }
	}

	public final TableAliasContext tableAlias() throws RecognitionException {
		TableAliasContext _localctx = new TableAliasContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_tableAlias);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(303);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(297);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
				case 1:
					{
					setState(296);
					match(AS);
					}
					break;
				}
				setState(299);
				strictIdentifier();
				setState(301);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__2) {
					{
					setState(300);
					identifierList();
					}
				}

				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MultipartIdentifierListContext extends ParserRuleContext {
		public List<MultipartIdentifierContext> multipartIdentifier() {
			return getRuleContexts(MultipartIdentifierContext.class);
		}
		public MultipartIdentifierContext multipartIdentifier(int i) {
			return getRuleContext(MultipartIdentifierContext.class,i);
		}
		public MultipartIdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multipartIdentifierList; }
	}

	public final MultipartIdentifierListContext multipartIdentifierList() throws RecognitionException {
		MultipartIdentifierListContext _localctx = new MultipartIdentifierListContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_multipartIdentifierList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(305);
			multipartIdentifier();
			setState(310);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(306);
				match(T__1);
				setState(307);
				multipartIdentifier();
				}
				}
				setState(312);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MultipartIdentifierContext extends ParserRuleContext {
		public ErrorCapturingIdentifierContext errorCapturingIdentifier;
		public List<ErrorCapturingIdentifierContext> parts = new ArrayList<ErrorCapturingIdentifierContext>();
		public List<ErrorCapturingIdentifierContext> errorCapturingIdentifier() {
			return getRuleContexts(ErrorCapturingIdentifierContext.class);
		}
		public ErrorCapturingIdentifierContext errorCapturingIdentifier(int i) {
			return getRuleContext(ErrorCapturingIdentifierContext.class,i);
		}
		public MultipartIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multipartIdentifier; }
	}

	public final MultipartIdentifierContext multipartIdentifier() throws RecognitionException {
		MultipartIdentifierContext _localctx = new MultipartIdentifierContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_multipartIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(313);
			((MultipartIdentifierContext)_localctx).errorCapturingIdentifier = errorCapturingIdentifier();
			((MultipartIdentifierContext)_localctx).parts.add(((MultipartIdentifierContext)_localctx).errorCapturingIdentifier);
			setState(318);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(314);
				match(T__4);
				setState(315);
				((MultipartIdentifierContext)_localctx).errorCapturingIdentifier = errorCapturingIdentifier();
				((MultipartIdentifierContext)_localctx).parts.add(((MultipartIdentifierContext)_localctx).errorCapturingIdentifier);
				}
				}
				setState(320);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamedExpressionContext extends ParserRuleContext {
		public ErrorCapturingIdentifierContext name;
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode AS() { return getToken(sql_parserParser.AS, 0); }
		public ErrorCapturingIdentifierContext errorCapturingIdentifier() {
			return getRuleContext(ErrorCapturingIdentifierContext.class,0);
		}
		public NamedExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedExpression; }
	}

	public final NamedExpressionContext namedExpression() throws RecognitionException {
		NamedExpressionContext _localctx = new NamedExpressionContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_namedExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(321);
			expression();
			setState(329);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				{
				setState(323);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(322);
					match(AS);
					}
					break;
				}
				setState(327);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case ADD:
				case AFTER:
				case ALL:
				case ALTER:
				case ANALYZE:
				case AND:
				case ANTI:
				case ANY:
				case ARCHIVE:
				case ARRAY:
				case AS:
				case ASC:
				case AT:
				case AUTHORIZATION:
				case BETWEEN:
				case BOTH:
				case BUCKET:
				case BUCKETS:
				case BY:
				case CACHE:
				case CASCADE:
				case CASE:
				case CAST:
				case CHANGE:
				case CHECK:
				case CLEAR:
				case CLUSTER:
				case CLUSTERED:
				case CODEGEN:
				case COLLATE:
				case COLLECTION:
				case COLUMN:
				case COLUMNS:
				case COMMENT:
				case COMMIT:
				case COMPACT:
				case COMPACTIONS:
				case COMPUTE:
				case CONCATENATE:
				case CONSTRAINT:
				case COST:
				case CREATE:
				case CROSS:
				case CUBE:
				case CURRENT:
				case CURRENT_DATE:
				case CURRENT_TIME:
				case CURRENT_TIMESTAMP:
				case CURRENT_USER:
				case DATA:
				case DATABASE:
				case DATABASES:
				case DBPROPERTIES:
				case DEFINED:
				case DELETE:
				case DELIMITED:
				case DESC:
				case DESCRIBE:
				case DFS:
				case DIRECTORIES:
				case DIRECTORY:
				case DISTINCT:
				case DISTRIBUTE:
				case DIV:
				case DROP:
				case ELSE:
				case END:
				case ESCAPE:
				case ESCAPED:
				case EXCEPT:
				case EXCHANGE:
				case EXISTS:
				case EXPLAIN:
				case EXPORT:
				case EXTENDED:
				case EXTERNAL:
				case EXTRACT:
				case FALSE:
				case FETCH:
				case FIELDS:
				case FILTER:
				case FILEFORMAT:
				case FIRST:
				case FOLLOWING:
				case FOR:
				case FOREIGN:
				case FORMAT:
				case FORMATTED:
				case FROM:
				case FULL:
				case FUNCTION:
				case FUNCTIONS:
				case GLOBAL:
				case GRANT:
				case GROUP:
				case GROUPING:
				case HAVING:
				case IF:
				case IGNORE:
				case IMPORT:
				case IN:
				case INDEX:
				case INDEXES:
				case INNER:
				case INPATH:
				case INPUTFORMAT:
				case INSERT:
				case INTERSECT:
				case INTERVAL:
				case INTO:
				case IS:
				case ITEMS:
				case JOIN:
				case KEYS:
				case LAST:
				case LATERAL:
				case LAZY:
				case LEADING:
				case LEFT:
				case LIKE:
				case LIMIT:
				case LINES:
				case LIST:
				case LOAD:
				case LOCAL:
				case LOCATION:
				case LOCK:
				case LOCKS:
				case LOGICAL:
				case MACRO:
				case MAP:
				case MATCHED:
				case MERGE:
				case MSCK:
				case NAMESPACE:
				case NAMESPACES:
				case NATURAL:
				case NO:
				case NOT:
				case NULL:
				case NULLS:
				case OF:
				case ON:
				case ONLY:
				case OPTION:
				case OPTIONS:
				case OR:
				case ORDER:
				case OUT:
				case OUTER:
				case OUTPUTFORMAT:
				case OVER:
				case OVERLAPS:
				case OVERLAY:
				case OVERWRITE:
				case PARTITION:
				case PARTITIONED:
				case PARTITIONS:
				case PERCENTLIT:
				case PIVOT:
				case PLACING:
				case POSITION:
				case PRECEDING:
				case PRIMARY:
				case PRINCIPALS:
				case PROPERTIES:
				case PURGE:
				case QUERY:
				case RANGE:
				case RECORDREADER:
				case RECORDWRITER:
				case RECOVER:
				case REDUCE:
				case REFERENCES:
				case REFRESH:
				case RENAME:
				case REPAIR:
				case REPLACE:
				case RESET:
				case RESTRICT:
				case REVOKE:
				case RIGHT:
				case RLIKE:
				case ROLE:
				case ROLES:
				case ROLLBACK:
				case ROLLUP:
				case ROW:
				case ROWS:
				case SCHEMA:
				case SELECT:
				case SEMI:
				case SEPARATED:
				case SERDE:
				case SERDEPROPERTIES:
				case SESSION_USER:
				case SET:
				case SETMINUS:
				case SETS:
				case SHOW:
				case SKEWED:
				case SOME:
				case SORT:
				case SORTED:
				case START:
				case STATISTICS:
				case STORED:
				case STRATIFY:
				case STRUCT:
				case SUBSTR:
				case SUBSTRING:
				case TABLE:
				case TABLES:
				case TABLESAMPLE:
				case TBLPROPERTIES:
				case TEMPORARY:
				case TERMINATED:
				case THEN:
				case TO:
				case TOUCH:
				case TRAILING:
				case TRANSACTION:
				case TRANSACTIONS:
				case TRANSFORM:
				case TRIM:
				case TRUE:
				case TRUNCATE:
				case TYPE:
				case UNARCHIVE:
				case UNBOUNDED:
				case UNCACHE:
				case UNION:
				case UNIQUE:
				case UNKNOWN:
				case UNLOCK:
				case UNSET:
				case UPDATE:
				case USE:
				case USER:
				case USING:
				case VALUES:
				case VIEW:
				case VIEWS:
				case WHEN:
				case WHERE:
				case WINDOW:
				case WITH:
				case IDENTIFIER:
				case BACKQUOTED_IDENTIFIER:
					{
					setState(325);
					((NamedExpressionContext)_localctx).name = errorCapturingIdentifier();
					}
					break;
				case T__2:
					{
					setState(326);
					identifierList();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamedExpressionSeqContext extends ParserRuleContext {
		public List<NamedExpressionContext> namedExpression() {
			return getRuleContexts(NamedExpressionContext.class);
		}
		public NamedExpressionContext namedExpression(int i) {
			return getRuleContext(NamedExpressionContext.class,i);
		}
		public NamedExpressionSeqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedExpressionSeq; }
	}

	public final NamedExpressionSeqContext namedExpressionSeq() throws RecognitionException {
		NamedExpressionSeqContext _localctx = new NamedExpressionSeqContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_namedExpressionSeq);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(331);
			namedExpression();
			setState(336);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(332);
				match(T__1);
				setState(333);
				namedExpression();
				}
				}
				setState(338);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public BooleanExpressionContext booleanExpression() {
			return getRuleContext(BooleanExpressionContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(339);
			booleanExpression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanExpressionContext extends ParserRuleContext {
		public BooleanExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanExpression; }
	 
		public BooleanExpressionContext() { }
		public void copyFrom(BooleanExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class LogicalNotContext extends BooleanExpressionContext {
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public BooleanExpressionContext booleanExpression() {
			return getRuleContext(BooleanExpressionContext.class,0);
		}
		public LogicalNotContext(BooleanExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class PredicatedContext extends BooleanExpressionContext {
		public ValueExpressionContext valueExpression() {
			return getRuleContext(ValueExpressionContext.class,0);
		}
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public PredicatedContext(BooleanExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalBinaryContext extends BooleanExpressionContext {
		public BooleanExpressionContext left;
		public Token operator;
		public BooleanExpressionContext right;
		public List<BooleanExpressionContext> booleanExpression() {
			return getRuleContexts(BooleanExpressionContext.class);
		}
		public BooleanExpressionContext booleanExpression(int i) {
			return getRuleContext(BooleanExpressionContext.class,i);
		}
		public TerminalNode AND() { return getToken(sql_parserParser.AND, 0); }
		public TerminalNode OR() { return getToken(sql_parserParser.OR, 0); }
		public LogicalBinaryContext(BooleanExpressionContext ctx) { copyFrom(ctx); }
	}

	public final BooleanExpressionContext booleanExpression() throws RecognitionException {
		return booleanExpression(0);
	}

	private BooleanExpressionContext booleanExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BooleanExpressionContext _localctx = new BooleanExpressionContext(_ctx, _parentState);
		BooleanExpressionContext _prevctx = _localctx;
		int _startState = 56;
		enterRecursionRule(_localctx, 56, RULE_booleanExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(348);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				{
				_localctx = new LogicalNotContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(342);
				match(NOT);
				setState(343);
				booleanExpression(4);
				}
				break;
			case 2:
				{
				_localctx = new PredicatedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(344);
				valueExpression(0);
				setState(346);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
				case 1:
					{
					setState(345);
					predicate();
					}
					break;
				}
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(358);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(356);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
					case 1:
						{
						_localctx = new LogicalBinaryContext(new BooleanExpressionContext(_parentctx, _parentState));
						((LogicalBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_booleanExpression);
						setState(350);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(351);
						((LogicalBinaryContext)_localctx).operator = match(AND);
						setState(352);
						((LogicalBinaryContext)_localctx).right = booleanExpression(3);
						}
						break;
					case 2:
						{
						_localctx = new LogicalBinaryContext(new BooleanExpressionContext(_parentctx, _parentState));
						((LogicalBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_booleanExpression);
						setState(353);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(354);
						((LogicalBinaryContext)_localctx).operator = match(OR);
						setState(355);
						((LogicalBinaryContext)_localctx).right = booleanExpression(2);
						}
						break;
					}
					} 
				}
				setState(360);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class PredicateContext extends ParserRuleContext {
		public Token kind;
		public ValueExpressionContext lower;
		public ValueExpressionContext upper;
		public ValueExpressionContext pattern;
		public Token escapeChar;
		public ValueExpressionContext right;
		public TerminalNode AND() { return getToken(sql_parserParser.AND, 0); }
		public TerminalNode BETWEEN() { return getToken(sql_parserParser.BETWEEN, 0); }
		public List<ValueExpressionContext> valueExpression() {
			return getRuleContexts(ValueExpressionContext.class);
		}
		public ValueExpressionContext valueExpression(int i) {
			return getRuleContext(ValueExpressionContext.class,i);
		}
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode IN() { return getToken(sql_parserParser.IN, 0); }
		public QueryContext query() {
			return getRuleContext(QueryContext.class,0);
		}
		public TerminalNode RLIKE() { return getToken(sql_parserParser.RLIKE, 0); }
		public TerminalNode LIKE() { return getToken(sql_parserParser.LIKE, 0); }
		public TerminalNode ESCAPE() { return getToken(sql_parserParser.ESCAPE, 0); }
		public TerminalNode STRING() { return getToken(sql_parserParser.STRING, 0); }
		public TerminalNode IS() { return getToken(sql_parserParser.IS, 0); }
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public TerminalNode TRUE() { return getToken(sql_parserParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(sql_parserParser.FALSE, 0); }
		public TerminalNode UNKNOWN() { return getToken(sql_parserParser.UNKNOWN, 0); }
		public TerminalNode FROM() { return getToken(sql_parserParser.FROM, 0); }
		public TerminalNode DISTINCT() { return getToken(sql_parserParser.DISTINCT, 0); }
		public PredicateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_predicate; }
	}

	public final PredicateContext predicate() throws RecognitionException {
		PredicateContext _localctx = new PredicateContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_predicate);
		int _la;
		try {
			setState(423);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(362);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(361);
					match(NOT);
					}
				}

				setState(364);
				((PredicateContext)_localctx).kind = match(BETWEEN);
				setState(365);
				((PredicateContext)_localctx).lower = valueExpression(0);
				setState(366);
				match(AND);
				setState(367);
				((PredicateContext)_localctx).upper = valueExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(370);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(369);
					match(NOT);
					}
				}

				setState(372);
				((PredicateContext)_localctx).kind = match(IN);
				setState(373);
				match(T__2);
				setState(374);
				expression();
				setState(379);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(375);
					match(T__1);
					setState(376);
					expression();
					}
					}
					setState(381);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(382);
				match(T__3);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(385);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(384);
					match(NOT);
					}
				}

				setState(387);
				((PredicateContext)_localctx).kind = match(IN);
				setState(388);
				match(T__2);
				setState(389);
				query();
				setState(390);
				match(T__3);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(393);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(392);
					match(NOT);
					}
				}

				setState(395);
				((PredicateContext)_localctx).kind = match(RLIKE);
				setState(396);
				((PredicateContext)_localctx).pattern = valueExpression(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(398);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(397);
					match(NOT);
					}
				}

				setState(400);
				((PredicateContext)_localctx).kind = match(LIKE);
				setState(401);
				((PredicateContext)_localctx).pattern = valueExpression(0);
				setState(404);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
				case 1:
					{
					setState(402);
					match(ESCAPE);
					setState(403);
					((PredicateContext)_localctx).escapeChar = match(STRING);
					}
					break;
				}
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(406);
				match(IS);
				setState(408);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(407);
					match(NOT);
					}
				}

				setState(410);
				((PredicateContext)_localctx).kind = match(NULL);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(411);
				match(IS);
				setState(413);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(412);
					match(NOT);
					}
				}

				setState(415);
				((PredicateContext)_localctx).kind = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==FALSE || _la==TRUE || _la==UNKNOWN) ) {
					((PredicateContext)_localctx).kind = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(416);
				match(IS);
				setState(418);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NOT) {
					{
					setState(417);
					match(NOT);
					}
				}

				setState(420);
				((PredicateContext)_localctx).kind = match(DISTINCT);
				setState(421);
				match(FROM);
				setState(422);
				((PredicateContext)_localctx).right = valueExpression(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ValueExpressionContext extends ParserRuleContext {
		public ValueExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueExpression; }
	 
		public ValueExpressionContext() { }
		public void copyFrom(ValueExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ValueExpressionDefaultContext extends ValueExpressionContext {
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public ValueExpressionDefaultContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ComparisonContext extends ValueExpressionContext {
		public ValueExpressionContext left;
		public ValueExpressionContext right;
		public ComparisonOperatorContext comparisonOperator() {
			return getRuleContext(ComparisonOperatorContext.class,0);
		}
		public List<ValueExpressionContext> valueExpression() {
			return getRuleContexts(ValueExpressionContext.class);
		}
		public ValueExpressionContext valueExpression(int i) {
			return getRuleContext(ValueExpressionContext.class,i);
		}
		public ComparisonContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticBinaryContext extends ValueExpressionContext {
		public ValueExpressionContext left;
		public Token operator;
		public ValueExpressionContext right;
		public List<ValueExpressionContext> valueExpression() {
			return getRuleContexts(ValueExpressionContext.class);
		}
		public ValueExpressionContext valueExpression(int i) {
			return getRuleContext(ValueExpressionContext.class,i);
		}
		public TerminalNode ASTERISK() { return getToken(sql_parserParser.ASTERISK, 0); }
		public TerminalNode SLASH() { return getToken(sql_parserParser.SLASH, 0); }
		public TerminalNode PERCENT() { return getToken(sql_parserParser.PERCENT, 0); }
		public TerminalNode DIV() { return getToken(sql_parserParser.DIV, 0); }
		public TerminalNode PLUS() { return getToken(sql_parserParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public TerminalNode CONCAT_PIPE() { return getToken(sql_parserParser.CONCAT_PIPE, 0); }
		public TerminalNode AMPERSAND() { return getToken(sql_parserParser.AMPERSAND, 0); }
		public TerminalNode HAT() { return getToken(sql_parserParser.HAT, 0); }
		public TerminalNode PIPE() { return getToken(sql_parserParser.PIPE, 0); }
		public ArithmeticBinaryContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticUnaryContext extends ValueExpressionContext {
		public Token operator;
		public ValueExpressionContext valueExpression() {
			return getRuleContext(ValueExpressionContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public TerminalNode PLUS() { return getToken(sql_parserParser.PLUS, 0); }
		public TerminalNode TILDE() { return getToken(sql_parserParser.TILDE, 0); }
		public ArithmeticUnaryContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ValueExpressionContext valueExpression() throws RecognitionException {
		return valueExpression(0);
	}

	private ValueExpressionContext valueExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ValueExpressionContext _localctx = new ValueExpressionContext(_ctx, _parentState);
		ValueExpressionContext _prevctx = _localctx;
		int _startState = 60;
		enterRecursionRule(_localctx, 60, RULE_valueExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(429);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				{
				_localctx = new ValueExpressionDefaultContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(426);
				primaryExpression(0);
				}
				break;
			case 2:
				{
				_localctx = new ArithmeticUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(427);
				((ArithmeticUnaryContext)_localctx).operator = _input.LT(1);
				_la = _input.LA(1);
				if ( !(((((_la - 264)) & ~0x3f) == 0 && ((1L << (_la - 264)) & ((1L << (PLUS - 264)) | (1L << (MINUS - 264)) | (1L << (TILDE - 264)))) != 0)) ) {
					((ArithmeticUnaryContext)_localctx).operator = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(428);
				valueExpression(7);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(452);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(450);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(431);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(432);
						((ArithmeticBinaryContext)_localctx).operator = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==DIV || ((((_la - 266)) & ~0x3f) == 0 && ((1L << (_la - 266)) & ((1L << (ASTERISK - 266)) | (1L << (SLASH - 266)) | (1L << (PERCENT - 266)))) != 0)) ) {
							((ArithmeticBinaryContext)_localctx).operator = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(433);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(7);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(434);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(435);
						((ArithmeticBinaryContext)_localctx).operator = _input.LT(1);
						_la = _input.LA(1);
						if ( !(((((_la - 264)) & ~0x3f) == 0 && ((1L << (_la - 264)) & ((1L << (PLUS - 264)) | (1L << (MINUS - 264)) | (1L << (CONCAT_PIPE - 264)))) != 0)) ) {
							((ArithmeticBinaryContext)_localctx).operator = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(436);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(6);
						}
						break;
					case 3:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(437);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(438);
						((ArithmeticBinaryContext)_localctx).operator = match(AMPERSAND);
						setState(439);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(5);
						}
						break;
					case 4:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(440);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(441);
						((ArithmeticBinaryContext)_localctx).operator = match(HAT);
						setState(442);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(4);
						}
						break;
					case 5:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(443);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(444);
						((ArithmeticBinaryContext)_localctx).operator = match(PIPE);
						setState(445);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(3);
						}
						break;
					case 6:
						{
						_localctx = new ComparisonContext(new ValueExpressionContext(_parentctx, _parentState));
						((ComparisonContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(446);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(447);
						comparisonOperator();
						setState(448);
						((ComparisonContext)_localctx).right = valueExpression(2);
						}
						break;
					}
					} 
				}
				setState(454);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class PrimaryExpressionContext extends ParserRuleContext {
		public PrimaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryExpression; }
	 
		public PrimaryExpressionContext() { }
		public void copyFrom(PrimaryExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StructContext extends PrimaryExpressionContext {
		public NamedExpressionContext namedExpression;
		public List<NamedExpressionContext> argument = new ArrayList<NamedExpressionContext>();
		public TerminalNode STRUCT() { return getToken(sql_parserParser.STRUCT, 0); }
		public List<NamedExpressionContext> namedExpression() {
			return getRuleContexts(NamedExpressionContext.class);
		}
		public NamedExpressionContext namedExpression(int i) {
			return getRuleContext(NamedExpressionContext.class,i);
		}
		public StructContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class DereferenceContext extends PrimaryExpressionContext {
		public PrimaryExpressionContext base;
		public IdentifierContext fieldName;
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public DereferenceContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class SimpleCaseContext extends PrimaryExpressionContext {
		public ExpressionContext value;
		public ExpressionContext elseExpression;
		public TerminalNode CASE() { return getToken(sql_parserParser.CASE, 0); }
		public TerminalNode END() { return getToken(sql_parserParser.END, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<WhenClauseContext> whenClause() {
			return getRuleContexts(WhenClauseContext.class);
		}
		public WhenClauseContext whenClause(int i) {
			return getRuleContext(WhenClauseContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(sql_parserParser.ELSE, 0); }
		public SimpleCaseContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ColumnReferenceContext extends PrimaryExpressionContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ColumnReferenceContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class RowConstructorContext extends PrimaryExpressionContext {
		public List<NamedExpressionContext> namedExpression() {
			return getRuleContexts(NamedExpressionContext.class);
		}
		public NamedExpressionContext namedExpression(int i) {
			return getRuleContext(NamedExpressionContext.class,i);
		}
		public RowConstructorContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class LastContext extends PrimaryExpressionContext {
		public TerminalNode LAST() { return getToken(sql_parserParser.LAST, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode IGNORE() { return getToken(sql_parserParser.IGNORE, 0); }
		public TerminalNode NULLS() { return getToken(sql_parserParser.NULLS, 0); }
		public LastContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class StarContext extends PrimaryExpressionContext {
		public TerminalNode ASTERISK() { return getToken(sql_parserParser.ASTERISK, 0); }
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public StarContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class SubscriptContext extends PrimaryExpressionContext {
		public PrimaryExpressionContext value;
		public ValueExpressionContext index;
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public ValueExpressionContext valueExpression() {
			return getRuleContext(ValueExpressionContext.class,0);
		}
		public SubscriptContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class SubqueryExpressionContext extends PrimaryExpressionContext {
		public QueryContext query() {
			return getRuleContext(QueryContext.class,0);
		}
		public SubqueryExpressionContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class CurrentDatetimeContext extends PrimaryExpressionContext {
		public Token name;
		public TerminalNode CURRENT_DATE() { return getToken(sql_parserParser.CURRENT_DATE, 0); }
		public TerminalNode CURRENT_TIMESTAMP() { return getToken(sql_parserParser.CURRENT_TIMESTAMP, 0); }
		public CurrentDatetimeContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class CastContext extends PrimaryExpressionContext {
		public TerminalNode CAST() { return getToken(sql_parserParser.CAST, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode AS() { return getToken(sql_parserParser.AS, 0); }
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public CastContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ConstantDefaultContext extends PrimaryExpressionContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public ConstantDefaultContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ParenthesizedExpressionContext extends PrimaryExpressionContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParenthesizedExpressionContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class FunctionCallContext extends PrimaryExpressionContext {
		public ExpressionContext expression;
		public List<ExpressionContext> argument = new ArrayList<ExpressionContext>();
		public FunctionNameContext functionName() {
			return getRuleContext(FunctionNameContext.class,0);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public FunctionCallContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class SearchedCaseContext extends PrimaryExpressionContext {
		public ExpressionContext elseExpression;
		public TerminalNode CASE() { return getToken(sql_parserParser.CASE, 0); }
		public TerminalNode END() { return getToken(sql_parserParser.END, 0); }
		public List<WhenClauseContext> whenClause() {
			return getRuleContexts(WhenClauseContext.class);
		}
		public WhenClauseContext whenClause(int i) {
			return getRuleContext(WhenClauseContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(sql_parserParser.ELSE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public SearchedCaseContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class PositionContext extends PrimaryExpressionContext {
		public ValueExpressionContext substr;
		public ValueExpressionContext str;
		public TerminalNode POSITION() { return getToken(sql_parserParser.POSITION, 0); }
		public TerminalNode IN() { return getToken(sql_parserParser.IN, 0); }
		public List<ValueExpressionContext> valueExpression() {
			return getRuleContexts(ValueExpressionContext.class);
		}
		public ValueExpressionContext valueExpression(int i) {
			return getRuleContext(ValueExpressionContext.class,i);
		}
		public PositionContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class FirstContext extends PrimaryExpressionContext {
		public TerminalNode FIRST() { return getToken(sql_parserParser.FIRST, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode IGNORE() { return getToken(sql_parserParser.IGNORE, 0); }
		public TerminalNode NULLS() { return getToken(sql_parserParser.NULLS, 0); }
		public FirstContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}

	public final PrimaryExpressionContext primaryExpression() throws RecognitionException {
		return primaryExpression(0);
	}

	private PrimaryExpressionContext primaryExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PrimaryExpressionContext _localctx = new PrimaryExpressionContext(_ctx, _parentState);
		PrimaryExpressionContext _prevctx = _localctx;
		int _startState = 62;
		enterRecursionRule(_localctx, 62, RULE_primaryExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(566);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				{
				_localctx = new CurrentDatetimeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(456);
				((CurrentDatetimeContext)_localctx).name = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==CURRENT_DATE || _la==CURRENT_TIMESTAMP) ) {
					((CurrentDatetimeContext)_localctx).name = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 2:
				{
				_localctx = new SearchedCaseContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(457);
				match(CASE);
				setState(459); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(458);
					whenClause();
					}
					}
					setState(461); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==WHEN );
				setState(465);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(463);
					match(ELSE);
					setState(464);
					((SearchedCaseContext)_localctx).elseExpression = expression();
					}
				}

				setState(467);
				match(END);
				}
				break;
			case 3:
				{
				_localctx = new SimpleCaseContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(469);
				match(CASE);
				setState(470);
				((SimpleCaseContext)_localctx).value = expression();
				setState(472); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(471);
					whenClause();
					}
					}
					setState(474); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==WHEN );
				setState(478);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(476);
					match(ELSE);
					setState(477);
					((SimpleCaseContext)_localctx).elseExpression = expression();
					}
				}

				setState(480);
				match(END);
				}
				break;
			case 4:
				{
				_localctx = new CastContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(482);
				match(CAST);
				setState(483);
				match(T__2);
				setState(484);
				expression();
				setState(485);
				match(AS);
				setState(486);
				dataType();
				setState(487);
				match(T__3);
				}
				break;
			case 5:
				{
				_localctx = new StructContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(489);
				match(STRUCT);
				setState(490);
				match(T__2);
				setState(499);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << ADD) | (1L << AFTER) | (1L << ALL) | (1L << ALTER) | (1L << ANALYZE) | (1L << AND) | (1L << ANTI) | (1L << ANY) | (1L << ARCHIVE) | (1L << ARRAY) | (1L << AS) | (1L << ASC) | (1L << AT) | (1L << AUTHORIZATION) | (1L << BETWEEN) | (1L << BOTH) | (1L << BUCKET) | (1L << BUCKETS) | (1L << BY) | (1L << CACHE) | (1L << CASCADE) | (1L << CASE) | (1L << CAST) | (1L << CHANGE) | (1L << CHECK) | (1L << CLEAR) | (1L << CLUSTER) | (1L << CLUSTERED) | (1L << CODEGEN) | (1L << COLLATE) | (1L << COLLECTION) | (1L << COLUMN) | (1L << COLUMNS) | (1L << COMMENT) | (1L << COMMIT) | (1L << COMPACT) | (1L << COMPACTIONS) | (1L << COMPUTE) | (1L << CONCATENATE) | (1L << CONSTRAINT) | (1L << COST) | (1L << CREATE) | (1L << CROSS) | (1L << CUBE) | (1L << CURRENT) | (1L << CURRENT_DATE) | (1L << CURRENT_TIME) | (1L << CURRENT_TIMESTAMP) | (1L << CURRENT_USER) | (1L << DATA) | (1L << DATABASE) | (1L << DATABASES) | (1L << DBPROPERTIES) | (1L << DEFINED) | (1L << DELETE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (DELIMITED - 64)) | (1L << (DESC - 64)) | (1L << (DESCRIBE - 64)) | (1L << (DFS - 64)) | (1L << (DIRECTORIES - 64)) | (1L << (DIRECTORY - 64)) | (1L << (DISTINCT - 64)) | (1L << (DISTRIBUTE - 64)) | (1L << (DIV - 64)) | (1L << (DROP - 64)) | (1L << (ELSE - 64)) | (1L << (END - 64)) | (1L << (ESCAPE - 64)) | (1L << (ESCAPED - 64)) | (1L << (EXCEPT - 64)) | (1L << (EXCHANGE - 64)) | (1L << (EXISTS - 64)) | (1L << (EXPLAIN - 64)) | (1L << (EXPORT - 64)) | (1L << (EXTENDED - 64)) | (1L << (EXTERNAL - 64)) | (1L << (EXTRACT - 64)) | (1L << (FALSE - 64)) | (1L << (FETCH - 64)) | (1L << (FIELDS - 64)) | (1L << (FILTER - 64)) | (1L << (FILEFORMAT - 64)) | (1L << (FIRST - 64)) | (1L << (FOLLOWING - 64)) | (1L << (FOR - 64)) | (1L << (FOREIGN - 64)) | (1L << (FORMAT - 64)) | (1L << (FORMATTED - 64)) | (1L << (FROM - 64)) | (1L << (FULL - 64)) | (1L << (FUNCTION - 64)) | (1L << (FUNCTIONS - 64)) | (1L << (GLOBAL - 64)) | (1L << (GRANT - 64)) | (1L << (GROUP - 64)) | (1L << (GROUPING - 64)) | (1L << (HAVING - 64)) | (1L << (IF - 64)) | (1L << (IGNORE - 64)) | (1L << (IMPORT - 64)) | (1L << (IN - 64)) | (1L << (INDEX - 64)) | (1L << (INDEXES - 64)) | (1L << (INNER - 64)) | (1L << (INPATH - 64)) | (1L << (INPUTFORMAT - 64)) | (1L << (INSERT - 64)) | (1L << (INTERSECT - 64)) | (1L << (INTERVAL - 64)) | (1L << (INTO - 64)) | (1L << (IS - 64)) | (1L << (ITEMS - 64)) | (1L << (JOIN - 64)) | (1L << (KEYS - 64)) | (1L << (LAST - 64)) | (1L << (LATERAL - 64)) | (1L << (LAZY - 64)) | (1L << (LEADING - 64)) | (1L << (LEFT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LIKE - 128)) | (1L << (LIMIT - 128)) | (1L << (LINES - 128)) | (1L << (LIST - 128)) | (1L << (LOAD - 128)) | (1L << (LOCAL - 128)) | (1L << (LOCATION - 128)) | (1L << (LOCK - 128)) | (1L << (LOCKS - 128)) | (1L << (LOGICAL - 128)) | (1L << (MACRO - 128)) | (1L << (MAP - 128)) | (1L << (MATCHED - 128)) | (1L << (MERGE - 128)) | (1L << (MSCK - 128)) | (1L << (NAMESPACE - 128)) | (1L << (NAMESPACES - 128)) | (1L << (NATURAL - 128)) | (1L << (NO - 128)) | (1L << (NOT - 128)) | (1L << (NULL - 128)) | (1L << (NULLS - 128)) | (1L << (OF - 128)) | (1L << (ON - 128)) | (1L << (ONLY - 128)) | (1L << (OPTION - 128)) | (1L << (OPTIONS - 128)) | (1L << (OR - 128)) | (1L << (ORDER - 128)) | (1L << (OUT - 128)) | (1L << (OUTER - 128)) | (1L << (OUTPUTFORMAT - 128)) | (1L << (OVER - 128)) | (1L << (OVERLAPS - 128)) | (1L << (OVERLAY - 128)) | (1L << (OVERWRITE - 128)) | (1L << (PARTITION - 128)) | (1L << (PARTITIONED - 128)) | (1L << (PARTITIONS - 128)) | (1L << (PERCENTLIT - 128)) | (1L << (PIVOT - 128)) | (1L << (PLACING - 128)) | (1L << (POSITION - 128)) | (1L << (PRECEDING - 128)) | (1L << (PRIMARY - 128)) | (1L << (PRINCIPALS - 128)) | (1L << (PROPERTIES - 128)) | (1L << (PURGE - 128)) | (1L << (QUERY - 128)) | (1L << (RANGE - 128)) | (1L << (RECORDREADER - 128)) | (1L << (RECORDWRITER - 128)) | (1L << (RECOVER - 128)) | (1L << (REDUCE - 128)) | (1L << (REFERENCES - 128)) | (1L << (REFRESH - 128)) | (1L << (RENAME - 128)) | (1L << (REPAIR - 128)) | (1L << (REPLACE - 128)) | (1L << (RESET - 128)) | (1L << (RESTRICT - 128)) | (1L << (REVOKE - 128)) | (1L << (RIGHT - 128)) | (1L << (RLIKE - 128)))) != 0) || ((((_la - 192)) & ~0x3f) == 0 && ((1L << (_la - 192)) & ((1L << (ROLE - 192)) | (1L << (ROLES - 192)) | (1L << (ROLLBACK - 192)) | (1L << (ROLLUP - 192)) | (1L << (ROW - 192)) | (1L << (ROWS - 192)) | (1L << (SCHEMA - 192)) | (1L << (SELECT - 192)) | (1L << (SEMI - 192)) | (1L << (SEPARATED - 192)) | (1L << (SERDE - 192)) | (1L << (SERDEPROPERTIES - 192)) | (1L << (SESSION_USER - 192)) | (1L << (SET - 192)) | (1L << (SETMINUS - 192)) | (1L << (SETS - 192)) | (1L << (SHOW - 192)) | (1L << (SKEWED - 192)) | (1L << (SOME - 192)) | (1L << (SORT - 192)) | (1L << (SORTED - 192)) | (1L << (START - 192)) | (1L << (STATISTICS - 192)) | (1L << (STORED - 192)) | (1L << (STRATIFY - 192)) | (1L << (STRUCT - 192)) | (1L << (SUBSTR - 192)) | (1L << (SUBSTRING - 192)) | (1L << (TABLE - 192)) | (1L << (TABLES - 192)) | (1L << (TABLESAMPLE - 192)) | (1L << (TBLPROPERTIES - 192)) | (1L << (TEMPORARY - 192)) | (1L << (TERMINATED - 192)) | (1L << (THEN - 192)) | (1L << (TO - 192)) | (1L << (TOUCH - 192)) | (1L << (TRAILING - 192)) | (1L << (TRANSACTION - 192)) | (1L << (TRANSACTIONS - 192)) | (1L << (TRANSFORM - 192)) | (1L << (TRIM - 192)) | (1L << (TRUE - 192)) | (1L << (TRUNCATE - 192)) | (1L << (TYPE - 192)) | (1L << (UNARCHIVE - 192)) | (1L << (UNBOUNDED - 192)) | (1L << (UNCACHE - 192)) | (1L << (UNION - 192)) | (1L << (UNIQUE - 192)) | (1L << (UNKNOWN - 192)) | (1L << (UNLOCK - 192)) | (1L << (UNSET - 192)) | (1L << (UPDATE - 192)) | (1L << (USE - 192)) | (1L << (USER - 192)) | (1L << (USING - 192)) | (1L << (VALUES - 192)) | (1L << (VIEW - 192)) | (1L << (VIEWS - 192)) | (1L << (WHEN - 192)) | (1L << (WHERE - 192)) | (1L << (WINDOW - 192)) | (1L << (WITH - 192)))) != 0) || ((((_la - 264)) & ~0x3f) == 0 && ((1L << (_la - 264)) & ((1L << (PLUS - 264)) | (1L << (MINUS - 264)) | (1L << (ASTERISK - 264)) | (1L << (TILDE - 264)) | (1L << (STRING - 264)) | (1L << (BIGINT_LITERAL - 264)) | (1L << (SMALLINT_LITERAL - 264)) | (1L << (TINYINT_LITERAL - 264)) | (1L << (INTEGER_VALUE - 264)) | (1L << (EXPONENT_VALUE - 264)) | (1L << (DECIMAL_VALUE - 264)) | (1L << (DOUBLE_LITERAL - 264)) | (1L << (BIGDECIMAL_LITERAL - 264)) | (1L << (IDENTIFIER - 264)) | (1L << (BACKQUOTED_IDENTIFIER - 264)))) != 0)) {
					{
					setState(491);
					((StructContext)_localctx).namedExpression = namedExpression();
					((StructContext)_localctx).argument.add(((StructContext)_localctx).namedExpression);
					setState(496);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(492);
						match(T__1);
						setState(493);
						((StructContext)_localctx).namedExpression = namedExpression();
						((StructContext)_localctx).argument.add(((StructContext)_localctx).namedExpression);
						}
						}
						setState(498);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(501);
				match(T__3);
				}
				break;
			case 6:
				{
				_localctx = new FirstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(502);
				match(FIRST);
				setState(503);
				match(T__2);
				setState(504);
				expression();
				setState(507);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==IGNORE) {
					{
					setState(505);
					match(IGNORE);
					setState(506);
					match(NULLS);
					}
				}

				setState(509);
				match(T__3);
				}
				break;
			case 7:
				{
				_localctx = new LastContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(511);
				match(LAST);
				setState(512);
				match(T__2);
				setState(513);
				expression();
				setState(516);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==IGNORE) {
					{
					setState(514);
					match(IGNORE);
					setState(515);
					match(NULLS);
					}
				}

				setState(518);
				match(T__3);
				}
				break;
			case 8:
				{
				_localctx = new PositionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(520);
				match(POSITION);
				setState(521);
				match(T__2);
				setState(522);
				((PositionContext)_localctx).substr = valueExpression(0);
				setState(523);
				match(IN);
				setState(524);
				((PositionContext)_localctx).str = valueExpression(0);
				setState(525);
				match(T__3);
				}
				break;
			case 9:
				{
				_localctx = new ConstantDefaultContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(527);
				constant();
				}
				break;
			case 10:
				{
				_localctx = new StarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(528);
				match(ASTERISK);
				}
				break;
			case 11:
				{
				_localctx = new StarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(529);
				qualifiedName();
				setState(530);
				match(T__4);
				setState(531);
				match(ASTERISK);
				}
				break;
			case 12:
				{
				_localctx = new RowConstructorContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(533);
				match(T__2);
				setState(534);
				namedExpression();
				setState(537); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(535);
					match(T__1);
					setState(536);
					namedExpression();
					}
					}
					setState(539); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==T__1 );
				setState(541);
				match(T__3);
				}
				break;
			case 13:
				{
				_localctx = new SubqueryExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(543);
				match(T__2);
				setState(544);
				query();
				setState(545);
				match(T__3);
				}
				break;
			case 14:
				{
				_localctx = new FunctionCallContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(547);
				functionName();
				setState(548);
				match(T__2);
				setState(557);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__2) | (1L << ADD) | (1L << AFTER) | (1L << ALL) | (1L << ALTER) | (1L << ANALYZE) | (1L << AND) | (1L << ANTI) | (1L << ANY) | (1L << ARCHIVE) | (1L << ARRAY) | (1L << AS) | (1L << ASC) | (1L << AT) | (1L << AUTHORIZATION) | (1L << BETWEEN) | (1L << BOTH) | (1L << BUCKET) | (1L << BUCKETS) | (1L << BY) | (1L << CACHE) | (1L << CASCADE) | (1L << CASE) | (1L << CAST) | (1L << CHANGE) | (1L << CHECK) | (1L << CLEAR) | (1L << CLUSTER) | (1L << CLUSTERED) | (1L << CODEGEN) | (1L << COLLATE) | (1L << COLLECTION) | (1L << COLUMN) | (1L << COLUMNS) | (1L << COMMENT) | (1L << COMMIT) | (1L << COMPACT) | (1L << COMPACTIONS) | (1L << COMPUTE) | (1L << CONCATENATE) | (1L << CONSTRAINT) | (1L << COST) | (1L << CREATE) | (1L << CROSS) | (1L << CUBE) | (1L << CURRENT) | (1L << CURRENT_DATE) | (1L << CURRENT_TIME) | (1L << CURRENT_TIMESTAMP) | (1L << CURRENT_USER) | (1L << DATA) | (1L << DATABASE) | (1L << DATABASES) | (1L << DBPROPERTIES) | (1L << DEFINED) | (1L << DELETE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (DELIMITED - 64)) | (1L << (DESC - 64)) | (1L << (DESCRIBE - 64)) | (1L << (DFS - 64)) | (1L << (DIRECTORIES - 64)) | (1L << (DIRECTORY - 64)) | (1L << (DISTINCT - 64)) | (1L << (DISTRIBUTE - 64)) | (1L << (DIV - 64)) | (1L << (DROP - 64)) | (1L << (ELSE - 64)) | (1L << (END - 64)) | (1L << (ESCAPE - 64)) | (1L << (ESCAPED - 64)) | (1L << (EXCEPT - 64)) | (1L << (EXCHANGE - 64)) | (1L << (EXISTS - 64)) | (1L << (EXPLAIN - 64)) | (1L << (EXPORT - 64)) | (1L << (EXTENDED - 64)) | (1L << (EXTERNAL - 64)) | (1L << (EXTRACT - 64)) | (1L << (FALSE - 64)) | (1L << (FETCH - 64)) | (1L << (FIELDS - 64)) | (1L << (FILTER - 64)) | (1L << (FILEFORMAT - 64)) | (1L << (FIRST - 64)) | (1L << (FOLLOWING - 64)) | (1L << (FOR - 64)) | (1L << (FOREIGN - 64)) | (1L << (FORMAT - 64)) | (1L << (FORMATTED - 64)) | (1L << (FROM - 64)) | (1L << (FULL - 64)) | (1L << (FUNCTION - 64)) | (1L << (FUNCTIONS - 64)) | (1L << (GLOBAL - 64)) | (1L << (GRANT - 64)) | (1L << (GROUP - 64)) | (1L << (GROUPING - 64)) | (1L << (HAVING - 64)) | (1L << (IF - 64)) | (1L << (IGNORE - 64)) | (1L << (IMPORT - 64)) | (1L << (IN - 64)) | (1L << (INDEX - 64)) | (1L << (INDEXES - 64)) | (1L << (INNER - 64)) | (1L << (INPATH - 64)) | (1L << (INPUTFORMAT - 64)) | (1L << (INSERT - 64)) | (1L << (INTERSECT - 64)) | (1L << (INTERVAL - 64)) | (1L << (INTO - 64)) | (1L << (IS - 64)) | (1L << (ITEMS - 64)) | (1L << (JOIN - 64)) | (1L << (KEYS - 64)) | (1L << (LAST - 64)) | (1L << (LATERAL - 64)) | (1L << (LAZY - 64)) | (1L << (LEADING - 64)) | (1L << (LEFT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LIKE - 128)) | (1L << (LIMIT - 128)) | (1L << (LINES - 128)) | (1L << (LIST - 128)) | (1L << (LOAD - 128)) | (1L << (LOCAL - 128)) | (1L << (LOCATION - 128)) | (1L << (LOCK - 128)) | (1L << (LOCKS - 128)) | (1L << (LOGICAL - 128)) | (1L << (MACRO - 128)) | (1L << (MAP - 128)) | (1L << (MATCHED - 128)) | (1L << (MERGE - 128)) | (1L << (MSCK - 128)) | (1L << (NAMESPACE - 128)) | (1L << (NAMESPACES - 128)) | (1L << (NATURAL - 128)) | (1L << (NO - 128)) | (1L << (NOT - 128)) | (1L << (NULL - 128)) | (1L << (NULLS - 128)) | (1L << (OF - 128)) | (1L << (ON - 128)) | (1L << (ONLY - 128)) | (1L << (OPTION - 128)) | (1L << (OPTIONS - 128)) | (1L << (OR - 128)) | (1L << (ORDER - 128)) | (1L << (OUT - 128)) | (1L << (OUTER - 128)) | (1L << (OUTPUTFORMAT - 128)) | (1L << (OVER - 128)) | (1L << (OVERLAPS - 128)) | (1L << (OVERLAY - 128)) | (1L << (OVERWRITE - 128)) | (1L << (PARTITION - 128)) | (1L << (PARTITIONED - 128)) | (1L << (PARTITIONS - 128)) | (1L << (PERCENTLIT - 128)) | (1L << (PIVOT - 128)) | (1L << (PLACING - 128)) | (1L << (POSITION - 128)) | (1L << (PRECEDING - 128)) | (1L << (PRIMARY - 128)) | (1L << (PRINCIPALS - 128)) | (1L << (PROPERTIES - 128)) | (1L << (PURGE - 128)) | (1L << (QUERY - 128)) | (1L << (RANGE - 128)) | (1L << (RECORDREADER - 128)) | (1L << (RECORDWRITER - 128)) | (1L << (RECOVER - 128)) | (1L << (REDUCE - 128)) | (1L << (REFERENCES - 128)) | (1L << (REFRESH - 128)) | (1L << (RENAME - 128)) | (1L << (REPAIR - 128)) | (1L << (REPLACE - 128)) | (1L << (RESET - 128)) | (1L << (RESTRICT - 128)) | (1L << (REVOKE - 128)) | (1L << (RIGHT - 128)) | (1L << (RLIKE - 128)))) != 0) || ((((_la - 192)) & ~0x3f) == 0 && ((1L << (_la - 192)) & ((1L << (ROLE - 192)) | (1L << (ROLES - 192)) | (1L << (ROLLBACK - 192)) | (1L << (ROLLUP - 192)) | (1L << (ROW - 192)) | (1L << (ROWS - 192)) | (1L << (SCHEMA - 192)) | (1L << (SELECT - 192)) | (1L << (SEMI - 192)) | (1L << (SEPARATED - 192)) | (1L << (SERDE - 192)) | (1L << (SERDEPROPERTIES - 192)) | (1L << (SESSION_USER - 192)) | (1L << (SET - 192)) | (1L << (SETMINUS - 192)) | (1L << (SETS - 192)) | (1L << (SHOW - 192)) | (1L << (SKEWED - 192)) | (1L << (SOME - 192)) | (1L << (SORT - 192)) | (1L << (SORTED - 192)) | (1L << (START - 192)) | (1L << (STATISTICS - 192)) | (1L << (STORED - 192)) | (1L << (STRATIFY - 192)) | (1L << (STRUCT - 192)) | (1L << (SUBSTR - 192)) | (1L << (SUBSTRING - 192)) | (1L << (TABLE - 192)) | (1L << (TABLES - 192)) | (1L << (TABLESAMPLE - 192)) | (1L << (TBLPROPERTIES - 192)) | (1L << (TEMPORARY - 192)) | (1L << (TERMINATED - 192)) | (1L << (THEN - 192)) | (1L << (TO - 192)) | (1L << (TOUCH - 192)) | (1L << (TRAILING - 192)) | (1L << (TRANSACTION - 192)) | (1L << (TRANSACTIONS - 192)) | (1L << (TRANSFORM - 192)) | (1L << (TRIM - 192)) | (1L << (TRUE - 192)) | (1L << (TRUNCATE - 192)) | (1L << (TYPE - 192)) | (1L << (UNARCHIVE - 192)) | (1L << (UNBOUNDED - 192)) | (1L << (UNCACHE - 192)) | (1L << (UNION - 192)) | (1L << (UNIQUE - 192)) | (1L << (UNKNOWN - 192)) | (1L << (UNLOCK - 192)) | (1L << (UNSET - 192)) | (1L << (UPDATE - 192)) | (1L << (USE - 192)) | (1L << (USER - 192)) | (1L << (USING - 192)) | (1L << (VALUES - 192)) | (1L << (VIEW - 192)) | (1L << (VIEWS - 192)) | (1L << (WHEN - 192)) | (1L << (WHERE - 192)) | (1L << (WINDOW - 192)) | (1L << (WITH - 192)))) != 0) || ((((_la - 264)) & ~0x3f) == 0 && ((1L << (_la - 264)) & ((1L << (PLUS - 264)) | (1L << (MINUS - 264)) | (1L << (ASTERISK - 264)) | (1L << (TILDE - 264)) | (1L << (STRING - 264)) | (1L << (BIGINT_LITERAL - 264)) | (1L << (SMALLINT_LITERAL - 264)) | (1L << (TINYINT_LITERAL - 264)) | (1L << (INTEGER_VALUE - 264)) | (1L << (EXPONENT_VALUE - 264)) | (1L << (DECIMAL_VALUE - 264)) | (1L << (DOUBLE_LITERAL - 264)) | (1L << (BIGDECIMAL_LITERAL - 264)) | (1L << (IDENTIFIER - 264)) | (1L << (BACKQUOTED_IDENTIFIER - 264)))) != 0)) {
					{
					setState(549);
					((FunctionCallContext)_localctx).expression = expression();
					((FunctionCallContext)_localctx).argument.add(((FunctionCallContext)_localctx).expression);
					setState(554);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(550);
						match(T__1);
						setState(551);
						((FunctionCallContext)_localctx).expression = expression();
						((FunctionCallContext)_localctx).argument.add(((FunctionCallContext)_localctx).expression);
						}
						}
						setState(556);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(559);
				match(T__3);
				}
				break;
			case 15:
				{
				_localctx = new ColumnReferenceContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(561);
				identifier();
				}
				break;
			case 16:
				{
				_localctx = new ParenthesizedExpressionContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(562);
				match(T__2);
				setState(563);
				expression();
				setState(564);
				match(T__3);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(578);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(576);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new SubscriptContext(new PrimaryExpressionContext(_parentctx, _parentState));
						((SubscriptContext)_localctx).value = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_primaryExpression);
						setState(568);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(569);
						match(T__5);
						setState(570);
						((SubscriptContext)_localctx).index = valueExpression(0);
						setState(571);
						match(T__6);
						}
						break;
					case 2:
						{
						_localctx = new DereferenceContext(new PrimaryExpressionContext(_parentctx, _parentState));
						((DereferenceContext)_localctx).base = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_primaryExpression);
						setState(573);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(574);
						match(T__4);
						setState(575);
						((DereferenceContext)_localctx).fieldName = identifier();
						}
						break;
					}
					} 
				}
				setState(580);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ConstantContext extends ParserRuleContext {
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
	 
		public ConstantContext() { }
		public void copyFrom(ConstantContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NullLiteralContext extends ConstantContext {
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public NullLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class StringLiteralContext extends ConstantContext {
		public List<TerminalNode> STRING() { return getTokens(sql_parserParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(sql_parserParser.STRING, i);
		}
		public StringLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class TypeConstructorContext extends ConstantContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode STRING() { return getToken(sql_parserParser.STRING, 0); }
		public TypeConstructorContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class IntervalLiteralContext extends ConstantContext {
		public IntervalContext interval() {
			return getRuleContext(IntervalContext.class,0);
		}
		public IntervalLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class NumericLiteralContext extends ConstantContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public NumericLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class BooleanLiteralContext extends ConstantContext {
		public BooleanValueContext booleanValue() {
			return getRuleContext(BooleanValueContext.class,0);
		}
		public BooleanLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_constant);
		try {
			int _alt;
			setState(593);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				_localctx = new NullLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(581);
				match(NULL);
				}
				break;
			case 2:
				_localctx = new IntervalLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(582);
				interval();
				}
				break;
			case 3:
				_localctx = new TypeConstructorContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(583);
				identifier();
				setState(584);
				match(STRING);
				}
				break;
			case 4:
				_localctx = new NumericLiteralContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(586);
				number();
				}
				break;
			case 5:
				_localctx = new BooleanLiteralContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(587);
				booleanValue();
				}
				break;
			case 6:
				_localctx = new StringLiteralContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(589); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(588);
						match(STRING);
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(591); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComparisonOperatorContext extends ParserRuleContext {
		public TerminalNode EQ() { return getToken(sql_parserParser.EQ, 0); }
		public TerminalNode NEQ() { return getToken(sql_parserParser.NEQ, 0); }
		public TerminalNode NEQJ() { return getToken(sql_parserParser.NEQJ, 0); }
		public TerminalNode LT() { return getToken(sql_parserParser.LT, 0); }
		public TerminalNode LTE() { return getToken(sql_parserParser.LTE, 0); }
		public TerminalNode GT() { return getToken(sql_parserParser.GT, 0); }
		public TerminalNode GTE() { return getToken(sql_parserParser.GTE, 0); }
		public TerminalNode NSEQ() { return getToken(sql_parserParser.NSEQ, 0); }
		public ComparisonOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparisonOperator; }
	}

	public final ComparisonOperatorContext comparisonOperator() throws RecognitionException {
		ComparisonOperatorContext _localctx = new ComparisonOperatorContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_comparisonOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(595);
			_la = _input.LA(1);
			if ( !(((((_la - 256)) & ~0x3f) == 0 && ((1L << (_la - 256)) & ((1L << (EQ - 256)) | (1L << (NSEQ - 256)) | (1L << (NEQ - 256)) | (1L << (NEQJ - 256)) | (1L << (LT - 256)) | (1L << (LTE - 256)) | (1L << (GT - 256)) | (1L << (GTE - 256)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArithmeticOperatorContext extends ParserRuleContext {
		public TerminalNode PLUS() { return getToken(sql_parserParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public TerminalNode ASTERISK() { return getToken(sql_parserParser.ASTERISK, 0); }
		public TerminalNode SLASH() { return getToken(sql_parserParser.SLASH, 0); }
		public TerminalNode PERCENT() { return getToken(sql_parserParser.PERCENT, 0); }
		public TerminalNode DIV() { return getToken(sql_parserParser.DIV, 0); }
		public TerminalNode TILDE() { return getToken(sql_parserParser.TILDE, 0); }
		public TerminalNode AMPERSAND() { return getToken(sql_parserParser.AMPERSAND, 0); }
		public TerminalNode PIPE() { return getToken(sql_parserParser.PIPE, 0); }
		public TerminalNode CONCAT_PIPE() { return getToken(sql_parserParser.CONCAT_PIPE, 0); }
		public TerminalNode HAT() { return getToken(sql_parserParser.HAT, 0); }
		public ArithmeticOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arithmeticOperator; }
	}

	public final ArithmeticOperatorContext arithmeticOperator() throws RecognitionException {
		ArithmeticOperatorContext _localctx = new ArithmeticOperatorContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_arithmeticOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(597);
			_la = _input.LA(1);
			if ( !(_la==DIV || ((((_la - 264)) & ~0x3f) == 0 && ((1L << (_la - 264)) & ((1L << (PLUS - 264)) | (1L << (MINUS - 264)) | (1L << (ASTERISK - 264)) | (1L << (SLASH - 264)) | (1L << (PERCENT - 264)) | (1L << (TILDE - 264)) | (1L << (AMPERSAND - 264)) | (1L << (PIPE - 264)) | (1L << (CONCAT_PIPE - 264)) | (1L << (HAT - 264)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PredicateOperatorContext extends ParserRuleContext {
		public TerminalNode OR() { return getToken(sql_parserParser.OR, 0); }
		public TerminalNode AND() { return getToken(sql_parserParser.AND, 0); }
		public TerminalNode IN() { return getToken(sql_parserParser.IN, 0); }
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public PredicateOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_predicateOperator; }
	}

	public final PredicateOperatorContext predicateOperator() throws RecognitionException {
		PredicateOperatorContext _localctx = new PredicateOperatorContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_predicateOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(599);
			_la = _input.LA(1);
			if ( !(_la==AND || ((((_la - 109)) & ~0x3f) == 0 && ((1L << (_la - 109)) & ((1L << (IN - 109)) | (1L << (NOT - 109)) | (1L << (OR - 109)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanValueContext extends ParserRuleContext {
		public TerminalNode TRUE() { return getToken(sql_parserParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(sql_parserParser.FALSE, 0); }
		public BooleanValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanValue; }
	}

	public final BooleanValueContext booleanValue() throws RecognitionException {
		BooleanValueContext _localctx = new BooleanValueContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_booleanValue);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(601);
			_la = _input.LA(1);
			if ( !(_la==FALSE || _la==TRUE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntervalContext extends ParserRuleContext {
		public TerminalNode INTERVAL() { return getToken(sql_parserParser.INTERVAL, 0); }
		public ErrorCapturingMultiUnitsIntervalContext errorCapturingMultiUnitsInterval() {
			return getRuleContext(ErrorCapturingMultiUnitsIntervalContext.class,0);
		}
		public ErrorCapturingUnitToUnitIntervalContext errorCapturingUnitToUnitInterval() {
			return getRuleContext(ErrorCapturingUnitToUnitIntervalContext.class,0);
		}
		public IntervalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_interval; }
	}

	public final IntervalContext interval() throws RecognitionException {
		IntervalContext _localctx = new IntervalContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_interval);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(603);
			match(INTERVAL);
			setState(606);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				{
				setState(604);
				errorCapturingMultiUnitsInterval();
				}
				break;
			case 2:
				{
				setState(605);
				errorCapturingUnitToUnitInterval();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ErrorCapturingMultiUnitsIntervalContext extends ParserRuleContext {
		public MultiUnitsIntervalContext multiUnitsInterval() {
			return getRuleContext(MultiUnitsIntervalContext.class,0);
		}
		public UnitToUnitIntervalContext unitToUnitInterval() {
			return getRuleContext(UnitToUnitIntervalContext.class,0);
		}
		public ErrorCapturingMultiUnitsIntervalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_errorCapturingMultiUnitsInterval; }
	}

	public final ErrorCapturingMultiUnitsIntervalContext errorCapturingMultiUnitsInterval() throws RecognitionException {
		ErrorCapturingMultiUnitsIntervalContext _localctx = new ErrorCapturingMultiUnitsIntervalContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_errorCapturingMultiUnitsInterval);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(608);
			multiUnitsInterval();
			setState(610);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
			case 1:
				{
				setState(609);
				unitToUnitInterval();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MultiUnitsIntervalContext extends ParserRuleContext {
		public IdentifierContext identifier;
		public List<IdentifierContext> unit = new ArrayList<IdentifierContext>();
		public List<IntervalValueContext> intervalValue() {
			return getRuleContexts(IntervalValueContext.class);
		}
		public IntervalValueContext intervalValue(int i) {
			return getRuleContext(IntervalValueContext.class,i);
		}
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public MultiUnitsIntervalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multiUnitsInterval; }
	}

	public final MultiUnitsIntervalContext multiUnitsInterval() throws RecognitionException {
		MultiUnitsIntervalContext _localctx = new MultiUnitsIntervalContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_multiUnitsInterval);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(615); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(612);
					intervalValue();
					setState(613);
					((MultiUnitsIntervalContext)_localctx).identifier = identifier();
					((MultiUnitsIntervalContext)_localctx).unit.add(((MultiUnitsIntervalContext)_localctx).identifier);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(617); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ErrorCapturingUnitToUnitIntervalContext extends ParserRuleContext {
		public UnitToUnitIntervalContext body;
		public MultiUnitsIntervalContext error1;
		public UnitToUnitIntervalContext error2;
		public List<UnitToUnitIntervalContext> unitToUnitInterval() {
			return getRuleContexts(UnitToUnitIntervalContext.class);
		}
		public UnitToUnitIntervalContext unitToUnitInterval(int i) {
			return getRuleContext(UnitToUnitIntervalContext.class,i);
		}
		public MultiUnitsIntervalContext multiUnitsInterval() {
			return getRuleContext(MultiUnitsIntervalContext.class,0);
		}
		public ErrorCapturingUnitToUnitIntervalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_errorCapturingUnitToUnitInterval; }
	}

	public final ErrorCapturingUnitToUnitIntervalContext errorCapturingUnitToUnitInterval() throws RecognitionException {
		ErrorCapturingUnitToUnitIntervalContext _localctx = new ErrorCapturingUnitToUnitIntervalContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_errorCapturingUnitToUnitInterval);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(619);
			((ErrorCapturingUnitToUnitIntervalContext)_localctx).body = unitToUnitInterval();
			setState(622);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
			case 1:
				{
				setState(620);
				((ErrorCapturingUnitToUnitIntervalContext)_localctx).error1 = multiUnitsInterval();
				}
				break;
			case 2:
				{
				setState(621);
				((ErrorCapturingUnitToUnitIntervalContext)_localctx).error2 = unitToUnitInterval();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnitToUnitIntervalContext extends ParserRuleContext {
		public IntervalValueContext value;
		public IdentifierContext from;
		public IdentifierContext to;
		public TerminalNode TO() { return getToken(sql_parserParser.TO, 0); }
		public IntervalValueContext intervalValue() {
			return getRuleContext(IntervalValueContext.class,0);
		}
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public UnitToUnitIntervalContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unitToUnitInterval; }
	}

	public final UnitToUnitIntervalContext unitToUnitInterval() throws RecognitionException {
		UnitToUnitIntervalContext _localctx = new UnitToUnitIntervalContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_unitToUnitInterval);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(624);
			((UnitToUnitIntervalContext)_localctx).value = intervalValue();
			setState(625);
			((UnitToUnitIntervalContext)_localctx).from = identifier();
			setState(626);
			match(TO);
			setState(627);
			((UnitToUnitIntervalContext)_localctx).to = identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntervalValueContext extends ParserRuleContext {
		public TerminalNode INTEGER_VALUE() { return getToken(sql_parserParser.INTEGER_VALUE, 0); }
		public TerminalNode DECIMAL_VALUE() { return getToken(sql_parserParser.DECIMAL_VALUE, 0); }
		public TerminalNode PLUS() { return getToken(sql_parserParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public TerminalNode STRING() { return getToken(sql_parserParser.STRING, 0); }
		public IntervalValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intervalValue; }
	}

	public final IntervalValueContext intervalValue() throws RecognitionException {
		IntervalValueContext _localctx = new IntervalValueContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_intervalValue);
		int _la;
		try {
			setState(634);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PLUS:
			case MINUS:
			case INTEGER_VALUE:
			case DECIMAL_VALUE:
				enterOuterAlt(_localctx, 1);
				{
				setState(630);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==PLUS || _la==MINUS) {
					{
					setState(629);
					_la = _input.LA(1);
					if ( !(_la==PLUS || _la==MINUS) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(632);
				_la = _input.LA(1);
				if ( !(_la==INTEGER_VALUE || _la==DECIMAL_VALUE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 2);
				{
				setState(633);
				match(STRING);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ColPositionContext extends ParserRuleContext {
		public Token position;
		public ErrorCapturingIdentifierContext afterCol;
		public TerminalNode FIRST() { return getToken(sql_parserParser.FIRST, 0); }
		public TerminalNode AFTER() { return getToken(sql_parserParser.AFTER, 0); }
		public ErrorCapturingIdentifierContext errorCapturingIdentifier() {
			return getRuleContext(ErrorCapturingIdentifierContext.class,0);
		}
		public ColPositionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_colPosition; }
	}

	public final ColPositionContext colPosition() throws RecognitionException {
		ColPositionContext _localctx = new ColPositionContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_colPosition);
		try {
			setState(639);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FIRST:
				enterOuterAlt(_localctx, 1);
				{
				setState(636);
				((ColPositionContext)_localctx).position = match(FIRST);
				}
				break;
			case AFTER:
				enterOuterAlt(_localctx, 2);
				{
				setState(637);
				((ColPositionContext)_localctx).position = match(AFTER);
				setState(638);
				((ColPositionContext)_localctx).afterCol = errorCapturingIdentifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DataTypeContext extends ParserRuleContext {
		public DataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dataType; }
	 
		public DataTypeContext() { }
		public void copyFrom(DataTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ComplexDataTypeContext extends DataTypeContext {
		public Token complex;
		public TerminalNode LT() { return getToken(sql_parserParser.LT, 0); }
		public List<DataTypeContext> dataType() {
			return getRuleContexts(DataTypeContext.class);
		}
		public DataTypeContext dataType(int i) {
			return getRuleContext(DataTypeContext.class,i);
		}
		public TerminalNode GT() { return getToken(sql_parserParser.GT, 0); }
		public TerminalNode ARRAY() { return getToken(sql_parserParser.ARRAY, 0); }
		public TerminalNode MAP() { return getToken(sql_parserParser.MAP, 0); }
		public TerminalNode STRUCT() { return getToken(sql_parserParser.STRUCT, 0); }
		public TerminalNode NEQ() { return getToken(sql_parserParser.NEQ, 0); }
		public ComplexColTypeListContext complexColTypeList() {
			return getRuleContext(ComplexColTypeListContext.class,0);
		}
		public ComplexDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}
	public static class PrimitiveDataTypeContext extends DataTypeContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> INTEGER_VALUE() { return getTokens(sql_parserParser.INTEGER_VALUE); }
		public TerminalNode INTEGER_VALUE(int i) {
			return getToken(sql_parserParser.INTEGER_VALUE, i);
		}
		public PrimitiveDataTypeContext(DataTypeContext ctx) { copyFrom(ctx); }
	}

	public final DataTypeContext dataType() throws RecognitionException {
		DataTypeContext _localctx = new DataTypeContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_dataType);
		int _la;
		try {
			setState(675);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,74,_ctx) ) {
			case 1:
				_localctx = new ComplexDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(641);
				((ComplexDataTypeContext)_localctx).complex = match(ARRAY);
				setState(642);
				match(LT);
				setState(643);
				dataType();
				setState(644);
				match(GT);
				}
				break;
			case 2:
				_localctx = new ComplexDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(646);
				((ComplexDataTypeContext)_localctx).complex = match(MAP);
				setState(647);
				match(LT);
				setState(648);
				dataType();
				setState(649);
				match(T__1);
				setState(650);
				dataType();
				setState(651);
				match(GT);
				}
				break;
			case 3:
				_localctx = new ComplexDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(653);
				((ComplexDataTypeContext)_localctx).complex = match(STRUCT);
				setState(660);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case LT:
					{
					setState(654);
					match(LT);
					setState(656);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ADD) | (1L << AFTER) | (1L << ALL) | (1L << ALTER) | (1L << ANALYZE) | (1L << AND) | (1L << ANTI) | (1L << ANY) | (1L << ARCHIVE) | (1L << ARRAY) | (1L << AS) | (1L << ASC) | (1L << AT) | (1L << AUTHORIZATION) | (1L << BETWEEN) | (1L << BOTH) | (1L << BUCKET) | (1L << BUCKETS) | (1L << BY) | (1L << CACHE) | (1L << CASCADE) | (1L << CASE) | (1L << CAST) | (1L << CHANGE) | (1L << CHECK) | (1L << CLEAR) | (1L << CLUSTER) | (1L << CLUSTERED) | (1L << CODEGEN) | (1L << COLLATE) | (1L << COLLECTION) | (1L << COLUMN) | (1L << COLUMNS) | (1L << COMMENT) | (1L << COMMIT) | (1L << COMPACT) | (1L << COMPACTIONS) | (1L << COMPUTE) | (1L << CONCATENATE) | (1L << CONSTRAINT) | (1L << COST) | (1L << CREATE) | (1L << CROSS) | (1L << CUBE) | (1L << CURRENT) | (1L << CURRENT_DATE) | (1L << CURRENT_TIME) | (1L << CURRENT_TIMESTAMP) | (1L << CURRENT_USER) | (1L << DATA) | (1L << DATABASE) | (1L << DATABASES) | (1L << DBPROPERTIES) | (1L << DEFINED) | (1L << DELETE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (DELIMITED - 64)) | (1L << (DESC - 64)) | (1L << (DESCRIBE - 64)) | (1L << (DFS - 64)) | (1L << (DIRECTORIES - 64)) | (1L << (DIRECTORY - 64)) | (1L << (DISTINCT - 64)) | (1L << (DISTRIBUTE - 64)) | (1L << (DIV - 64)) | (1L << (DROP - 64)) | (1L << (ELSE - 64)) | (1L << (END - 64)) | (1L << (ESCAPE - 64)) | (1L << (ESCAPED - 64)) | (1L << (EXCEPT - 64)) | (1L << (EXCHANGE - 64)) | (1L << (EXISTS - 64)) | (1L << (EXPLAIN - 64)) | (1L << (EXPORT - 64)) | (1L << (EXTENDED - 64)) | (1L << (EXTERNAL - 64)) | (1L << (EXTRACT - 64)) | (1L << (FALSE - 64)) | (1L << (FETCH - 64)) | (1L << (FIELDS - 64)) | (1L << (FILTER - 64)) | (1L << (FILEFORMAT - 64)) | (1L << (FIRST - 64)) | (1L << (FOLLOWING - 64)) | (1L << (FOR - 64)) | (1L << (FOREIGN - 64)) | (1L << (FORMAT - 64)) | (1L << (FORMATTED - 64)) | (1L << (FROM - 64)) | (1L << (FULL - 64)) | (1L << (FUNCTION - 64)) | (1L << (FUNCTIONS - 64)) | (1L << (GLOBAL - 64)) | (1L << (GRANT - 64)) | (1L << (GROUP - 64)) | (1L << (GROUPING - 64)) | (1L << (HAVING - 64)) | (1L << (IF - 64)) | (1L << (IGNORE - 64)) | (1L << (IMPORT - 64)) | (1L << (IN - 64)) | (1L << (INDEX - 64)) | (1L << (INDEXES - 64)) | (1L << (INNER - 64)) | (1L << (INPATH - 64)) | (1L << (INPUTFORMAT - 64)) | (1L << (INSERT - 64)) | (1L << (INTERSECT - 64)) | (1L << (INTERVAL - 64)) | (1L << (INTO - 64)) | (1L << (IS - 64)) | (1L << (ITEMS - 64)) | (1L << (JOIN - 64)) | (1L << (KEYS - 64)) | (1L << (LAST - 64)) | (1L << (LATERAL - 64)) | (1L << (LAZY - 64)) | (1L << (LEADING - 64)) | (1L << (LEFT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LIKE - 128)) | (1L << (LIMIT - 128)) | (1L << (LINES - 128)) | (1L << (LIST - 128)) | (1L << (LOAD - 128)) | (1L << (LOCAL - 128)) | (1L << (LOCATION - 128)) | (1L << (LOCK - 128)) | (1L << (LOCKS - 128)) | (1L << (LOGICAL - 128)) | (1L << (MACRO - 128)) | (1L << (MAP - 128)) | (1L << (MATCHED - 128)) | (1L << (MERGE - 128)) | (1L << (MSCK - 128)) | (1L << (NAMESPACE - 128)) | (1L << (NAMESPACES - 128)) | (1L << (NATURAL - 128)) | (1L << (NO - 128)) | (1L << (NOT - 128)) | (1L << (NULL - 128)) | (1L << (NULLS - 128)) | (1L << (OF - 128)) | (1L << (ON - 128)) | (1L << (ONLY - 128)) | (1L << (OPTION - 128)) | (1L << (OPTIONS - 128)) | (1L << (OR - 128)) | (1L << (ORDER - 128)) | (1L << (OUT - 128)) | (1L << (OUTER - 128)) | (1L << (OUTPUTFORMAT - 128)) | (1L << (OVER - 128)) | (1L << (OVERLAPS - 128)) | (1L << (OVERLAY - 128)) | (1L << (OVERWRITE - 128)) | (1L << (PARTITION - 128)) | (1L << (PARTITIONED - 128)) | (1L << (PARTITIONS - 128)) | (1L << (PERCENTLIT - 128)) | (1L << (PIVOT - 128)) | (1L << (PLACING - 128)) | (1L << (POSITION - 128)) | (1L << (PRECEDING - 128)) | (1L << (PRIMARY - 128)) | (1L << (PRINCIPALS - 128)) | (1L << (PROPERTIES - 128)) | (1L << (PURGE - 128)) | (1L << (QUERY - 128)) | (1L << (RANGE - 128)) | (1L << (RECORDREADER - 128)) | (1L << (RECORDWRITER - 128)) | (1L << (RECOVER - 128)) | (1L << (REDUCE - 128)) | (1L << (REFERENCES - 128)) | (1L << (REFRESH - 128)) | (1L << (RENAME - 128)) | (1L << (REPAIR - 128)) | (1L << (REPLACE - 128)) | (1L << (RESET - 128)) | (1L << (RESTRICT - 128)) | (1L << (REVOKE - 128)) | (1L << (RIGHT - 128)) | (1L << (RLIKE - 128)))) != 0) || ((((_la - 192)) & ~0x3f) == 0 && ((1L << (_la - 192)) & ((1L << (ROLE - 192)) | (1L << (ROLES - 192)) | (1L << (ROLLBACK - 192)) | (1L << (ROLLUP - 192)) | (1L << (ROW - 192)) | (1L << (ROWS - 192)) | (1L << (SCHEMA - 192)) | (1L << (SELECT - 192)) | (1L << (SEMI - 192)) | (1L << (SEPARATED - 192)) | (1L << (SERDE - 192)) | (1L << (SERDEPROPERTIES - 192)) | (1L << (SESSION_USER - 192)) | (1L << (SET - 192)) | (1L << (SETMINUS - 192)) | (1L << (SETS - 192)) | (1L << (SHOW - 192)) | (1L << (SKEWED - 192)) | (1L << (SOME - 192)) | (1L << (SORT - 192)) | (1L << (SORTED - 192)) | (1L << (START - 192)) | (1L << (STATISTICS - 192)) | (1L << (STORED - 192)) | (1L << (STRATIFY - 192)) | (1L << (STRUCT - 192)) | (1L << (SUBSTR - 192)) | (1L << (SUBSTRING - 192)) | (1L << (TABLE - 192)) | (1L << (TABLES - 192)) | (1L << (TABLESAMPLE - 192)) | (1L << (TBLPROPERTIES - 192)) | (1L << (TEMPORARY - 192)) | (1L << (TERMINATED - 192)) | (1L << (THEN - 192)) | (1L << (TO - 192)) | (1L << (TOUCH - 192)) | (1L << (TRAILING - 192)) | (1L << (TRANSACTION - 192)) | (1L << (TRANSACTIONS - 192)) | (1L << (TRANSFORM - 192)) | (1L << (TRIM - 192)) | (1L << (TRUE - 192)) | (1L << (TRUNCATE - 192)) | (1L << (TYPE - 192)) | (1L << (UNARCHIVE - 192)) | (1L << (UNBOUNDED - 192)) | (1L << (UNCACHE - 192)) | (1L << (UNION - 192)) | (1L << (UNIQUE - 192)) | (1L << (UNKNOWN - 192)) | (1L << (UNLOCK - 192)) | (1L << (UNSET - 192)) | (1L << (UPDATE - 192)) | (1L << (USE - 192)) | (1L << (USER - 192)) | (1L << (USING - 192)) | (1L << (VALUES - 192)) | (1L << (VIEW - 192)) | (1L << (VIEWS - 192)) | (1L << (WHEN - 192)) | (1L << (WHERE - 192)) | (1L << (WINDOW - 192)) | (1L << (WITH - 192)))) != 0) || _la==IDENTIFIER || _la==BACKQUOTED_IDENTIFIER) {
						{
						setState(655);
						complexColTypeList();
						}
					}

					setState(658);
					match(GT);
					}
					break;
				case NEQ:
					{
					setState(659);
					match(NEQ);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 4:
				_localctx = new PrimitiveDataTypeContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(662);
				identifier();
				setState(673);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__2) {
					{
					setState(663);
					match(T__2);
					setState(664);
					match(INTEGER_VALUE);
					setState(669);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(665);
						match(T__1);
						setState(666);
						match(INTEGER_VALUE);
						}
						}
						setState(671);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(672);
					match(T__3);
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedColTypeWithPositionListContext extends ParserRuleContext {
		public List<QualifiedColTypeWithPositionContext> qualifiedColTypeWithPosition() {
			return getRuleContexts(QualifiedColTypeWithPositionContext.class);
		}
		public QualifiedColTypeWithPositionContext qualifiedColTypeWithPosition(int i) {
			return getRuleContext(QualifiedColTypeWithPositionContext.class,i);
		}
		public QualifiedColTypeWithPositionListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedColTypeWithPositionList; }
	}

	public final QualifiedColTypeWithPositionListContext qualifiedColTypeWithPositionList() throws RecognitionException {
		QualifiedColTypeWithPositionListContext _localctx = new QualifiedColTypeWithPositionListContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_qualifiedColTypeWithPositionList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(677);
			qualifiedColTypeWithPosition();
			setState(682);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(678);
				match(T__1);
				setState(679);
				qualifiedColTypeWithPosition();
				}
				}
				setState(684);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedColTypeWithPositionContext extends ParserRuleContext {
		public MultipartIdentifierContext name;
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public MultipartIdentifierContext multipartIdentifier() {
			return getRuleContext(MultipartIdentifierContext.class,0);
		}
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public CommentSpecContext commentSpec() {
			return getRuleContext(CommentSpecContext.class,0);
		}
		public ColPositionContext colPosition() {
			return getRuleContext(ColPositionContext.class,0);
		}
		public QualifiedColTypeWithPositionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedColTypeWithPosition; }
	}

	public final QualifiedColTypeWithPositionContext qualifiedColTypeWithPosition() throws RecognitionException {
		QualifiedColTypeWithPositionContext _localctx = new QualifiedColTypeWithPositionContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_qualifiedColTypeWithPosition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(685);
			((QualifiedColTypeWithPositionContext)_localctx).name = multipartIdentifier();
			setState(686);
			dataType();
			setState(689);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(687);
				match(NOT);
				setState(688);
				match(NULL);
				}
			}

			setState(692);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMENT) {
				{
				setState(691);
				commentSpec();
				}
			}

			setState(695);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AFTER || _la==FIRST) {
				{
				setState(694);
				colPosition();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ColTypeListContext extends ParserRuleContext {
		public List<ColTypeContext> colType() {
			return getRuleContexts(ColTypeContext.class);
		}
		public ColTypeContext colType(int i) {
			return getRuleContext(ColTypeContext.class,i);
		}
		public ColTypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_colTypeList; }
	}

	public final ColTypeListContext colTypeList() throws RecognitionException {
		ColTypeListContext _localctx = new ColTypeListContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_colTypeList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(697);
			colType();
			setState(702);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(698);
				match(T__1);
				setState(699);
				colType();
				}
				}
				setState(704);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ColTypeContext extends ParserRuleContext {
		public ErrorCapturingIdentifierContext colName;
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public ErrorCapturingIdentifierContext errorCapturingIdentifier() {
			return getRuleContext(ErrorCapturingIdentifierContext.class,0);
		}
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public CommentSpecContext commentSpec() {
			return getRuleContext(CommentSpecContext.class,0);
		}
		public ColTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_colType; }
	}

	public final ColTypeContext colType() throws RecognitionException {
		ColTypeContext _localctx = new ColTypeContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_colType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(705);
			((ColTypeContext)_localctx).colName = errorCapturingIdentifier();
			setState(706);
			dataType();
			setState(709);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(707);
				match(NOT);
				setState(708);
				match(NULL);
				}
			}

			setState(712);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMENT) {
				{
				setState(711);
				commentSpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComplexColTypeListContext extends ParserRuleContext {
		public List<ComplexColTypeContext> complexColType() {
			return getRuleContexts(ComplexColTypeContext.class);
		}
		public ComplexColTypeContext complexColType(int i) {
			return getRuleContext(ComplexColTypeContext.class,i);
		}
		public ComplexColTypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_complexColTypeList; }
	}

	public final ComplexColTypeListContext complexColTypeList() throws RecognitionException {
		ComplexColTypeListContext _localctx = new ComplexColTypeListContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_complexColTypeList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(714);
			complexColType();
			setState(719);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(715);
				match(T__1);
				setState(716);
				complexColType();
				}
				}
				setState(721);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComplexColTypeContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public CommentSpecContext commentSpec() {
			return getRuleContext(CommentSpecContext.class,0);
		}
		public ComplexColTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_complexColType; }
	}

	public final ComplexColTypeContext complexColType() throws RecognitionException {
		ComplexColTypeContext _localctx = new ComplexColTypeContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_complexColType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(722);
			identifier();
			setState(723);
			match(T__7);
			setState(724);
			dataType();
			setState(727);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NOT) {
				{
				setState(725);
				match(NOT);
				setState(726);
				match(NULL);
				}
			}

			setState(730);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMENT) {
				{
				setState(729);
				commentSpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhenClauseContext extends ParserRuleContext {
		public ExpressionContext condition;
		public ExpressionContext result;
		public TerminalNode WHEN() { return getToken(sql_parserParser.WHEN, 0); }
		public TerminalNode THEN() { return getToken(sql_parserParser.THEN, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public WhenClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whenClause; }
	}

	public final WhenClauseContext whenClause() throws RecognitionException {
		WhenClauseContext _localctx = new WhenClauseContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_whenClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(732);
			match(WHEN);
			setState(733);
			((WhenClauseContext)_localctx).condition = expression();
			setState(734);
			match(THEN);
			setState(735);
			((WhenClauseContext)_localctx).result = expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WindowClauseContext extends ParserRuleContext {
		public TerminalNode WINDOW() { return getToken(sql_parserParser.WINDOW, 0); }
		public List<NamedWindowContext> namedWindow() {
			return getRuleContexts(NamedWindowContext.class);
		}
		public NamedWindowContext namedWindow(int i) {
			return getRuleContext(NamedWindowContext.class,i);
		}
		public WindowClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_windowClause; }
	}

	public final WindowClauseContext windowClause() throws RecognitionException {
		WindowClauseContext _localctx = new WindowClauseContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_windowClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(737);
			match(WINDOW);
			setState(738);
			namedWindow();
			setState(743);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(739);
				match(T__1);
				setState(740);
				namedWindow();
				}
				}
				setState(745);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamedWindowContext extends ParserRuleContext {
		public ErrorCapturingIdentifierContext name;
		public TerminalNode AS() { return getToken(sql_parserParser.AS, 0); }
		public WindowSpecContext windowSpec() {
			return getRuleContext(WindowSpecContext.class,0);
		}
		public ErrorCapturingIdentifierContext errorCapturingIdentifier() {
			return getRuleContext(ErrorCapturingIdentifierContext.class,0);
		}
		public NamedWindowContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedWindow; }
	}

	public final NamedWindowContext namedWindow() throws RecognitionException {
		NamedWindowContext _localctx = new NamedWindowContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_namedWindow);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(746);
			((NamedWindowContext)_localctx).name = errorCapturingIdentifier();
			setState(747);
			match(AS);
			setState(748);
			windowSpec();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WindowSpecContext extends ParserRuleContext {
		public WindowSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_windowSpec; }
	 
		public WindowSpecContext() { }
		public void copyFrom(WindowSpecContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class WindowRefContext extends WindowSpecContext {
		public ErrorCapturingIdentifierContext name;
		public ErrorCapturingIdentifierContext errorCapturingIdentifier() {
			return getRuleContext(ErrorCapturingIdentifierContext.class,0);
		}
		public WindowRefContext(WindowSpecContext ctx) { copyFrom(ctx); }
	}
	public static class WindowDefContext extends WindowSpecContext {
		public ExpressionContext expression;
		public List<ExpressionContext> partition = new ArrayList<ExpressionContext>();
		public TerminalNode CLUSTER() { return getToken(sql_parserParser.CLUSTER, 0); }
		public List<TerminalNode> BY() { return getTokens(sql_parserParser.BY); }
		public TerminalNode BY(int i) {
			return getToken(sql_parserParser.BY, i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public WindowFrameContext windowFrame() {
			return getRuleContext(WindowFrameContext.class,0);
		}
		public List<SortItemContext> sortItem() {
			return getRuleContexts(SortItemContext.class);
		}
		public SortItemContext sortItem(int i) {
			return getRuleContext(SortItemContext.class,i);
		}
		public TerminalNode PARTITION() { return getToken(sql_parserParser.PARTITION, 0); }
		public TerminalNode DISTRIBUTE() { return getToken(sql_parserParser.DISTRIBUTE, 0); }
		public TerminalNode ORDER() { return getToken(sql_parserParser.ORDER, 0); }
		public TerminalNode SORT() { return getToken(sql_parserParser.SORT, 0); }
		public WindowDefContext(WindowSpecContext ctx) { copyFrom(ctx); }
	}

	public final WindowSpecContext windowSpec() throws RecognitionException {
		WindowSpecContext _localctx = new WindowSpecContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_windowSpec);
		int _la;
		try {
			setState(796);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				_localctx = new WindowRefContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(750);
				((WindowRefContext)_localctx).name = errorCapturingIdentifier();
				}
				break;
			case 2:
				_localctx = new WindowRefContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(751);
				match(T__2);
				setState(752);
				((WindowRefContext)_localctx).name = errorCapturingIdentifier();
				setState(753);
				match(T__3);
				}
				break;
			case 3:
				_localctx = new WindowDefContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(755);
				match(T__2);
				setState(790);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case CLUSTER:
					{
					setState(756);
					match(CLUSTER);
					setState(757);
					match(BY);
					setState(758);
					((WindowDefContext)_localctx).expression = expression();
					((WindowDefContext)_localctx).partition.add(((WindowDefContext)_localctx).expression);
					setState(763);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(759);
						match(T__1);
						setState(760);
						((WindowDefContext)_localctx).expression = expression();
						((WindowDefContext)_localctx).partition.add(((WindowDefContext)_localctx).expression);
						}
						}
						setState(765);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case T__3:
				case DISTRIBUTE:
				case ORDER:
				case PARTITION:
				case RANGE:
				case ROWS:
				case SORT:
					{
					setState(776);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==DISTRIBUTE || _la==PARTITION) {
						{
						setState(766);
						_la = _input.LA(1);
						if ( !(_la==DISTRIBUTE || _la==PARTITION) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(767);
						match(BY);
						setState(768);
						((WindowDefContext)_localctx).expression = expression();
						((WindowDefContext)_localctx).partition.add(((WindowDefContext)_localctx).expression);
						setState(773);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==T__1) {
							{
							{
							setState(769);
							match(T__1);
							setState(770);
							((WindowDefContext)_localctx).expression = expression();
							((WindowDefContext)_localctx).partition.add(((WindowDefContext)_localctx).expression);
							}
							}
							setState(775);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
					}

					setState(788);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==ORDER || _la==SORT) {
						{
						setState(778);
						_la = _input.LA(1);
						if ( !(_la==ORDER || _la==SORT) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(779);
						match(BY);
						setState(780);
						sortItem();
						setState(785);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==T__1) {
							{
							{
							setState(781);
							match(T__1);
							setState(782);
							sortItem();
							}
							}
							setState(787);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
					}

					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(793);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RANGE || _la==ROWS) {
					{
					setState(792);
					windowFrame();
					}
				}

				setState(795);
				match(T__3);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WindowFrameContext extends ParserRuleContext {
		public Token frameType;
		public FrameBoundContext start;
		public FrameBoundContext end;
		public TerminalNode RANGE() { return getToken(sql_parserParser.RANGE, 0); }
		public List<FrameBoundContext> frameBound() {
			return getRuleContexts(FrameBoundContext.class);
		}
		public FrameBoundContext frameBound(int i) {
			return getRuleContext(FrameBoundContext.class,i);
		}
		public TerminalNode ROWS() { return getToken(sql_parserParser.ROWS, 0); }
		public TerminalNode BETWEEN() { return getToken(sql_parserParser.BETWEEN, 0); }
		public TerminalNode AND() { return getToken(sql_parserParser.AND, 0); }
		public WindowFrameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_windowFrame; }
	}

	public final WindowFrameContext windowFrame() throws RecognitionException {
		WindowFrameContext _localctx = new WindowFrameContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_windowFrame);
		try {
			setState(814);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,94,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(798);
				((WindowFrameContext)_localctx).frameType = match(RANGE);
				setState(799);
				((WindowFrameContext)_localctx).start = frameBound();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(800);
				((WindowFrameContext)_localctx).frameType = match(ROWS);
				setState(801);
				((WindowFrameContext)_localctx).start = frameBound();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(802);
				((WindowFrameContext)_localctx).frameType = match(RANGE);
				setState(803);
				match(BETWEEN);
				setState(804);
				((WindowFrameContext)_localctx).start = frameBound();
				setState(805);
				match(AND);
				setState(806);
				((WindowFrameContext)_localctx).end = frameBound();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(808);
				((WindowFrameContext)_localctx).frameType = match(ROWS);
				setState(809);
				match(BETWEEN);
				setState(810);
				((WindowFrameContext)_localctx).start = frameBound();
				setState(811);
				match(AND);
				setState(812);
				((WindowFrameContext)_localctx).end = frameBound();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FrameBoundContext extends ParserRuleContext {
		public Token boundType;
		public TerminalNode UNBOUNDED() { return getToken(sql_parserParser.UNBOUNDED, 0); }
		public TerminalNode PRECEDING() { return getToken(sql_parserParser.PRECEDING, 0); }
		public TerminalNode FOLLOWING() { return getToken(sql_parserParser.FOLLOWING, 0); }
		public TerminalNode ROW() { return getToken(sql_parserParser.ROW, 0); }
		public TerminalNode CURRENT() { return getToken(sql_parserParser.CURRENT, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public FrameBoundContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_frameBound; }
	}

	public final FrameBoundContext frameBound() throws RecognitionException {
		FrameBoundContext _localctx = new FrameBoundContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_frameBound);
		int _la;
		try {
			setState(823);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,95,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(816);
				match(UNBOUNDED);
				setState(817);
				((FrameBoundContext)_localctx).boundType = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==FOLLOWING || _la==PRECEDING) ) {
					((FrameBoundContext)_localctx).boundType = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(818);
				((FrameBoundContext)_localctx).boundType = match(CURRENT);
				setState(819);
				match(ROW);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(820);
				expression();
				setState(821);
				((FrameBoundContext)_localctx).boundType = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==FOLLOWING || _la==PRECEDING) ) {
					((FrameBoundContext)_localctx).boundType = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedNameListContext extends ParserRuleContext {
		public List<QualifiedNameContext> qualifiedName() {
			return getRuleContexts(QualifiedNameContext.class);
		}
		public QualifiedNameContext qualifiedName(int i) {
			return getRuleContext(QualifiedNameContext.class,i);
		}
		public QualifiedNameListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedNameList; }
	}

	public final QualifiedNameListContext qualifiedNameList() throws RecognitionException {
		QualifiedNameListContext _localctx = new QualifiedNameListContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_qualifiedNameList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(825);
			qualifiedName();
			setState(830);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(826);
				match(T__1);
				setState(827);
				qualifiedName();
				}
				}
				setState(832);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionNameContext extends ParserRuleContext {
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public TerminalNode FILTER() { return getToken(sql_parserParser.FILTER, 0); }
		public TerminalNode LEFT() { return getToken(sql_parserParser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(sql_parserParser.RIGHT, 0); }
		public FunctionNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionName; }
	}

	public final FunctionNameContext functionName() throws RecognitionException {
		FunctionNameContext _localctx = new FunctionNameContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_functionName);
		try {
			setState(837);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,97,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(833);
				qualifiedName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(834);
				match(FILTER);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(835);
				match(LEFT);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(836);
				match(RIGHT);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedNameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public QualifiedNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedName; }
	}

	public final QualifiedNameContext qualifiedName() throws RecognitionException {
		QualifiedNameContext _localctx = new QualifiedNameContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_qualifiedName);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(839);
			identifier();
			setState(844);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,98,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(840);
					match(T__4);
					setState(841);
					identifier();
					}
					} 
				}
				setState(846);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,98,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ErrorCapturingIdentifierContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ErrorCapturingIdentifierExtraContext errorCapturingIdentifierExtra() {
			return getRuleContext(ErrorCapturingIdentifierExtraContext.class,0);
		}
		public ErrorCapturingIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_errorCapturingIdentifier; }
	}

	public final ErrorCapturingIdentifierContext errorCapturingIdentifier() throws RecognitionException {
		ErrorCapturingIdentifierContext _localctx = new ErrorCapturingIdentifierContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_errorCapturingIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(847);
			identifier();
			setState(848);
			errorCapturingIdentifierExtra();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ErrorCapturingIdentifierExtraContext extends ParserRuleContext {
		public ErrorCapturingIdentifierExtraContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_errorCapturingIdentifierExtra; }
	 
		public ErrorCapturingIdentifierExtraContext() { }
		public void copyFrom(ErrorCapturingIdentifierExtraContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ErrorIdentContext extends ErrorCapturingIdentifierExtraContext {
		public List<TerminalNode> MINUS() { return getTokens(sql_parserParser.MINUS); }
		public TerminalNode MINUS(int i) {
			return getToken(sql_parserParser.MINUS, i);
		}
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public ErrorIdentContext(ErrorCapturingIdentifierExtraContext ctx) { copyFrom(ctx); }
	}
	public static class RealIdentContext extends ErrorCapturingIdentifierExtraContext {
		public RealIdentContext(ErrorCapturingIdentifierExtraContext ctx) { copyFrom(ctx); }
	}

	public final ErrorCapturingIdentifierExtraContext errorCapturingIdentifierExtra() throws RecognitionException {
		ErrorCapturingIdentifierExtraContext _localctx = new ErrorCapturingIdentifierExtraContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_errorCapturingIdentifierExtra);
		int _la;
		try {
			setState(857);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MINUS:
				_localctx = new ErrorIdentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(852); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(850);
					match(MINUS);
					setState(851);
					identifier();
					}
					}
					setState(854); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==MINUS );
				}
				break;
			case EOF:
			case T__0:
			case T__1:
			case T__3:
			case T__4:
			case ADD:
			case AFTER:
			case ALL:
			case ALTER:
			case ANALYZE:
			case AND:
			case ANTI:
			case ANY:
			case ARCHIVE:
			case ARRAY:
			case AS:
			case ASC:
			case AT:
			case AUTHORIZATION:
			case BETWEEN:
			case BOTH:
			case BUCKET:
			case BUCKETS:
			case BY:
			case CACHE:
			case CASCADE:
			case CASE:
			case CAST:
			case CHANGE:
			case CHECK:
			case CLEAR:
			case CLUSTER:
			case CLUSTERED:
			case CODEGEN:
			case COLLATE:
			case COLLECTION:
			case COLUMN:
			case COLUMNS:
			case COMMENT:
			case COMMIT:
			case COMPACT:
			case COMPACTIONS:
			case COMPUTE:
			case CONCATENATE:
			case CONSTRAINT:
			case COST:
			case CREATE:
			case CROSS:
			case CUBE:
			case CURRENT:
			case CURRENT_DATE:
			case CURRENT_TIME:
			case CURRENT_TIMESTAMP:
			case CURRENT_USER:
			case DATA:
			case DATABASE:
			case DATABASES:
			case DBPROPERTIES:
			case DEFINED:
			case DELETE:
			case DELIMITED:
			case DESC:
			case DESCRIBE:
			case DFS:
			case DIRECTORIES:
			case DIRECTORY:
			case DISTINCT:
			case DISTRIBUTE:
			case DIV:
			case DROP:
			case ELSE:
			case END:
			case ESCAPE:
			case ESCAPED:
			case EXCEPT:
			case EXCHANGE:
			case EXISTS:
			case EXPLAIN:
			case EXPORT:
			case EXTENDED:
			case EXTERNAL:
			case EXTRACT:
			case FALSE:
			case FETCH:
			case FIELDS:
			case FILTER:
			case FILEFORMAT:
			case FIRST:
			case FOLLOWING:
			case FOR:
			case FOREIGN:
			case FORMAT:
			case FORMATTED:
			case FROM:
			case FULL:
			case FUNCTION:
			case FUNCTIONS:
			case GLOBAL:
			case GRANT:
			case GROUP:
			case GROUPING:
			case HAVING:
			case IF:
			case IGNORE:
			case IMPORT:
			case IN:
			case INDEX:
			case INDEXES:
			case INNER:
			case INPATH:
			case INPUTFORMAT:
			case INSERT:
			case INTERSECT:
			case INTERVAL:
			case INTO:
			case IS:
			case ITEMS:
			case JOIN:
			case KEYS:
			case LAST:
			case LATERAL:
			case LAZY:
			case LEADING:
			case LEFT:
			case LIKE:
			case LIMIT:
			case LINES:
			case LIST:
			case LOAD:
			case LOCAL:
			case LOCATION:
			case LOCK:
			case LOCKS:
			case LOGICAL:
			case MACRO:
			case MAP:
			case MATCHED:
			case MERGE:
			case MSCK:
			case NAMESPACE:
			case NAMESPACES:
			case NATURAL:
			case NO:
			case NOT:
			case NULL:
			case NULLS:
			case OF:
			case ON:
			case ONLY:
			case OPTION:
			case OPTIONS:
			case OR:
			case ORDER:
			case OUT:
			case OUTER:
			case OUTPUTFORMAT:
			case OVER:
			case OVERLAPS:
			case OVERLAY:
			case OVERWRITE:
			case PARTITION:
			case PARTITIONED:
			case PARTITIONS:
			case PERCENTLIT:
			case PIVOT:
			case PLACING:
			case POSITION:
			case PRECEDING:
			case PRIMARY:
			case PRINCIPALS:
			case PROPERTIES:
			case PURGE:
			case QUERY:
			case RANGE:
			case RECORDREADER:
			case RECORDWRITER:
			case RECOVER:
			case REDUCE:
			case REFERENCES:
			case REFRESH:
			case RENAME:
			case REPAIR:
			case REPLACE:
			case RESET:
			case RESTRICT:
			case REVOKE:
			case RIGHT:
			case RLIKE:
			case ROLE:
			case ROLES:
			case ROLLBACK:
			case ROLLUP:
			case ROW:
			case ROWS:
			case SCHEMA:
			case SELECT:
			case SEMI:
			case SEPARATED:
			case SERDE:
			case SERDEPROPERTIES:
			case SESSION_USER:
			case SET:
			case SETMINUS:
			case SETS:
			case SHOW:
			case SKEWED:
			case SOME:
			case SORT:
			case SORTED:
			case START:
			case STATISTICS:
			case STORED:
			case STRATIFY:
			case STRUCT:
			case SUBSTR:
			case SUBSTRING:
			case TABLE:
			case TABLES:
			case TABLESAMPLE:
			case TBLPROPERTIES:
			case TEMPORARY:
			case TERMINATED:
			case THEN:
			case TO:
			case TOUCH:
			case TRAILING:
			case TRANSACTION:
			case TRANSACTIONS:
			case TRANSFORM:
			case TRIM:
			case TRUE:
			case TRUNCATE:
			case TYPE:
			case UNARCHIVE:
			case UNBOUNDED:
			case UNCACHE:
			case UNION:
			case UNIQUE:
			case UNKNOWN:
			case UNLOCK:
			case UNSET:
			case UPDATE:
			case USE:
			case USER:
			case USING:
			case VALUES:
			case VIEW:
			case VIEWS:
			case WHEN:
			case WHERE:
			case WINDOW:
			case WITH:
			case IDENTIFIER:
			case BACKQUOTED_IDENTIFIER:
				_localctx = new RealIdentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public StrictIdentifierContext strictIdentifier() {
			return getRuleContext(StrictIdentifierContext.class,0);
		}
		public StrictNonReservedContext strictNonReserved() {
			return getRuleContext(StrictNonReservedContext.class,0);
		}
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_identifier);
		try {
			setState(861);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(859);
				strictIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(860);
				strictNonReserved();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StrictIdentifierContext extends ParserRuleContext {
		public StrictIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strictIdentifier; }
	 
		public StrictIdentifierContext() { }
		public void copyFrom(StrictIdentifierContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class QuotedIdentifierAlternativeContext extends StrictIdentifierContext {
		public QuotedIdentifierContext quotedIdentifier() {
			return getRuleContext(QuotedIdentifierContext.class,0);
		}
		public QuotedIdentifierAlternativeContext(StrictIdentifierContext ctx) { copyFrom(ctx); }
	}
	public static class UnquotedIdentifierContext extends StrictIdentifierContext {
		public TerminalNode IDENTIFIER() { return getToken(sql_parserParser.IDENTIFIER, 0); }
		public AnsiNonReservedContext ansiNonReserved() {
			return getRuleContext(AnsiNonReservedContext.class,0);
		}
		public NonReservedContext nonReserved() {
			return getRuleContext(NonReservedContext.class,0);
		}
		public UnquotedIdentifierContext(StrictIdentifierContext ctx) { copyFrom(ctx); }
	}

	public final StrictIdentifierContext strictIdentifier() throws RecognitionException {
		StrictIdentifierContext _localctx = new StrictIdentifierContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_strictIdentifier);
		try {
			setState(867);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,102,_ctx) ) {
			case 1:
				_localctx = new UnquotedIdentifierContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(863);
				match(IDENTIFIER);
				}
				break;
			case 2:
				_localctx = new QuotedIdentifierAlternativeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(864);
				quotedIdentifier();
				}
				break;
			case 3:
				_localctx = new UnquotedIdentifierContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(865);
				ansiNonReserved();
				}
				break;
			case 4:
				_localctx = new UnquotedIdentifierContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(866);
				nonReserved();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QuotedIdentifierContext extends ParserRuleContext {
		public TerminalNode BACKQUOTED_IDENTIFIER() { return getToken(sql_parserParser.BACKQUOTED_IDENTIFIER, 0); }
		public QuotedIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quotedIdentifier; }
	}

	public final QuotedIdentifierContext quotedIdentifier() throws RecognitionException {
		QuotedIdentifierContext _localctx = new QuotedIdentifierContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_quotedIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(869);
			match(BACKQUOTED_IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	 
		public NumberContext() { }
		public void copyFrom(NumberContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class BigIntLiteralContext extends NumberContext {
		public TerminalNode BIGINT_LITERAL() { return getToken(sql_parserParser.BIGINT_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public BigIntLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class TinyIntLiteralContext extends NumberContext {
		public TerminalNode TINYINT_LITERAL() { return getToken(sql_parserParser.TINYINT_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public TinyIntLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class LegacyDecimalLiteralContext extends NumberContext {
		public TerminalNode EXPONENT_VALUE() { return getToken(sql_parserParser.EXPONENT_VALUE, 0); }
		public TerminalNode DECIMAL_VALUE() { return getToken(sql_parserParser.DECIMAL_VALUE, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public LegacyDecimalLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class BigDecimalLiteralContext extends NumberContext {
		public TerminalNode BIGDECIMAL_LITERAL() { return getToken(sql_parserParser.BIGDECIMAL_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public BigDecimalLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class DoubleLiteralContext extends NumberContext {
		public TerminalNode DOUBLE_LITERAL() { return getToken(sql_parserParser.DOUBLE_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public DoubleLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class IntegerLiteralContext extends NumberContext {
		public TerminalNode INTEGER_VALUE() { return getToken(sql_parserParser.INTEGER_VALUE, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public IntegerLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class SmallIntLiteralContext extends NumberContext {
		public TerminalNode SMALLINT_LITERAL() { return getToken(sql_parserParser.SMALLINT_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(sql_parserParser.MINUS, 0); }
		public SmallIntLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_number);
		int _la;
		try {
			setState(899);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,110,_ctx) ) {
			case 1:
				_localctx = new LegacyDecimalLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(872);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(871);
					match(MINUS);
					}
				}

				setState(874);
				_la = _input.LA(1);
				if ( !(_la==EXPONENT_VALUE || _la==DECIMAL_VALUE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 2:
				_localctx = new IntegerLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(876);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(875);
					match(MINUS);
					}
				}

				setState(878);
				match(INTEGER_VALUE);
				}
				break;
			case 3:
				_localctx = new BigIntLiteralContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(880);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(879);
					match(MINUS);
					}
				}

				setState(882);
				match(BIGINT_LITERAL);
				}
				break;
			case 4:
				_localctx = new SmallIntLiteralContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(884);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(883);
					match(MINUS);
					}
				}

				setState(886);
				match(SMALLINT_LITERAL);
				}
				break;
			case 5:
				_localctx = new TinyIntLiteralContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(888);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(887);
					match(MINUS);
					}
				}

				setState(890);
				match(TINYINT_LITERAL);
				}
				break;
			case 6:
				_localctx = new DoubleLiteralContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(892);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(891);
					match(MINUS);
					}
				}

				setState(894);
				match(DOUBLE_LITERAL);
				}
				break;
			case 7:
				_localctx = new BigDecimalLiteralContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(896);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(895);
					match(MINUS);
					}
				}

				setState(898);
				match(BIGDECIMAL_LITERAL);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AlterColumnActionContext extends ParserRuleContext {
		public Token setOrDrop;
		public TerminalNode TYPE() { return getToken(sql_parserParser.TYPE, 0); }
		public DataTypeContext dataType() {
			return getRuleContext(DataTypeContext.class,0);
		}
		public CommentSpecContext commentSpec() {
			return getRuleContext(CommentSpecContext.class,0);
		}
		public ColPositionContext colPosition() {
			return getRuleContext(ColPositionContext.class,0);
		}
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public TerminalNode SET() { return getToken(sql_parserParser.SET, 0); }
		public TerminalNode DROP() { return getToken(sql_parserParser.DROP, 0); }
		public AlterColumnActionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alterColumnAction; }
	}

	public final AlterColumnActionContext alterColumnAction() throws RecognitionException {
		AlterColumnActionContext _localctx = new AlterColumnActionContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_alterColumnAction);
		int _la;
		try {
			setState(908);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TYPE:
				enterOuterAlt(_localctx, 1);
				{
				setState(901);
				match(TYPE);
				setState(902);
				dataType();
				}
				break;
			case COMMENT:
				enterOuterAlt(_localctx, 2);
				{
				setState(903);
				commentSpec();
				}
				break;
			case AFTER:
			case FIRST:
				enterOuterAlt(_localctx, 3);
				{
				setState(904);
				colPosition();
				}
				break;
			case DROP:
			case SET:
				enterOuterAlt(_localctx, 4);
				{
				setState(905);
				((AlterColumnActionContext)_localctx).setOrDrop = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==DROP || _la==SET) ) {
					((AlterColumnActionContext)_localctx).setOrDrop = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(906);
				match(NOT);
				setState(907);
				match(NULL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnsiNonReservedContext extends ParserRuleContext {
		public TerminalNode ADD() { return getToken(sql_parserParser.ADD, 0); }
		public TerminalNode AFTER() { return getToken(sql_parserParser.AFTER, 0); }
		public TerminalNode ALTER() { return getToken(sql_parserParser.ALTER, 0); }
		public TerminalNode ANALYZE() { return getToken(sql_parserParser.ANALYZE, 0); }
		public TerminalNode ANTI() { return getToken(sql_parserParser.ANTI, 0); }
		public TerminalNode ARCHIVE() { return getToken(sql_parserParser.ARCHIVE, 0); }
		public TerminalNode ARRAY() { return getToken(sql_parserParser.ARRAY, 0); }
		public TerminalNode ASC() { return getToken(sql_parserParser.ASC, 0); }
		public TerminalNode AT() { return getToken(sql_parserParser.AT, 0); }
		public TerminalNode BETWEEN() { return getToken(sql_parserParser.BETWEEN, 0); }
		public TerminalNode BUCKET() { return getToken(sql_parserParser.BUCKET, 0); }
		public TerminalNode BUCKETS() { return getToken(sql_parserParser.BUCKETS, 0); }
		public TerminalNode BY() { return getToken(sql_parserParser.BY, 0); }
		public TerminalNode CACHE() { return getToken(sql_parserParser.CACHE, 0); }
		public TerminalNode CASCADE() { return getToken(sql_parserParser.CASCADE, 0); }
		public TerminalNode CHANGE() { return getToken(sql_parserParser.CHANGE, 0); }
		public TerminalNode CLEAR() { return getToken(sql_parserParser.CLEAR, 0); }
		public TerminalNode CLUSTER() { return getToken(sql_parserParser.CLUSTER, 0); }
		public TerminalNode CLUSTERED() { return getToken(sql_parserParser.CLUSTERED, 0); }
		public TerminalNode CODEGEN() { return getToken(sql_parserParser.CODEGEN, 0); }
		public TerminalNode COLLECTION() { return getToken(sql_parserParser.COLLECTION, 0); }
		public TerminalNode COLUMNS() { return getToken(sql_parserParser.COLUMNS, 0); }
		public TerminalNode COMMENT() { return getToken(sql_parserParser.COMMENT, 0); }
		public TerminalNode COMMIT() { return getToken(sql_parserParser.COMMIT, 0); }
		public TerminalNode COMPACT() { return getToken(sql_parserParser.COMPACT, 0); }
		public TerminalNode COMPACTIONS() { return getToken(sql_parserParser.COMPACTIONS, 0); }
		public TerminalNode COMPUTE() { return getToken(sql_parserParser.COMPUTE, 0); }
		public TerminalNode CONCATENATE() { return getToken(sql_parserParser.CONCATENATE, 0); }
		public TerminalNode COST() { return getToken(sql_parserParser.COST, 0); }
		public TerminalNode CUBE() { return getToken(sql_parserParser.CUBE, 0); }
		public TerminalNode CURRENT() { return getToken(sql_parserParser.CURRENT, 0); }
		public TerminalNode DATA() { return getToken(sql_parserParser.DATA, 0); }
		public TerminalNode DATABASE() { return getToken(sql_parserParser.DATABASE, 0); }
		public TerminalNode DATABASES() { return getToken(sql_parserParser.DATABASES, 0); }
		public TerminalNode DBPROPERTIES() { return getToken(sql_parserParser.DBPROPERTIES, 0); }
		public TerminalNode DEFINED() { return getToken(sql_parserParser.DEFINED, 0); }
		public TerminalNode DELETE() { return getToken(sql_parserParser.DELETE, 0); }
		public TerminalNode DELIMITED() { return getToken(sql_parserParser.DELIMITED, 0); }
		public TerminalNode DESC() { return getToken(sql_parserParser.DESC, 0); }
		public TerminalNode DESCRIBE() { return getToken(sql_parserParser.DESCRIBE, 0); }
		public TerminalNode DFS() { return getToken(sql_parserParser.DFS, 0); }
		public TerminalNode DIRECTORIES() { return getToken(sql_parserParser.DIRECTORIES, 0); }
		public TerminalNode DIRECTORY() { return getToken(sql_parserParser.DIRECTORY, 0); }
		public TerminalNode DISTRIBUTE() { return getToken(sql_parserParser.DISTRIBUTE, 0); }
		public TerminalNode DIV() { return getToken(sql_parserParser.DIV, 0); }
		public TerminalNode DROP() { return getToken(sql_parserParser.DROP, 0); }
		public TerminalNode ESCAPED() { return getToken(sql_parserParser.ESCAPED, 0); }
		public TerminalNode EXCHANGE() { return getToken(sql_parserParser.EXCHANGE, 0); }
		public TerminalNode EXISTS() { return getToken(sql_parserParser.EXISTS, 0); }
		public TerminalNode EXPLAIN() { return getToken(sql_parserParser.EXPLAIN, 0); }
		public TerminalNode EXPORT() { return getToken(sql_parserParser.EXPORT, 0); }
		public TerminalNode EXTENDED() { return getToken(sql_parserParser.EXTENDED, 0); }
		public TerminalNode EXTERNAL() { return getToken(sql_parserParser.EXTERNAL, 0); }
		public TerminalNode EXTRACT() { return getToken(sql_parserParser.EXTRACT, 0); }
		public TerminalNode FIELDS() { return getToken(sql_parserParser.FIELDS, 0); }
		public TerminalNode FILEFORMAT() { return getToken(sql_parserParser.FILEFORMAT, 0); }
		public TerminalNode FIRST() { return getToken(sql_parserParser.FIRST, 0); }
		public TerminalNode FOLLOWING() { return getToken(sql_parserParser.FOLLOWING, 0); }
		public TerminalNode FORMAT() { return getToken(sql_parserParser.FORMAT, 0); }
		public TerminalNode FORMATTED() { return getToken(sql_parserParser.FORMATTED, 0); }
		public TerminalNode FUNCTION() { return getToken(sql_parserParser.FUNCTION, 0); }
		public TerminalNode FUNCTIONS() { return getToken(sql_parserParser.FUNCTIONS, 0); }
		public TerminalNode GLOBAL() { return getToken(sql_parserParser.GLOBAL, 0); }
		public TerminalNode GROUPING() { return getToken(sql_parserParser.GROUPING, 0); }
		public TerminalNode IF() { return getToken(sql_parserParser.IF, 0); }
		public TerminalNode IGNORE() { return getToken(sql_parserParser.IGNORE, 0); }
		public TerminalNode IMPORT() { return getToken(sql_parserParser.IMPORT, 0); }
		public TerminalNode INDEX() { return getToken(sql_parserParser.INDEX, 0); }
		public TerminalNode INDEXES() { return getToken(sql_parserParser.INDEXES, 0); }
		public TerminalNode INPATH() { return getToken(sql_parserParser.INPATH, 0); }
		public TerminalNode INPUTFORMAT() { return getToken(sql_parserParser.INPUTFORMAT, 0); }
		public TerminalNode INSERT() { return getToken(sql_parserParser.INSERT, 0); }
		public TerminalNode INTERVAL() { return getToken(sql_parserParser.INTERVAL, 0); }
		public TerminalNode ITEMS() { return getToken(sql_parserParser.ITEMS, 0); }
		public TerminalNode KEYS() { return getToken(sql_parserParser.KEYS, 0); }
		public TerminalNode LAST() { return getToken(sql_parserParser.LAST, 0); }
		public TerminalNode LATERAL() { return getToken(sql_parserParser.LATERAL, 0); }
		public TerminalNode LAZY() { return getToken(sql_parserParser.LAZY, 0); }
		public TerminalNode LIKE() { return getToken(sql_parserParser.LIKE, 0); }
		public TerminalNode LIMIT() { return getToken(sql_parserParser.LIMIT, 0); }
		public TerminalNode LINES() { return getToken(sql_parserParser.LINES, 0); }
		public TerminalNode LIST() { return getToken(sql_parserParser.LIST, 0); }
		public TerminalNode LOAD() { return getToken(sql_parserParser.LOAD, 0); }
		public TerminalNode LOCAL() { return getToken(sql_parserParser.LOCAL, 0); }
		public TerminalNode LOCATION() { return getToken(sql_parserParser.LOCATION, 0); }
		public TerminalNode LOCK() { return getToken(sql_parserParser.LOCK, 0); }
		public TerminalNode LOCKS() { return getToken(sql_parserParser.LOCKS, 0); }
		public TerminalNode LOGICAL() { return getToken(sql_parserParser.LOGICAL, 0); }
		public TerminalNode MACRO() { return getToken(sql_parserParser.MACRO, 0); }
		public TerminalNode MAP() { return getToken(sql_parserParser.MAP, 0); }
		public TerminalNode MATCHED() { return getToken(sql_parserParser.MATCHED, 0); }
		public TerminalNode MERGE() { return getToken(sql_parserParser.MERGE, 0); }
		public TerminalNode MSCK() { return getToken(sql_parserParser.MSCK, 0); }
		public TerminalNode NAMESPACE() { return getToken(sql_parserParser.NAMESPACE, 0); }
		public TerminalNode NAMESPACES() { return getToken(sql_parserParser.NAMESPACES, 0); }
		public TerminalNode NO() { return getToken(sql_parserParser.NO, 0); }
		public TerminalNode NULLS() { return getToken(sql_parserParser.NULLS, 0); }
		public TerminalNode OF() { return getToken(sql_parserParser.OF, 0); }
		public TerminalNode OPTION() { return getToken(sql_parserParser.OPTION, 0); }
		public TerminalNode OPTIONS() { return getToken(sql_parserParser.OPTIONS, 0); }
		public TerminalNode OUT() { return getToken(sql_parserParser.OUT, 0); }
		public TerminalNode OUTPUTFORMAT() { return getToken(sql_parserParser.OUTPUTFORMAT, 0); }
		public TerminalNode OVER() { return getToken(sql_parserParser.OVER, 0); }
		public TerminalNode OVERLAY() { return getToken(sql_parserParser.OVERLAY, 0); }
		public TerminalNode OVERWRITE() { return getToken(sql_parserParser.OVERWRITE, 0); }
		public TerminalNode PARTITION() { return getToken(sql_parserParser.PARTITION, 0); }
		public TerminalNode PARTITIONED() { return getToken(sql_parserParser.PARTITIONED, 0); }
		public TerminalNode PARTITIONS() { return getToken(sql_parserParser.PARTITIONS, 0); }
		public TerminalNode PERCENTLIT() { return getToken(sql_parserParser.PERCENTLIT, 0); }
		public TerminalNode PIVOT() { return getToken(sql_parserParser.PIVOT, 0); }
		public TerminalNode PLACING() { return getToken(sql_parserParser.PLACING, 0); }
		public TerminalNode POSITION() { return getToken(sql_parserParser.POSITION, 0); }
		public TerminalNode PRECEDING() { return getToken(sql_parserParser.PRECEDING, 0); }
		public TerminalNode PRINCIPALS() { return getToken(sql_parserParser.PRINCIPALS, 0); }
		public TerminalNode PROPERTIES() { return getToken(sql_parserParser.PROPERTIES, 0); }
		public TerminalNode PURGE() { return getToken(sql_parserParser.PURGE, 0); }
		public TerminalNode QUERY() { return getToken(sql_parserParser.QUERY, 0); }
		public TerminalNode RANGE() { return getToken(sql_parserParser.RANGE, 0); }
		public TerminalNode RECORDREADER() { return getToken(sql_parserParser.RECORDREADER, 0); }
		public TerminalNode RECORDWRITER() { return getToken(sql_parserParser.RECORDWRITER, 0); }
		public TerminalNode RECOVER() { return getToken(sql_parserParser.RECOVER, 0); }
		public TerminalNode REDUCE() { return getToken(sql_parserParser.REDUCE, 0); }
		public TerminalNode REFRESH() { return getToken(sql_parserParser.REFRESH, 0); }
		public TerminalNode RENAME() { return getToken(sql_parserParser.RENAME, 0); }
		public TerminalNode REPAIR() { return getToken(sql_parserParser.REPAIR, 0); }
		public TerminalNode REPLACE() { return getToken(sql_parserParser.REPLACE, 0); }
		public TerminalNode RESET() { return getToken(sql_parserParser.RESET, 0); }
		public TerminalNode RESTRICT() { return getToken(sql_parserParser.RESTRICT, 0); }
		public TerminalNode REVOKE() { return getToken(sql_parserParser.REVOKE, 0); }
		public TerminalNode RLIKE() { return getToken(sql_parserParser.RLIKE, 0); }
		public TerminalNode ROLE() { return getToken(sql_parserParser.ROLE, 0); }
		public TerminalNode ROLES() { return getToken(sql_parserParser.ROLES, 0); }
		public TerminalNode ROLLBACK() { return getToken(sql_parserParser.ROLLBACK, 0); }
		public TerminalNode ROLLUP() { return getToken(sql_parserParser.ROLLUP, 0); }
		public TerminalNode ROW() { return getToken(sql_parserParser.ROW, 0); }
		public TerminalNode ROWS() { return getToken(sql_parserParser.ROWS, 0); }
		public TerminalNode SCHEMA() { return getToken(sql_parserParser.SCHEMA, 0); }
		public TerminalNode SEMI() { return getToken(sql_parserParser.SEMI, 0); }
		public TerminalNode SEPARATED() { return getToken(sql_parserParser.SEPARATED, 0); }
		public TerminalNode SERDE() { return getToken(sql_parserParser.SERDE, 0); }
		public TerminalNode SERDEPROPERTIES() { return getToken(sql_parserParser.SERDEPROPERTIES, 0); }
		public TerminalNode SET() { return getToken(sql_parserParser.SET, 0); }
		public TerminalNode SETMINUS() { return getToken(sql_parserParser.SETMINUS, 0); }
		public TerminalNode SETS() { return getToken(sql_parserParser.SETS, 0); }
		public TerminalNode SHOW() { return getToken(sql_parserParser.SHOW, 0); }
		public TerminalNode SKEWED() { return getToken(sql_parserParser.SKEWED, 0); }
		public TerminalNode SORT() { return getToken(sql_parserParser.SORT, 0); }
		public TerminalNode SORTED() { return getToken(sql_parserParser.SORTED, 0); }
		public TerminalNode START() { return getToken(sql_parserParser.START, 0); }
		public TerminalNode STATISTICS() { return getToken(sql_parserParser.STATISTICS, 0); }
		public TerminalNode STORED() { return getToken(sql_parserParser.STORED, 0); }
		public TerminalNode STRATIFY() { return getToken(sql_parserParser.STRATIFY, 0); }
		public TerminalNode STRUCT() { return getToken(sql_parserParser.STRUCT, 0); }
		public TerminalNode SUBSTR() { return getToken(sql_parserParser.SUBSTR, 0); }
		public TerminalNode SUBSTRING() { return getToken(sql_parserParser.SUBSTRING, 0); }
		public TerminalNode TABLES() { return getToken(sql_parserParser.TABLES, 0); }
		public TerminalNode TABLESAMPLE() { return getToken(sql_parserParser.TABLESAMPLE, 0); }
		public TerminalNode TBLPROPERTIES() { return getToken(sql_parserParser.TBLPROPERTIES, 0); }
		public TerminalNode TEMPORARY() { return getToken(sql_parserParser.TEMPORARY, 0); }
		public TerminalNode TERMINATED() { return getToken(sql_parserParser.TERMINATED, 0); }
		public TerminalNode TOUCH() { return getToken(sql_parserParser.TOUCH, 0); }
		public TerminalNode TRANSACTION() { return getToken(sql_parserParser.TRANSACTION, 0); }
		public TerminalNode TRANSACTIONS() { return getToken(sql_parserParser.TRANSACTIONS, 0); }
		public TerminalNode TRANSFORM() { return getToken(sql_parserParser.TRANSFORM, 0); }
		public TerminalNode TRIM() { return getToken(sql_parserParser.TRIM, 0); }
		public TerminalNode TRUE() { return getToken(sql_parserParser.TRUE, 0); }
		public TerminalNode TRUNCATE() { return getToken(sql_parserParser.TRUNCATE, 0); }
		public TerminalNode TYPE() { return getToken(sql_parserParser.TYPE, 0); }
		public TerminalNode UNARCHIVE() { return getToken(sql_parserParser.UNARCHIVE, 0); }
		public TerminalNode UNBOUNDED() { return getToken(sql_parserParser.UNBOUNDED, 0); }
		public TerminalNode UNCACHE() { return getToken(sql_parserParser.UNCACHE, 0); }
		public TerminalNode UNLOCK() { return getToken(sql_parserParser.UNLOCK, 0); }
		public TerminalNode UNSET() { return getToken(sql_parserParser.UNSET, 0); }
		public TerminalNode UPDATE() { return getToken(sql_parserParser.UPDATE, 0); }
		public TerminalNode USE() { return getToken(sql_parserParser.USE, 0); }
		public TerminalNode VALUES() { return getToken(sql_parserParser.VALUES, 0); }
		public TerminalNode VIEW() { return getToken(sql_parserParser.VIEW, 0); }
		public TerminalNode VIEWS() { return getToken(sql_parserParser.VIEWS, 0); }
		public TerminalNode WINDOW() { return getToken(sql_parserParser.WINDOW, 0); }
		public AnsiNonReservedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ansiNonReserved; }
	}

	public final AnsiNonReservedContext ansiNonReserved() throws RecognitionException {
		AnsiNonReservedContext _localctx = new AnsiNonReservedContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_ansiNonReserved);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(910);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ADD) | (1L << AFTER) | (1L << ALTER) | (1L << ANALYZE) | (1L << ANTI) | (1L << ARCHIVE) | (1L << ARRAY) | (1L << ASC) | (1L << AT) | (1L << BETWEEN) | (1L << BUCKET) | (1L << BUCKETS) | (1L << BY) | (1L << CACHE) | (1L << CASCADE) | (1L << CHANGE) | (1L << CLEAR) | (1L << CLUSTER) | (1L << CLUSTERED) | (1L << CODEGEN) | (1L << COLLECTION) | (1L << COLUMNS) | (1L << COMMENT) | (1L << COMMIT) | (1L << COMPACT) | (1L << COMPACTIONS) | (1L << COMPUTE) | (1L << CONCATENATE) | (1L << COST) | (1L << CUBE) | (1L << CURRENT) | (1L << DATA) | (1L << DATABASE) | (1L << DATABASES) | (1L << DBPROPERTIES) | (1L << DEFINED) | (1L << DELETE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (DELIMITED - 64)) | (1L << (DESC - 64)) | (1L << (DESCRIBE - 64)) | (1L << (DFS - 64)) | (1L << (DIRECTORIES - 64)) | (1L << (DIRECTORY - 64)) | (1L << (DISTRIBUTE - 64)) | (1L << (DIV - 64)) | (1L << (DROP - 64)) | (1L << (ESCAPED - 64)) | (1L << (EXCHANGE - 64)) | (1L << (EXISTS - 64)) | (1L << (EXPLAIN - 64)) | (1L << (EXPORT - 64)) | (1L << (EXTENDED - 64)) | (1L << (EXTERNAL - 64)) | (1L << (EXTRACT - 64)) | (1L << (FIELDS - 64)) | (1L << (FILEFORMAT - 64)) | (1L << (FIRST - 64)) | (1L << (FOLLOWING - 64)) | (1L << (FORMAT - 64)) | (1L << (FORMATTED - 64)) | (1L << (FUNCTION - 64)) | (1L << (FUNCTIONS - 64)) | (1L << (GLOBAL - 64)) | (1L << (GROUPING - 64)) | (1L << (IF - 64)) | (1L << (IGNORE - 64)) | (1L << (IMPORT - 64)) | (1L << (INDEX - 64)) | (1L << (INDEXES - 64)) | (1L << (INPATH - 64)) | (1L << (INPUTFORMAT - 64)) | (1L << (INSERT - 64)) | (1L << (INTERVAL - 64)) | (1L << (ITEMS - 64)) | (1L << (KEYS - 64)) | (1L << (LAST - 64)) | (1L << (LATERAL - 64)) | (1L << (LAZY - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LIKE - 128)) | (1L << (LIMIT - 128)) | (1L << (LINES - 128)) | (1L << (LIST - 128)) | (1L << (LOAD - 128)) | (1L << (LOCAL - 128)) | (1L << (LOCATION - 128)) | (1L << (LOCK - 128)) | (1L << (LOCKS - 128)) | (1L << (LOGICAL - 128)) | (1L << (MACRO - 128)) | (1L << (MAP - 128)) | (1L << (MATCHED - 128)) | (1L << (MERGE - 128)) | (1L << (MSCK - 128)) | (1L << (NAMESPACE - 128)) | (1L << (NAMESPACES - 128)) | (1L << (NO - 128)) | (1L << (NULLS - 128)) | (1L << (OF - 128)) | (1L << (OPTION - 128)) | (1L << (OPTIONS - 128)) | (1L << (OUT - 128)) | (1L << (OUTPUTFORMAT - 128)) | (1L << (OVER - 128)) | (1L << (OVERLAY - 128)) | (1L << (OVERWRITE - 128)) | (1L << (PARTITION - 128)) | (1L << (PARTITIONED - 128)) | (1L << (PARTITIONS - 128)) | (1L << (PERCENTLIT - 128)) | (1L << (PIVOT - 128)) | (1L << (PLACING - 128)) | (1L << (POSITION - 128)) | (1L << (PRECEDING - 128)) | (1L << (PRINCIPALS - 128)) | (1L << (PROPERTIES - 128)) | (1L << (PURGE - 128)) | (1L << (QUERY - 128)) | (1L << (RANGE - 128)) | (1L << (RECORDREADER - 128)) | (1L << (RECORDWRITER - 128)) | (1L << (RECOVER - 128)) | (1L << (REDUCE - 128)) | (1L << (REFRESH - 128)) | (1L << (RENAME - 128)) | (1L << (REPAIR - 128)) | (1L << (REPLACE - 128)) | (1L << (RESET - 128)) | (1L << (RESTRICT - 128)) | (1L << (REVOKE - 128)) | (1L << (RLIKE - 128)))) != 0) || ((((_la - 192)) & ~0x3f) == 0 && ((1L << (_la - 192)) & ((1L << (ROLE - 192)) | (1L << (ROLES - 192)) | (1L << (ROLLBACK - 192)) | (1L << (ROLLUP - 192)) | (1L << (ROW - 192)) | (1L << (ROWS - 192)) | (1L << (SCHEMA - 192)) | (1L << (SEMI - 192)) | (1L << (SEPARATED - 192)) | (1L << (SERDE - 192)) | (1L << (SERDEPROPERTIES - 192)) | (1L << (SET - 192)) | (1L << (SETMINUS - 192)) | (1L << (SETS - 192)) | (1L << (SHOW - 192)) | (1L << (SKEWED - 192)) | (1L << (SORT - 192)) | (1L << (SORTED - 192)) | (1L << (START - 192)) | (1L << (STATISTICS - 192)) | (1L << (STORED - 192)) | (1L << (STRATIFY - 192)) | (1L << (STRUCT - 192)) | (1L << (SUBSTR - 192)) | (1L << (SUBSTRING - 192)) | (1L << (TABLES - 192)) | (1L << (TABLESAMPLE - 192)) | (1L << (TBLPROPERTIES - 192)) | (1L << (TEMPORARY - 192)) | (1L << (TERMINATED - 192)) | (1L << (TOUCH - 192)) | (1L << (TRANSACTION - 192)) | (1L << (TRANSACTIONS - 192)) | (1L << (TRANSFORM - 192)) | (1L << (TRIM - 192)) | (1L << (TRUE - 192)) | (1L << (TRUNCATE - 192)) | (1L << (TYPE - 192)) | (1L << (UNARCHIVE - 192)) | (1L << (UNBOUNDED - 192)) | (1L << (UNCACHE - 192)) | (1L << (UNLOCK - 192)) | (1L << (UNSET - 192)) | (1L << (UPDATE - 192)) | (1L << (USE - 192)) | (1L << (VALUES - 192)) | (1L << (VIEW - 192)) | (1L << (VIEWS - 192)) | (1L << (WINDOW - 192)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StrictNonReservedContext extends ParserRuleContext {
		public TerminalNode ANTI() { return getToken(sql_parserParser.ANTI, 0); }
		public TerminalNode CROSS() { return getToken(sql_parserParser.CROSS, 0); }
		public TerminalNode EXCEPT() { return getToken(sql_parserParser.EXCEPT, 0); }
		public TerminalNode FULL() { return getToken(sql_parserParser.FULL, 0); }
		public TerminalNode INNER() { return getToken(sql_parserParser.INNER, 0); }
		public TerminalNode INTERSECT() { return getToken(sql_parserParser.INTERSECT, 0); }
		public TerminalNode JOIN() { return getToken(sql_parserParser.JOIN, 0); }
		public TerminalNode LEFT() { return getToken(sql_parserParser.LEFT, 0); }
		public TerminalNode NATURAL() { return getToken(sql_parserParser.NATURAL, 0); }
		public TerminalNode ON() { return getToken(sql_parserParser.ON, 0); }
		public TerminalNode RIGHT() { return getToken(sql_parserParser.RIGHT, 0); }
		public TerminalNode SEMI() { return getToken(sql_parserParser.SEMI, 0); }
		public TerminalNode SETMINUS() { return getToken(sql_parserParser.SETMINUS, 0); }
		public TerminalNode UNION() { return getToken(sql_parserParser.UNION, 0); }
		public TerminalNode USING() { return getToken(sql_parserParser.USING, 0); }
		public StrictNonReservedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strictNonReserved; }
	}

	public final StrictNonReservedContext strictNonReserved() throws RecognitionException {
		StrictNonReservedContext _localctx = new StrictNonReservedContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_strictNonReserved);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(912);
			_la = _input.LA(1);
			if ( !(((((_la - 15)) & ~0x3f) == 0 && ((1L << (_la - 15)) & ((1L << (ANTI - 15)) | (1L << (CROSS - 15)) | (1L << (EXCEPT - 15)))) != 0) || ((((_la - 98)) & ~0x3f) == 0 && ((1L << (_la - 98)) & ((1L << (FULL - 98)) | (1L << (INNER - 98)) | (1L << (INTERSECT - 98)) | (1L << (JOIN - 98)) | (1L << (LEFT - 98)) | (1L << (NATURAL - 98)) | (1L << (ON - 98)))) != 0) || ((((_la - 190)) & ~0x3f) == 0 && ((1L << (_la - 190)) & ((1L << (RIGHT - 190)) | (1L << (SEMI - 190)) | (1L << (SETMINUS - 190)) | (1L << (UNION - 190)) | (1L << (USING - 190)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NonReservedContext extends ParserRuleContext {
		public TerminalNode ADD() { return getToken(sql_parserParser.ADD, 0); }
		public TerminalNode AFTER() { return getToken(sql_parserParser.AFTER, 0); }
		public TerminalNode ALL() { return getToken(sql_parserParser.ALL, 0); }
		public TerminalNode ALTER() { return getToken(sql_parserParser.ALTER, 0); }
		public TerminalNode ANALYZE() { return getToken(sql_parserParser.ANALYZE, 0); }
		public TerminalNode AND() { return getToken(sql_parserParser.AND, 0); }
		public TerminalNode ANY() { return getToken(sql_parserParser.ANY, 0); }
		public TerminalNode ARCHIVE() { return getToken(sql_parserParser.ARCHIVE, 0); }
		public TerminalNode ARRAY() { return getToken(sql_parserParser.ARRAY, 0); }
		public TerminalNode AS() { return getToken(sql_parserParser.AS, 0); }
		public TerminalNode ASC() { return getToken(sql_parserParser.ASC, 0); }
		public TerminalNode AT() { return getToken(sql_parserParser.AT, 0); }
		public TerminalNode AUTHORIZATION() { return getToken(sql_parserParser.AUTHORIZATION, 0); }
		public TerminalNode BETWEEN() { return getToken(sql_parserParser.BETWEEN, 0); }
		public TerminalNode BOTH() { return getToken(sql_parserParser.BOTH, 0); }
		public TerminalNode BUCKET() { return getToken(sql_parserParser.BUCKET, 0); }
		public TerminalNode BUCKETS() { return getToken(sql_parserParser.BUCKETS, 0); }
		public TerminalNode BY() { return getToken(sql_parserParser.BY, 0); }
		public TerminalNode CACHE() { return getToken(sql_parserParser.CACHE, 0); }
		public TerminalNode CASCADE() { return getToken(sql_parserParser.CASCADE, 0); }
		public TerminalNode CASE() { return getToken(sql_parserParser.CASE, 0); }
		public TerminalNode CAST() { return getToken(sql_parserParser.CAST, 0); }
		public TerminalNode CHANGE() { return getToken(sql_parserParser.CHANGE, 0); }
		public TerminalNode CHECK() { return getToken(sql_parserParser.CHECK, 0); }
		public TerminalNode CLEAR() { return getToken(sql_parserParser.CLEAR, 0); }
		public TerminalNode CLUSTER() { return getToken(sql_parserParser.CLUSTER, 0); }
		public TerminalNode CLUSTERED() { return getToken(sql_parserParser.CLUSTERED, 0); }
		public TerminalNode CODEGEN() { return getToken(sql_parserParser.CODEGEN, 0); }
		public TerminalNode COLLATE() { return getToken(sql_parserParser.COLLATE, 0); }
		public TerminalNode COLLECTION() { return getToken(sql_parserParser.COLLECTION, 0); }
		public TerminalNode COLUMN() { return getToken(sql_parserParser.COLUMN, 0); }
		public TerminalNode COLUMNS() { return getToken(sql_parserParser.COLUMNS, 0); }
		public TerminalNode COMMENT() { return getToken(sql_parserParser.COMMENT, 0); }
		public TerminalNode COMMIT() { return getToken(sql_parserParser.COMMIT, 0); }
		public TerminalNode COMPACT() { return getToken(sql_parserParser.COMPACT, 0); }
		public TerminalNode COMPACTIONS() { return getToken(sql_parserParser.COMPACTIONS, 0); }
		public TerminalNode COMPUTE() { return getToken(sql_parserParser.COMPUTE, 0); }
		public TerminalNode CONCATENATE() { return getToken(sql_parserParser.CONCATENATE, 0); }
		public TerminalNode CONSTRAINT() { return getToken(sql_parserParser.CONSTRAINT, 0); }
		public TerminalNode COST() { return getToken(sql_parserParser.COST, 0); }
		public TerminalNode CREATE() { return getToken(sql_parserParser.CREATE, 0); }
		public TerminalNode CUBE() { return getToken(sql_parserParser.CUBE, 0); }
		public TerminalNode CURRENT() { return getToken(sql_parserParser.CURRENT, 0); }
		public TerminalNode CURRENT_DATE() { return getToken(sql_parserParser.CURRENT_DATE, 0); }
		public TerminalNode CURRENT_TIME() { return getToken(sql_parserParser.CURRENT_TIME, 0); }
		public TerminalNode CURRENT_TIMESTAMP() { return getToken(sql_parserParser.CURRENT_TIMESTAMP, 0); }
		public TerminalNode CURRENT_USER() { return getToken(sql_parserParser.CURRENT_USER, 0); }
		public TerminalNode DATA() { return getToken(sql_parserParser.DATA, 0); }
		public TerminalNode DATABASE() { return getToken(sql_parserParser.DATABASE, 0); }
		public TerminalNode DATABASES() { return getToken(sql_parserParser.DATABASES, 0); }
		public TerminalNode DBPROPERTIES() { return getToken(sql_parserParser.DBPROPERTIES, 0); }
		public TerminalNode DEFINED() { return getToken(sql_parserParser.DEFINED, 0); }
		public TerminalNode DELETE() { return getToken(sql_parserParser.DELETE, 0); }
		public TerminalNode DELIMITED() { return getToken(sql_parserParser.DELIMITED, 0); }
		public TerminalNode DESC() { return getToken(sql_parserParser.DESC, 0); }
		public TerminalNode DESCRIBE() { return getToken(sql_parserParser.DESCRIBE, 0); }
		public TerminalNode DFS() { return getToken(sql_parserParser.DFS, 0); }
		public TerminalNode DIRECTORIES() { return getToken(sql_parserParser.DIRECTORIES, 0); }
		public TerminalNode DIRECTORY() { return getToken(sql_parserParser.DIRECTORY, 0); }
		public TerminalNode DISTINCT() { return getToken(sql_parserParser.DISTINCT, 0); }
		public TerminalNode DISTRIBUTE() { return getToken(sql_parserParser.DISTRIBUTE, 0); }
		public TerminalNode DIV() { return getToken(sql_parserParser.DIV, 0); }
		public TerminalNode DROP() { return getToken(sql_parserParser.DROP, 0); }
		public TerminalNode ELSE() { return getToken(sql_parserParser.ELSE, 0); }
		public TerminalNode END() { return getToken(sql_parserParser.END, 0); }
		public TerminalNode ESCAPE() { return getToken(sql_parserParser.ESCAPE, 0); }
		public TerminalNode ESCAPED() { return getToken(sql_parserParser.ESCAPED, 0); }
		public TerminalNode EXCHANGE() { return getToken(sql_parserParser.EXCHANGE, 0); }
		public TerminalNode EXISTS() { return getToken(sql_parserParser.EXISTS, 0); }
		public TerminalNode EXPLAIN() { return getToken(sql_parserParser.EXPLAIN, 0); }
		public TerminalNode EXPORT() { return getToken(sql_parserParser.EXPORT, 0); }
		public TerminalNode EXTENDED() { return getToken(sql_parserParser.EXTENDED, 0); }
		public TerminalNode EXTERNAL() { return getToken(sql_parserParser.EXTERNAL, 0); }
		public TerminalNode EXTRACT() { return getToken(sql_parserParser.EXTRACT, 0); }
		public TerminalNode FALSE() { return getToken(sql_parserParser.FALSE, 0); }
		public TerminalNode FETCH() { return getToken(sql_parserParser.FETCH, 0); }
		public TerminalNode FILTER() { return getToken(sql_parserParser.FILTER, 0); }
		public TerminalNode FIELDS() { return getToken(sql_parserParser.FIELDS, 0); }
		public TerminalNode FILEFORMAT() { return getToken(sql_parserParser.FILEFORMAT, 0); }
		public TerminalNode FIRST() { return getToken(sql_parserParser.FIRST, 0); }
		public TerminalNode FOLLOWING() { return getToken(sql_parserParser.FOLLOWING, 0); }
		public TerminalNode FOR() { return getToken(sql_parserParser.FOR, 0); }
		public TerminalNode FOREIGN() { return getToken(sql_parserParser.FOREIGN, 0); }
		public TerminalNode FORMAT() { return getToken(sql_parserParser.FORMAT, 0); }
		public TerminalNode FORMATTED() { return getToken(sql_parserParser.FORMATTED, 0); }
		public TerminalNode FROM() { return getToken(sql_parserParser.FROM, 0); }
		public TerminalNode FUNCTION() { return getToken(sql_parserParser.FUNCTION, 0); }
		public TerminalNode FUNCTIONS() { return getToken(sql_parserParser.FUNCTIONS, 0); }
		public TerminalNode GLOBAL() { return getToken(sql_parserParser.GLOBAL, 0); }
		public TerminalNode GRANT() { return getToken(sql_parserParser.GRANT, 0); }
		public TerminalNode GROUP() { return getToken(sql_parserParser.GROUP, 0); }
		public TerminalNode GROUPING() { return getToken(sql_parserParser.GROUPING, 0); }
		public TerminalNode HAVING() { return getToken(sql_parserParser.HAVING, 0); }
		public TerminalNode IF() { return getToken(sql_parserParser.IF, 0); }
		public TerminalNode IGNORE() { return getToken(sql_parserParser.IGNORE, 0); }
		public TerminalNode IMPORT() { return getToken(sql_parserParser.IMPORT, 0); }
		public TerminalNode IN() { return getToken(sql_parserParser.IN, 0); }
		public TerminalNode INDEX() { return getToken(sql_parserParser.INDEX, 0); }
		public TerminalNode INDEXES() { return getToken(sql_parserParser.INDEXES, 0); }
		public TerminalNode INPATH() { return getToken(sql_parserParser.INPATH, 0); }
		public TerminalNode INPUTFORMAT() { return getToken(sql_parserParser.INPUTFORMAT, 0); }
		public TerminalNode INSERT() { return getToken(sql_parserParser.INSERT, 0); }
		public TerminalNode INTERVAL() { return getToken(sql_parserParser.INTERVAL, 0); }
		public TerminalNode INTO() { return getToken(sql_parserParser.INTO, 0); }
		public TerminalNode IS() { return getToken(sql_parserParser.IS, 0); }
		public TerminalNode ITEMS() { return getToken(sql_parserParser.ITEMS, 0); }
		public TerminalNode KEYS() { return getToken(sql_parserParser.KEYS, 0); }
		public TerminalNode LAST() { return getToken(sql_parserParser.LAST, 0); }
		public TerminalNode LATERAL() { return getToken(sql_parserParser.LATERAL, 0); }
		public TerminalNode LAZY() { return getToken(sql_parserParser.LAZY, 0); }
		public TerminalNode LEADING() { return getToken(sql_parserParser.LEADING, 0); }
		public TerminalNode LIKE() { return getToken(sql_parserParser.LIKE, 0); }
		public TerminalNode LIMIT() { return getToken(sql_parserParser.LIMIT, 0); }
		public TerminalNode LINES() { return getToken(sql_parserParser.LINES, 0); }
		public TerminalNode LIST() { return getToken(sql_parserParser.LIST, 0); }
		public TerminalNode LOAD() { return getToken(sql_parserParser.LOAD, 0); }
		public TerminalNode LOCAL() { return getToken(sql_parserParser.LOCAL, 0); }
		public TerminalNode LOCATION() { return getToken(sql_parserParser.LOCATION, 0); }
		public TerminalNode LOCK() { return getToken(sql_parserParser.LOCK, 0); }
		public TerminalNode LOCKS() { return getToken(sql_parserParser.LOCKS, 0); }
		public TerminalNode LOGICAL() { return getToken(sql_parserParser.LOGICAL, 0); }
		public TerminalNode MACRO() { return getToken(sql_parserParser.MACRO, 0); }
		public TerminalNode MAP() { return getToken(sql_parserParser.MAP, 0); }
		public TerminalNode MATCHED() { return getToken(sql_parserParser.MATCHED, 0); }
		public TerminalNode MERGE() { return getToken(sql_parserParser.MERGE, 0); }
		public TerminalNode MSCK() { return getToken(sql_parserParser.MSCK, 0); }
		public TerminalNode NAMESPACE() { return getToken(sql_parserParser.NAMESPACE, 0); }
		public TerminalNode NAMESPACES() { return getToken(sql_parserParser.NAMESPACES, 0); }
		public TerminalNode NO() { return getToken(sql_parserParser.NO, 0); }
		public TerminalNode NOT() { return getToken(sql_parserParser.NOT, 0); }
		public TerminalNode NULL() { return getToken(sql_parserParser.NULL, 0); }
		public TerminalNode NULLS() { return getToken(sql_parserParser.NULLS, 0); }
		public TerminalNode OF() { return getToken(sql_parserParser.OF, 0); }
		public TerminalNode ONLY() { return getToken(sql_parserParser.ONLY, 0); }
		public TerminalNode OPTION() { return getToken(sql_parserParser.OPTION, 0); }
		public TerminalNode OPTIONS() { return getToken(sql_parserParser.OPTIONS, 0); }
		public TerminalNode OR() { return getToken(sql_parserParser.OR, 0); }
		public TerminalNode ORDER() { return getToken(sql_parserParser.ORDER, 0); }
		public TerminalNode OUT() { return getToken(sql_parserParser.OUT, 0); }
		public TerminalNode OUTER() { return getToken(sql_parserParser.OUTER, 0); }
		public TerminalNode OUTPUTFORMAT() { return getToken(sql_parserParser.OUTPUTFORMAT, 0); }
		public TerminalNode OVER() { return getToken(sql_parserParser.OVER, 0); }
		public TerminalNode OVERLAPS() { return getToken(sql_parserParser.OVERLAPS, 0); }
		public TerminalNode OVERLAY() { return getToken(sql_parserParser.OVERLAY, 0); }
		public TerminalNode OVERWRITE() { return getToken(sql_parserParser.OVERWRITE, 0); }
		public TerminalNode PARTITION() { return getToken(sql_parserParser.PARTITION, 0); }
		public TerminalNode PARTITIONED() { return getToken(sql_parserParser.PARTITIONED, 0); }
		public TerminalNode PARTITIONS() { return getToken(sql_parserParser.PARTITIONS, 0); }
		public TerminalNode PERCENTLIT() { return getToken(sql_parserParser.PERCENTLIT, 0); }
		public TerminalNode PIVOT() { return getToken(sql_parserParser.PIVOT, 0); }
		public TerminalNode PLACING() { return getToken(sql_parserParser.PLACING, 0); }
		public TerminalNode POSITION() { return getToken(sql_parserParser.POSITION, 0); }
		public TerminalNode PRECEDING() { return getToken(sql_parserParser.PRECEDING, 0); }
		public TerminalNode PRIMARY() { return getToken(sql_parserParser.PRIMARY, 0); }
		public TerminalNode PRINCIPALS() { return getToken(sql_parserParser.PRINCIPALS, 0); }
		public TerminalNode PROPERTIES() { return getToken(sql_parserParser.PROPERTIES, 0); }
		public TerminalNode PURGE() { return getToken(sql_parserParser.PURGE, 0); }
		public TerminalNode QUERY() { return getToken(sql_parserParser.QUERY, 0); }
		public TerminalNode RANGE() { return getToken(sql_parserParser.RANGE, 0); }
		public TerminalNode RECORDREADER() { return getToken(sql_parserParser.RECORDREADER, 0); }
		public TerminalNode RECORDWRITER() { return getToken(sql_parserParser.RECORDWRITER, 0); }
		public TerminalNode RECOVER() { return getToken(sql_parserParser.RECOVER, 0); }
		public TerminalNode REDUCE() { return getToken(sql_parserParser.REDUCE, 0); }
		public TerminalNode REFERENCES() { return getToken(sql_parserParser.REFERENCES, 0); }
		public TerminalNode REFRESH() { return getToken(sql_parserParser.REFRESH, 0); }
		public TerminalNode RENAME() { return getToken(sql_parserParser.RENAME, 0); }
		public TerminalNode REPAIR() { return getToken(sql_parserParser.REPAIR, 0); }
		public TerminalNode REPLACE() { return getToken(sql_parserParser.REPLACE, 0); }
		public TerminalNode RESET() { return getToken(sql_parserParser.RESET, 0); }
		public TerminalNode RESTRICT() { return getToken(sql_parserParser.RESTRICT, 0); }
		public TerminalNode REVOKE() { return getToken(sql_parserParser.REVOKE, 0); }
		public TerminalNode RLIKE() { return getToken(sql_parserParser.RLIKE, 0); }
		public TerminalNode ROLE() { return getToken(sql_parserParser.ROLE, 0); }
		public TerminalNode ROLES() { return getToken(sql_parserParser.ROLES, 0); }
		public TerminalNode ROLLBACK() { return getToken(sql_parserParser.ROLLBACK, 0); }
		public TerminalNode ROLLUP() { return getToken(sql_parserParser.ROLLUP, 0); }
		public TerminalNode ROW() { return getToken(sql_parserParser.ROW, 0); }
		public TerminalNode ROWS() { return getToken(sql_parserParser.ROWS, 0); }
		public TerminalNode SCHEMA() { return getToken(sql_parserParser.SCHEMA, 0); }
		public TerminalNode SELECT() { return getToken(sql_parserParser.SELECT, 0); }
		public TerminalNode SEPARATED() { return getToken(sql_parserParser.SEPARATED, 0); }
		public TerminalNode SERDE() { return getToken(sql_parserParser.SERDE, 0); }
		public TerminalNode SERDEPROPERTIES() { return getToken(sql_parserParser.SERDEPROPERTIES, 0); }
		public TerminalNode SESSION_USER() { return getToken(sql_parserParser.SESSION_USER, 0); }
		public TerminalNode SET() { return getToken(sql_parserParser.SET, 0); }
		public TerminalNode SETS() { return getToken(sql_parserParser.SETS, 0); }
		public TerminalNode SHOW() { return getToken(sql_parserParser.SHOW, 0); }
		public TerminalNode SKEWED() { return getToken(sql_parserParser.SKEWED, 0); }
		public TerminalNode SOME() { return getToken(sql_parserParser.SOME, 0); }
		public TerminalNode SORT() { return getToken(sql_parserParser.SORT, 0); }
		public TerminalNode SORTED() { return getToken(sql_parserParser.SORTED, 0); }
		public TerminalNode START() { return getToken(sql_parserParser.START, 0); }
		public TerminalNode STATISTICS() { return getToken(sql_parserParser.STATISTICS, 0); }
		public TerminalNode STORED() { return getToken(sql_parserParser.STORED, 0); }
		public TerminalNode STRATIFY() { return getToken(sql_parserParser.STRATIFY, 0); }
		public TerminalNode STRUCT() { return getToken(sql_parserParser.STRUCT, 0); }
		public TerminalNode SUBSTR() { return getToken(sql_parserParser.SUBSTR, 0); }
		public TerminalNode SUBSTRING() { return getToken(sql_parserParser.SUBSTRING, 0); }
		public TerminalNode TABLE() { return getToken(sql_parserParser.TABLE, 0); }
		public TerminalNode TABLES() { return getToken(sql_parserParser.TABLES, 0); }
		public TerminalNode TABLESAMPLE() { return getToken(sql_parserParser.TABLESAMPLE, 0); }
		public TerminalNode TBLPROPERTIES() { return getToken(sql_parserParser.TBLPROPERTIES, 0); }
		public TerminalNode TEMPORARY() { return getToken(sql_parserParser.TEMPORARY, 0); }
		public TerminalNode TERMINATED() { return getToken(sql_parserParser.TERMINATED, 0); }
		public TerminalNode THEN() { return getToken(sql_parserParser.THEN, 0); }
		public TerminalNode TO() { return getToken(sql_parserParser.TO, 0); }
		public TerminalNode TOUCH() { return getToken(sql_parserParser.TOUCH, 0); }
		public TerminalNode TRAILING() { return getToken(sql_parserParser.TRAILING, 0); }
		public TerminalNode TRANSACTION() { return getToken(sql_parserParser.TRANSACTION, 0); }
		public TerminalNode TRANSACTIONS() { return getToken(sql_parserParser.TRANSACTIONS, 0); }
		public TerminalNode TRANSFORM() { return getToken(sql_parserParser.TRANSFORM, 0); }
		public TerminalNode TRIM() { return getToken(sql_parserParser.TRIM, 0); }
		public TerminalNode TRUE() { return getToken(sql_parserParser.TRUE, 0); }
		public TerminalNode TRUNCATE() { return getToken(sql_parserParser.TRUNCATE, 0); }
		public TerminalNode TYPE() { return getToken(sql_parserParser.TYPE, 0); }
		public TerminalNode UNARCHIVE() { return getToken(sql_parserParser.UNARCHIVE, 0); }
		public TerminalNode UNBOUNDED() { return getToken(sql_parserParser.UNBOUNDED, 0); }
		public TerminalNode UNCACHE() { return getToken(sql_parserParser.UNCACHE, 0); }
		public TerminalNode UNIQUE() { return getToken(sql_parserParser.UNIQUE, 0); }
		public TerminalNode UNKNOWN() { return getToken(sql_parserParser.UNKNOWN, 0); }
		public TerminalNode UNLOCK() { return getToken(sql_parserParser.UNLOCK, 0); }
		public TerminalNode UNSET() { return getToken(sql_parserParser.UNSET, 0); }
		public TerminalNode UPDATE() { return getToken(sql_parserParser.UPDATE, 0); }
		public TerminalNode USE() { return getToken(sql_parserParser.USE, 0); }
		public TerminalNode USER() { return getToken(sql_parserParser.USER, 0); }
		public TerminalNode VALUES() { return getToken(sql_parserParser.VALUES, 0); }
		public TerminalNode VIEW() { return getToken(sql_parserParser.VIEW, 0); }
		public TerminalNode VIEWS() { return getToken(sql_parserParser.VIEWS, 0); }
		public TerminalNode WHEN() { return getToken(sql_parserParser.WHEN, 0); }
		public TerminalNode WHERE() { return getToken(sql_parserParser.WHERE, 0); }
		public TerminalNode WINDOW() { return getToken(sql_parserParser.WINDOW, 0); }
		public TerminalNode WITH() { return getToken(sql_parserParser.WITH, 0); }
		public NonReservedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nonReserved; }
	}

	public final NonReservedContext nonReserved() throws RecognitionException {
		NonReservedContext _localctx = new NonReservedContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_nonReserved);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(914);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ADD) | (1L << AFTER) | (1L << ALL) | (1L << ALTER) | (1L << ANALYZE) | (1L << AND) | (1L << ANY) | (1L << ARCHIVE) | (1L << ARRAY) | (1L << AS) | (1L << ASC) | (1L << AT) | (1L << AUTHORIZATION) | (1L << BETWEEN) | (1L << BOTH) | (1L << BUCKET) | (1L << BUCKETS) | (1L << BY) | (1L << CACHE) | (1L << CASCADE) | (1L << CASE) | (1L << CAST) | (1L << CHANGE) | (1L << CHECK) | (1L << CLEAR) | (1L << CLUSTER) | (1L << CLUSTERED) | (1L << CODEGEN) | (1L << COLLATE) | (1L << COLLECTION) | (1L << COLUMN) | (1L << COLUMNS) | (1L << COMMENT) | (1L << COMMIT) | (1L << COMPACT) | (1L << COMPACTIONS) | (1L << COMPUTE) | (1L << CONCATENATE) | (1L << CONSTRAINT) | (1L << COST) | (1L << CREATE) | (1L << CUBE) | (1L << CURRENT) | (1L << CURRENT_DATE) | (1L << CURRENT_TIME) | (1L << CURRENT_TIMESTAMP) | (1L << CURRENT_USER) | (1L << DATA) | (1L << DATABASE) | (1L << DATABASES) | (1L << DBPROPERTIES) | (1L << DEFINED) | (1L << DELETE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (DELIMITED - 64)) | (1L << (DESC - 64)) | (1L << (DESCRIBE - 64)) | (1L << (DFS - 64)) | (1L << (DIRECTORIES - 64)) | (1L << (DIRECTORY - 64)) | (1L << (DISTINCT - 64)) | (1L << (DISTRIBUTE - 64)) | (1L << (DIV - 64)) | (1L << (DROP - 64)) | (1L << (ELSE - 64)) | (1L << (END - 64)) | (1L << (ESCAPE - 64)) | (1L << (ESCAPED - 64)) | (1L << (EXCHANGE - 64)) | (1L << (EXISTS - 64)) | (1L << (EXPLAIN - 64)) | (1L << (EXPORT - 64)) | (1L << (EXTENDED - 64)) | (1L << (EXTERNAL - 64)) | (1L << (EXTRACT - 64)) | (1L << (FALSE - 64)) | (1L << (FETCH - 64)) | (1L << (FIELDS - 64)) | (1L << (FILTER - 64)) | (1L << (FILEFORMAT - 64)) | (1L << (FIRST - 64)) | (1L << (FOLLOWING - 64)) | (1L << (FOR - 64)) | (1L << (FOREIGN - 64)) | (1L << (FORMAT - 64)) | (1L << (FORMATTED - 64)) | (1L << (FROM - 64)) | (1L << (FUNCTION - 64)) | (1L << (FUNCTIONS - 64)) | (1L << (GLOBAL - 64)) | (1L << (GRANT - 64)) | (1L << (GROUP - 64)) | (1L << (GROUPING - 64)) | (1L << (HAVING - 64)) | (1L << (IF - 64)) | (1L << (IGNORE - 64)) | (1L << (IMPORT - 64)) | (1L << (IN - 64)) | (1L << (INDEX - 64)) | (1L << (INDEXES - 64)) | (1L << (INPATH - 64)) | (1L << (INPUTFORMAT - 64)) | (1L << (INSERT - 64)) | (1L << (INTERVAL - 64)) | (1L << (INTO - 64)) | (1L << (IS - 64)) | (1L << (ITEMS - 64)) | (1L << (KEYS - 64)) | (1L << (LAST - 64)) | (1L << (LATERAL - 64)) | (1L << (LAZY - 64)) | (1L << (LEADING - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LIKE - 128)) | (1L << (LIMIT - 128)) | (1L << (LINES - 128)) | (1L << (LIST - 128)) | (1L << (LOAD - 128)) | (1L << (LOCAL - 128)) | (1L << (LOCATION - 128)) | (1L << (LOCK - 128)) | (1L << (LOCKS - 128)) | (1L << (LOGICAL - 128)) | (1L << (MACRO - 128)) | (1L << (MAP - 128)) | (1L << (MATCHED - 128)) | (1L << (MERGE - 128)) | (1L << (MSCK - 128)) | (1L << (NAMESPACE - 128)) | (1L << (NAMESPACES - 128)) | (1L << (NO - 128)) | (1L << (NOT - 128)) | (1L << (NULL - 128)) | (1L << (NULLS - 128)) | (1L << (OF - 128)) | (1L << (ONLY - 128)) | (1L << (OPTION - 128)) | (1L << (OPTIONS - 128)) | (1L << (OR - 128)) | (1L << (ORDER - 128)) | (1L << (OUT - 128)) | (1L << (OUTER - 128)) | (1L << (OUTPUTFORMAT - 128)) | (1L << (OVER - 128)) | (1L << (OVERLAPS - 128)) | (1L << (OVERLAY - 128)) | (1L << (OVERWRITE - 128)) | (1L << (PARTITION - 128)) | (1L << (PARTITIONED - 128)) | (1L << (PARTITIONS - 128)) | (1L << (PERCENTLIT - 128)) | (1L << (PIVOT - 128)) | (1L << (PLACING - 128)) | (1L << (POSITION - 128)) | (1L << (PRECEDING - 128)) | (1L << (PRIMARY - 128)) | (1L << (PRINCIPALS - 128)) | (1L << (PROPERTIES - 128)) | (1L << (PURGE - 128)) | (1L << (QUERY - 128)) | (1L << (RANGE - 128)) | (1L << (RECORDREADER - 128)) | (1L << (RECORDWRITER - 128)) | (1L << (RECOVER - 128)) | (1L << (REDUCE - 128)) | (1L << (REFERENCES - 128)) | (1L << (REFRESH - 128)) | (1L << (RENAME - 128)) | (1L << (REPAIR - 128)) | (1L << (REPLACE - 128)) | (1L << (RESET - 128)) | (1L << (RESTRICT - 128)) | (1L << (REVOKE - 128)) | (1L << (RLIKE - 128)))) != 0) || ((((_la - 192)) & ~0x3f) == 0 && ((1L << (_la - 192)) & ((1L << (ROLE - 192)) | (1L << (ROLES - 192)) | (1L << (ROLLBACK - 192)) | (1L << (ROLLUP - 192)) | (1L << (ROW - 192)) | (1L << (ROWS - 192)) | (1L << (SCHEMA - 192)) | (1L << (SELECT - 192)) | (1L << (SEPARATED - 192)) | (1L << (SERDE - 192)) | (1L << (SERDEPROPERTIES - 192)) | (1L << (SESSION_USER - 192)) | (1L << (SET - 192)) | (1L << (SETS - 192)) | (1L << (SHOW - 192)) | (1L << (SKEWED - 192)) | (1L << (SOME - 192)) | (1L << (SORT - 192)) | (1L << (SORTED - 192)) | (1L << (START - 192)) | (1L << (STATISTICS - 192)) | (1L << (STORED - 192)) | (1L << (STRATIFY - 192)) | (1L << (STRUCT - 192)) | (1L << (SUBSTR - 192)) | (1L << (SUBSTRING - 192)) | (1L << (TABLE - 192)) | (1L << (TABLES - 192)) | (1L << (TABLESAMPLE - 192)) | (1L << (TBLPROPERTIES - 192)) | (1L << (TEMPORARY - 192)) | (1L << (TERMINATED - 192)) | (1L << (THEN - 192)) | (1L << (TO - 192)) | (1L << (TOUCH - 192)) | (1L << (TRAILING - 192)) | (1L << (TRANSACTION - 192)) | (1L << (TRANSACTIONS - 192)) | (1L << (TRANSFORM - 192)) | (1L << (TRIM - 192)) | (1L << (TRUE - 192)) | (1L << (TRUNCATE - 192)) | (1L << (TYPE - 192)) | (1L << (UNARCHIVE - 192)) | (1L << (UNBOUNDED - 192)) | (1L << (UNCACHE - 192)) | (1L << (UNIQUE - 192)) | (1L << (UNKNOWN - 192)) | (1L << (UNLOCK - 192)) | (1L << (UNSET - 192)) | (1L << (UPDATE - 192)) | (1L << (USE - 192)) | (1L << (USER - 192)) | (1L << (VALUES - 192)) | (1L << (VIEW - 192)) | (1L << (VIEWS - 192)) | (1L << (WHEN - 192)) | (1L << (WHERE - 192)) | (1L << (WINDOW - 192)) | (1L << (WITH - 192)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 28:
			return booleanExpression_sempred((BooleanExpressionContext)_localctx, predIndex);
		case 30:
			return valueExpression_sempred((ValueExpressionContext)_localctx, predIndex);
		case 31:
			return primaryExpression_sempred((PrimaryExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean booleanExpression_sempred(BooleanExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean valueExpression_sempred(ValueExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 6);
		case 3:
			return precpred(_ctx, 5);
		case 4:
			return precpred(_ctx, 4);
		case 5:
			return precpred(_ctx, 3);
		case 6:
			return precpred(_ctx, 2);
		case 7:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean primaryExpression_sempred(PrimaryExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 4);
		case 9:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u0123\u0397\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\3\2\3\2\7"+
		"\2\u0091\n\2\f\2\16\2\u0094\13\2\3\2\3\2\3\3\3\3\3\3\3\4\3\4\3\5\3\5\3"+
		"\5\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\7\7\u00a8\n\7\f\7\16\7\u00ab\13\7\5"+
		"\7\u00ad\n\7\3\7\3\7\3\7\3\7\3\7\7\7\u00b4\n\7\f\7\16\7\u00b7\13\7\5\7"+
		"\u00b9\n\7\3\7\3\7\3\7\5\7\u00be\n\7\5\7\u00c0\n\7\3\b\3\b\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\5\t\u00cb\n\t\3\n\3\n\5\n\u00cf\n\n\3\n\3\n\5\n\u00d3"+
		"\n\n\3\13\3\13\5\13\u00d7\n\13\3\13\5\13\u00da\n\13\3\f\3\f\5\f\u00de"+
		"\n\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16\3\16\3\16\7\16\u00e9\n\16\f\16\16\16"+
		"\u00ec\13\16\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22\7"+
		"\22\u00f9\n\22\f\22\16\22\u00fc\13\22\3\23\3\23\3\23\3\23\7\23\u0102\n"+
		"\23\f\23\16\23\u0105\13\23\3\23\3\23\3\24\3\24\5\24\u010b\n\24\3\25\3"+
		"\25\3\25\3\25\7\25\u0111\n\25\f\25\16\25\u0114\13\25\3\25\3\25\3\26\3"+
		"\26\5\26\u011a\n\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\5\27\u0129\n\27\3\30\5\30\u012c\n\30\3\30\3\30\5\30\u0130"+
		"\n\30\5\30\u0132\n\30\3\31\3\31\3\31\7\31\u0137\n\31\f\31\16\31\u013a"+
		"\13\31\3\32\3\32\3\32\7\32\u013f\n\32\f\32\16\32\u0142\13\32\3\33\3\33"+
		"\5\33\u0146\n\33\3\33\3\33\5\33\u014a\n\33\5\33\u014c\n\33\3\34\3\34\3"+
		"\34\7\34\u0151\n\34\f\34\16\34\u0154\13\34\3\35\3\35\3\36\3\36\3\36\3"+
		"\36\3\36\5\36\u015d\n\36\5\36\u015f\n\36\3\36\3\36\3\36\3\36\3\36\3\36"+
		"\7\36\u0167\n\36\f\36\16\36\u016a\13\36\3\37\5\37\u016d\n\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\5\37\u0175\n\37\3\37\3\37\3\37\3\37\3\37\7\37\u017c"+
		"\n\37\f\37\16\37\u017f\13\37\3\37\3\37\3\37\5\37\u0184\n\37\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\5\37\u018c\n\37\3\37\3\37\3\37\5\37\u0191\n\37\3"+
		"\37\3\37\3\37\3\37\5\37\u0197\n\37\3\37\3\37\5\37\u019b\n\37\3\37\3\37"+
		"\3\37\5\37\u01a0\n\37\3\37\3\37\3\37\5\37\u01a5\n\37\3\37\3\37\3\37\5"+
		"\37\u01aa\n\37\3 \3 \3 \3 \5 \u01b0\n \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \3"+
		" \3 \3 \3 \3 \3 \3 \3 \3 \7 \u01c5\n \f \16 \u01c8\13 \3!\3!\3!\3!\6!"+
		"\u01ce\n!\r!\16!\u01cf\3!\3!\5!\u01d4\n!\3!\3!\3!\3!\3!\6!\u01db\n!\r"+
		"!\16!\u01dc\3!\3!\5!\u01e1\n!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3"+
		"!\7!\u01f1\n!\f!\16!\u01f4\13!\5!\u01f6\n!\3!\3!\3!\3!\3!\3!\5!\u01fe"+
		"\n!\3!\3!\3!\3!\3!\3!\3!\5!\u0207\n!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!"+
		"\3!\3!\3!\3!\3!\3!\3!\3!\6!\u021c\n!\r!\16!\u021d\3!\3!\3!\3!\3!\3!\3"+
		"!\3!\3!\3!\3!\7!\u022b\n!\f!\16!\u022e\13!\5!\u0230\n!\3!\3!\3!\3!\3!"+
		"\3!\3!\5!\u0239\n!\3!\3!\3!\3!\3!\3!\3!\3!\7!\u0243\n!\f!\16!\u0246\13"+
		"!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\6\"\u0250\n\"\r\"\16\"\u0251\5\"\u0254"+
		"\n\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3\'\5\'\u0261\n\'\3(\3(\5(\u0265"+
		"\n(\3)\3)\3)\6)\u026a\n)\r)\16)\u026b\3*\3*\3*\5*\u0271\n*\3+\3+\3+\3"+
		"+\3+\3,\5,\u0279\n,\3,\3,\5,\u027d\n,\3-\3-\3-\5-\u0282\n-\3.\3.\3.\3"+
		".\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\5.\u0293\n.\3.\3.\5.\u0297\n.\3.\3"+
		".\3.\3.\3.\7.\u029e\n.\f.\16.\u02a1\13.\3.\5.\u02a4\n.\5.\u02a6\n.\3/"+
		"\3/\3/\7/\u02ab\n/\f/\16/\u02ae\13/\3\60\3\60\3\60\3\60\5\60\u02b4\n\60"+
		"\3\60\5\60\u02b7\n\60\3\60\5\60\u02ba\n\60\3\61\3\61\3\61\7\61\u02bf\n"+
		"\61\f\61\16\61\u02c2\13\61\3\62\3\62\3\62\3\62\5\62\u02c8\n\62\3\62\5"+
		"\62\u02cb\n\62\3\63\3\63\3\63\7\63\u02d0\n\63\f\63\16\63\u02d3\13\63\3"+
		"\64\3\64\3\64\3\64\3\64\5\64\u02da\n\64\3\64\5\64\u02dd\n\64\3\65\3\65"+
		"\3\65\3\65\3\65\3\66\3\66\3\66\3\66\7\66\u02e8\n\66\f\66\16\66\u02eb\13"+
		"\66\3\67\3\67\3\67\3\67\38\38\38\38\38\38\38\38\38\38\38\78\u02fc\n8\f"+
		"8\168\u02ff\138\38\38\38\38\38\78\u0306\n8\f8\168\u0309\138\58\u030b\n"+
		"8\38\38\38\38\38\78\u0312\n8\f8\168\u0315\138\58\u0317\n8\58\u0319\n8"+
		"\38\58\u031c\n8\38\58\u031f\n8\39\39\39\39\39\39\39\39\39\39\39\39\39"+
		"\39\39\39\59\u0331\n9\3:\3:\3:\3:\3:\3:\3:\5:\u033a\n:\3;\3;\3;\7;\u033f"+
		"\n;\f;\16;\u0342\13;\3<\3<\3<\3<\5<\u0348\n<\3=\3=\3=\7=\u034d\n=\f=\16"+
		"=\u0350\13=\3>\3>\3>\3?\3?\6?\u0357\n?\r?\16?\u0358\3?\5?\u035c\n?\3@"+
		"\3@\5@\u0360\n@\3A\3A\3A\3A\5A\u0366\nA\3B\3B\3C\5C\u036b\nC\3C\3C\5C"+
		"\u036f\nC\3C\3C\5C\u0373\nC\3C\3C\5C\u0377\nC\3C\3C\5C\u037b\nC\3C\3C"+
		"\5C\u037f\nC\3C\3C\5C\u0383\nC\3C\5C\u0386\nC\3D\3D\3D\3D\3D\3D\3D\5D"+
		"\u038f\nD\3E\3E\3F\3F\3G\3G\3G\2\5:>@H\2\4\6\b\n\f\16\20\22\24\26\30\32"+
		"\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080"+
		"\u0082\u0084\u0086\u0088\u008a\u008c\2\30\4\2\26\26CC\4\2]]}}\4\2\r\r"+
		"HH\5\2XX\u00ec\u00ec\u00f4\u00f4\4\2\u010a\u010b\u010f\u010f\4\2JJ\u010c"+
		"\u010e\4\2\u010a\u010b\u0112\u0112\4\288::\3\2\u0102\u0109\4\2JJ\u010a"+
		"\u0113\6\2\20\20oo\u0095\u0095\u009d\u009d\4\2XX\u00ec\u00ec\3\2\u010a"+
		"\u010b\4\2\u0118\u0118\u011a\u011a\4\2II\u00a6\u00a6\4\2\u009e\u009e\u00d5"+
		"\u00d5\4\2^^\u00ad\u00ad\3\2\u0119\u011a\4\2KK\u00cf\u00cf\61\2\13\f\16"+
		"\17\21\21\23\24\26\27\31\31\33\37\"\"$\'))+\61\63\63\66\67<GIKOOQWZZ\\"+
		"^abegjjlnpqsuwwzz|\177\u0082\u0092\u0094\u0094\u0097\u0098\u009b\u009c"+
		"\u009f\u009f\u00a1\u00a2\u00a4\u00ad\u00af\u00b7\u00b9\u00bf\u00c1\u00c8"+
		"\u00ca\u00cd\u00cf\u00d3\u00d5\u00dd\u00df\u00e3\u00e6\u00e6\u00e8\u00f1"+
		"\u00f5\u00f8\u00fb\u00fd\u0100\u0100\21\2\21\21\65\65PPddrrvv{{\u0081"+
		"\u0081\u0093\u0093\u0099\u0099\u00c0\u00c0\u00ca\u00ca\u00d0\u00d0\u00f2"+
		"\u00f2\u00fa\u00fa\22\2\13\20\22\64\66OQceqsuwz|\u0080\u0082\u0092\u0094"+
		"\u0098\u009a\u00bf\u00c1\u00c9\u00cb\u00cf\u00d1\u00f1\u00f3\u00f9\u00fb"+
		"\u0101\2\u03f1\2\u008e\3\2\2\2\4\u0097\3\2\2\2\6\u009a\3\2\2\2\b\u009c"+
		"\3\2\2\2\n\u009f\3\2\2\2\f\u00ac\3\2\2\2\16\u00c1\3\2\2\2\20\u00ca\3\2"+
		"\2\2\22\u00cc\3\2\2\2\24\u00d4\3\2\2\2\26\u00db\3\2\2\2\30\u00e1\3\2\2"+
		"\2\32\u00e4\3\2\2\2\34\u00ed\3\2\2\2\36\u00ef\3\2\2\2 \u00f1\3\2\2\2\""+
		"\u00f5\3\2\2\2$\u00fd\3\2\2\2&\u0108\3\2\2\2(\u010c\3\2\2\2*\u0117\3\2"+
		"\2\2,\u0128\3\2\2\2.\u0131\3\2\2\2\60\u0133\3\2\2\2\62\u013b\3\2\2\2\64"+
		"\u0143\3\2\2\2\66\u014d\3\2\2\28\u0155\3\2\2\2:\u015e\3\2\2\2<\u01a9\3"+
		"\2\2\2>\u01af\3\2\2\2@\u0238\3\2\2\2B\u0253\3\2\2\2D\u0255\3\2\2\2F\u0257"+
		"\3\2\2\2H\u0259\3\2\2\2J\u025b\3\2\2\2L\u025d\3\2\2\2N\u0262\3\2\2\2P"+
		"\u0269\3\2\2\2R\u026d\3\2\2\2T\u0272\3\2\2\2V\u027c\3\2\2\2X\u0281\3\2"+
		"\2\2Z\u02a5\3\2\2\2\\\u02a7\3\2\2\2^\u02af\3\2\2\2`\u02bb\3\2\2\2b\u02c3"+
		"\3\2\2\2d\u02cc\3\2\2\2f\u02d4\3\2\2\2h\u02de\3\2\2\2j\u02e3\3\2\2\2l"+
		"\u02ec\3\2\2\2n\u031e\3\2\2\2p\u0330\3\2\2\2r\u0339\3\2\2\2t\u033b\3\2"+
		"\2\2v\u0347\3\2\2\2x\u0349\3\2\2\2z\u0351\3\2\2\2|\u035b\3\2\2\2~\u035f"+
		"\3\2\2\2\u0080\u0365\3\2\2\2\u0082\u0367\3\2\2\2\u0084\u0385\3\2\2\2\u0086"+
		"\u038e\3\2\2\2\u0088\u0390\3\2\2\2\u008a\u0392\3\2\2\2\u008c\u0394\3\2"+
		"\2\2\u008e\u0092\5\6\4\2\u008f\u0091\7\3\2\2\u0090\u008f\3\2\2\2\u0091"+
		"\u0094\3\2\2\2\u0092\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093\u0095\3\2"+
		"\2\2\u0094\u0092\3\2\2\2\u0095\u0096\7\2\2\3\u0096\3\3\2\2\2\u0097\u0098"+
		"\5Z.\2\u0098\u0099\7\2\2\3\u0099\5\3\2\2\2\u009a\u009b\5\n\6\2\u009b\7"+
		"\3\2\2\2\u009c\u009d\7,\2\2\u009d\u009e\7\u0114\2\2\u009e\t\3\2\2\2\u009f"+
		"\u00a0\5\16\b\2\u00a0\u00a1\5\f\7\2\u00a1\13\3\2\2\2\u00a2\u00a3\7\u009e"+
		"\2\2\u00a3\u00a4\7\35\2\2\u00a4\u00a9\5\22\n\2\u00a5\u00a6\7\4\2\2\u00a6"+
		"\u00a8\5\22\n\2\u00a7\u00a5\3\2\2\2\u00a8\u00ab\3\2\2\2\u00a9\u00a7\3"+
		"\2\2\2\u00a9\u00aa\3\2\2\2\u00aa\u00ad\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ac"+
		"\u00a2\3\2\2\2\u00ac\u00ad\3\2\2\2\u00ad\u00b8\3\2\2\2\u00ae\u00af\7\u00d5"+
		"\2\2\u00af\u00b0\7\35\2\2\u00b0\u00b5\5\22\n\2\u00b1\u00b2\7\4\2\2\u00b2"+
		"\u00b4\5\22\n\2\u00b3\u00b1\3\2\2\2\u00b4\u00b7\3\2\2\2\u00b5\u00b3\3"+
		"\2\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b9\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b8"+
		"\u00ae\3\2\2\2\u00b8\u00b9\3\2\2\2\u00b9\u00bf\3\2\2\2\u00ba\u00bd\7\u0083"+
		"\2\2\u00bb\u00be\7\r\2\2\u00bc\u00be\58\35\2\u00bd\u00bb\3\2\2\2\u00bd"+
		"\u00bc\3\2\2\2\u00be\u00c0\3\2\2\2\u00bf\u00ba\3\2\2\2\u00bf\u00c0\3\2"+
		"\2\2\u00c0\r\3\2\2\2\u00c1\u00c2\5\20\t\2\u00c2\17\3\2\2\2\u00c3\u00cb"+
		"\5\24\13\2\u00c4\u00c5\7\u00de\2\2\u00c5\u00cb\5\62\32\2\u00c6\u00c7\7"+
		"\5\2\2\u00c7\u00c8\5\n\6\2\u00c8\u00c9\7\6\2\2\u00c9\u00cb\3\2\2\2\u00ca"+
		"\u00c3\3\2\2\2\u00ca\u00c4\3\2\2\2\u00ca\u00c6\3\2\2\2\u00cb\21\3\2\2"+
		"\2\u00cc\u00ce\58\35\2\u00cd\u00cf\t\2\2\2\u00ce\u00cd\3\2\2\2\u00ce\u00cf"+
		"\3\2\2\2\u00cf\u00d2\3\2\2\2\u00d0\u00d1\7\u0097\2\2\u00d1\u00d3\t\3\2"+
		"\2\u00d2\u00d0\3\2\2\2\u00d2\u00d3\3\2\2\2\u00d3\23\3\2\2\2\u00d4\u00d6"+
		"\5\26\f\2\u00d5\u00d7\5\32\16\2\u00d6\u00d5\3\2\2\2\u00d6\u00d7\3\2\2"+
		"\2\u00d7\u00d9\3\2\2\2\u00d8\u00da\5\30\r\2\u00d9\u00d8\3\2\2\2\u00d9"+
		"\u00da\3\2\2\2\u00da\25\3\2\2\2\u00db\u00dd\7\u00c9\2\2\u00dc\u00de\5"+
		"\34\17\2\u00dd\u00dc\3\2\2\2\u00dd\u00de\3\2\2\2\u00de\u00df\3\2\2\2\u00df"+
		"\u00e0\5\66\34\2\u00e0\27\3\2\2\2\u00e1\u00e2\7\u00ff\2\2\u00e2\u00e3"+
		"\5:\36\2\u00e3\31\3\2\2\2\u00e4\u00e5\7c\2\2\u00e5\u00ea\5\36\20\2\u00e6"+
		"\u00e7\7\4\2\2\u00e7\u00e9\5\36\20\2\u00e8\u00e6\3\2\2\2\u00e9\u00ec\3"+
		"\2\2\2\u00ea\u00e8\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb\33\3\2\2\2\u00ec"+
		"\u00ea\3\2\2\2\u00ed\u00ee\t\4\2\2\u00ee\35\3\2\2\2\u00ef\u00f0\5,\27"+
		"\2\u00f0\37\3\2\2\2\u00f1\u00f2\7\5\2\2\u00f2\u00f3\5\"\22\2\u00f3\u00f4"+
		"\7\6\2\2\u00f4!\3\2\2\2\u00f5\u00fa\5z>\2\u00f6\u00f7\7\4\2\2\u00f7\u00f9"+
		"\5z>\2\u00f8\u00f6\3\2\2\2\u00f9\u00fc\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa"+
		"\u00fb\3\2\2\2\u00fb#\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fd\u00fe\7\5\2\2"+
		"\u00fe\u0103\5&\24\2\u00ff\u0100\7\4\2\2\u0100\u0102\5&\24\2\u0101\u00ff"+
		"\3\2\2\2\u0102\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104"+
		"\u0106\3\2\2\2\u0105\u0103\3\2\2\2\u0106\u0107\7\6\2\2\u0107%\3\2\2\2"+
		"\u0108\u010a\5z>\2\u0109\u010b\t\2\2\2\u010a\u0109\3\2\2\2\u010a\u010b"+
		"\3\2\2\2\u010b\'\3\2\2\2\u010c\u010d\7\5\2\2\u010d\u0112\5*\26\2\u010e"+
		"\u010f\7\4\2\2\u010f\u0111\5*\26\2\u0110\u010e\3\2\2\2\u0111\u0114\3\2"+
		"\2\2\u0112\u0110\3\2\2\2\u0112\u0113\3\2\2\2\u0113\u0115\3\2\2\2\u0114"+
		"\u0112\3\2\2\2\u0115\u0116\7\6\2\2\u0116)\3\2\2\2\u0117\u0119\5~@\2\u0118"+
		"\u011a\5\b\5\2\u0119\u0118\3\2\2\2\u0119\u011a\3\2\2\2\u011a+\3\2\2\2"+
		"\u011b\u011c\5\62\32\2\u011c\u011d\5.\30\2\u011d\u0129\3\2\2\2\u011e\u011f"+
		"\7\5\2\2\u011f\u0120\5\n\6\2\u0120\u0121\7\6\2\2\u0121\u0122\5.\30\2\u0122"+
		"\u0129\3\2\2\2\u0123\u0124\7\5\2\2\u0124\u0125\5\36\20\2\u0125\u0126\7"+
		"\6\2\2\u0126\u0127\5.\30\2\u0127\u0129\3\2\2\2\u0128\u011b\3\2\2\2\u0128"+
		"\u011e\3\2\2\2\u0128\u0123\3\2\2\2\u0129-\3\2\2\2\u012a\u012c\7\25\2\2"+
		"\u012b\u012a\3\2\2\2\u012b\u012c\3\2\2\2\u012c\u012d\3\2\2\2\u012d\u012f"+
		"\5\u0080A\2\u012e\u0130\5 \21\2\u012f\u012e\3\2\2\2\u012f\u0130\3\2\2"+
		"\2\u0130\u0132\3\2\2\2\u0131\u012b\3\2\2\2\u0131\u0132\3\2\2\2\u0132/"+
		"\3\2\2\2\u0133\u0138\5\62\32\2\u0134\u0135\7\4\2\2\u0135\u0137\5\62\32"+
		"\2\u0136\u0134\3\2\2\2\u0137\u013a\3\2\2\2\u0138\u0136\3\2\2\2\u0138\u0139"+
		"\3\2\2\2\u0139\61\3\2\2\2\u013a\u0138\3\2\2\2\u013b\u0140\5z>\2\u013c"+
		"\u013d\7\7\2\2\u013d\u013f\5z>\2\u013e\u013c\3\2\2\2\u013f\u0142\3\2\2"+
		"\2\u0140\u013e\3\2\2\2\u0140\u0141\3\2\2\2\u0141\63\3\2\2\2\u0142\u0140"+
		"\3\2\2\2\u0143\u014b\58\35\2\u0144\u0146\7\25\2\2\u0145\u0144\3\2\2\2"+
		"\u0145\u0146\3\2\2\2\u0146\u0149\3\2\2\2\u0147\u014a\5z>\2\u0148\u014a"+
		"\5 \21\2\u0149\u0147\3\2\2\2\u0149\u0148\3\2\2\2\u014a\u014c\3\2\2\2\u014b"+
		"\u0145\3\2\2\2\u014b\u014c\3\2\2\2\u014c\65\3\2\2\2\u014d\u0152\5\64\33"+
		"\2\u014e\u014f\7\4\2\2\u014f\u0151\5\64\33\2\u0150\u014e\3\2\2\2\u0151"+
		"\u0154\3\2\2\2\u0152\u0150\3\2\2\2\u0152\u0153\3\2\2\2\u0153\67\3\2\2"+
		"\2\u0154\u0152\3\2\2\2\u0155\u0156\5:\36\2\u01569\3\2\2\2\u0157\u0158"+
		"\b\36\1\2\u0158\u0159\7\u0095\2\2\u0159\u015f\5:\36\6\u015a\u015c\5> "+
		"\2\u015b\u015d\5<\37\2\u015c\u015b\3\2\2\2\u015c\u015d\3\2\2\2\u015d\u015f"+
		"\3\2\2\2\u015e\u0157\3\2\2\2\u015e\u015a\3\2\2\2\u015f\u0168\3\2\2\2\u0160"+
		"\u0161\f\4\2\2\u0161\u0162\7\20\2\2\u0162\u0167\5:\36\5\u0163\u0164\f"+
		"\3\2\2\u0164\u0165\7\u009d\2\2\u0165\u0167\5:\36\4\u0166\u0160\3\2\2\2"+
		"\u0166\u0163\3\2\2\2\u0167\u016a\3\2\2\2\u0168\u0166\3\2\2\2\u0168\u0169"+
		"\3\2\2\2\u0169;\3\2\2\2\u016a\u0168\3\2\2\2\u016b\u016d\7\u0095\2\2\u016c"+
		"\u016b\3\2\2\2\u016c\u016d\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u016f\7\31"+
		"\2\2\u016f\u0170\5> \2\u0170\u0171\7\20\2\2\u0171\u0172\5> \2\u0172\u01aa"+
		"\3\2\2\2\u0173\u0175\7\u0095\2\2\u0174\u0173\3\2\2\2\u0174\u0175\3\2\2"+
		"\2\u0175\u0176\3\2\2\2\u0176\u0177\7o\2\2\u0177\u0178\7\5\2\2\u0178\u017d"+
		"\58\35\2\u0179\u017a\7\4\2\2\u017a\u017c\58\35\2\u017b\u0179\3\2\2\2\u017c"+
		"\u017f\3\2\2\2\u017d\u017b\3\2\2\2\u017d\u017e\3\2\2\2\u017e\u0180\3\2"+
		"\2\2\u017f\u017d\3\2\2\2\u0180\u0181\7\6\2\2\u0181\u01aa\3\2\2\2\u0182"+
		"\u0184\7\u0095\2\2\u0183\u0182\3\2\2\2\u0183\u0184\3\2\2\2\u0184\u0185"+
		"\3\2\2\2\u0185\u0186\7o\2\2\u0186\u0187\7\5\2\2\u0187\u0188\5\n\6\2\u0188"+
		"\u0189\7\6\2\2\u0189\u01aa\3\2\2\2\u018a\u018c\7\u0095\2\2\u018b\u018a"+
		"\3\2\2\2\u018b\u018c\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e\7\u00c1\2"+
		"\2\u018e\u01aa\5> \2\u018f\u0191\7\u0095\2\2\u0190\u018f\3\2\2\2\u0190"+
		"\u0191\3\2\2\2\u0191\u0192\3\2\2\2\u0192\u0193\7\u0082\2\2\u0193\u0196"+
		"\5> \2\u0194\u0195\7N\2\2\u0195\u0197\7\u0114\2\2\u0196\u0194\3\2\2\2"+
		"\u0196\u0197\3\2\2\2\u0197\u01aa\3\2\2\2\u0198\u019a\7y\2\2\u0199\u019b"+
		"\7\u0095\2\2\u019a\u0199\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u019c\3\2\2"+
		"\2\u019c\u01aa\7\u0096\2\2\u019d\u019f\7y\2\2\u019e\u01a0\7\u0095\2\2"+
		"\u019f\u019e\3\2\2\2\u019f\u01a0\3\2\2\2\u01a0\u01a1\3\2\2\2\u01a1\u01aa"+
		"\t\5\2\2\u01a2\u01a4\7y\2\2\u01a3\u01a5\7\u0095\2\2\u01a4\u01a3\3\2\2"+
		"\2\u01a4\u01a5\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6\u01a7\7H\2\2\u01a7\u01a8"+
		"\7c\2\2\u01a8\u01aa\5> \2\u01a9\u016c\3\2\2\2\u01a9\u0174\3\2\2\2\u01a9"+
		"\u0183\3\2\2\2\u01a9\u018b\3\2\2\2\u01a9\u0190\3\2\2\2\u01a9\u0198\3\2"+
		"\2\2\u01a9\u019d\3\2\2\2\u01a9\u01a2\3\2\2\2\u01aa=\3\2\2\2\u01ab\u01ac"+
		"\b \1\2\u01ac\u01b0\5@!\2\u01ad\u01ae\t\6\2\2\u01ae\u01b0\5> \t\u01af"+
		"\u01ab\3\2\2\2\u01af\u01ad\3\2\2\2\u01b0\u01c6\3\2\2\2\u01b1\u01b2\f\b"+
		"\2\2\u01b2\u01b3\t\7\2\2\u01b3\u01c5\5> \t\u01b4\u01b5\f\7\2\2\u01b5\u01b6"+
		"\t\b\2\2\u01b6\u01c5\5> \b\u01b7\u01b8\f\6\2\2\u01b8\u01b9\7\u0110\2\2"+
		"\u01b9\u01c5\5> \7\u01ba\u01bb\f\5\2\2\u01bb\u01bc\7\u0113\2\2\u01bc\u01c5"+
		"\5> \6\u01bd\u01be\f\4\2\2\u01be\u01bf\7\u0111\2\2\u01bf\u01c5\5> \5\u01c0"+
		"\u01c1\f\3\2\2\u01c1\u01c2\5D#\2\u01c2\u01c3\5> \4\u01c3\u01c5\3\2\2\2"+
		"\u01c4\u01b1\3\2\2\2\u01c4\u01b4\3\2\2\2\u01c4\u01b7\3\2\2\2\u01c4\u01ba"+
		"\3\2\2\2\u01c4\u01bd\3\2\2\2\u01c4\u01c0\3\2\2\2\u01c5\u01c8\3\2\2\2\u01c6"+
		"\u01c4\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7?\3\2\2\2\u01c8\u01c6\3\2\2\2"+
		"\u01c9\u01ca\b!\1\2\u01ca\u0239\t\t\2\2\u01cb\u01cd\7 \2\2\u01cc\u01ce"+
		"\5h\65\2\u01cd\u01cc\3\2\2\2\u01ce\u01cf\3\2\2\2\u01cf\u01cd\3\2\2\2\u01cf"+
		"\u01d0\3\2\2\2\u01d0\u01d3\3\2\2\2\u01d1\u01d2\7L\2\2\u01d2\u01d4\58\35"+
		"\2\u01d3\u01d1\3\2\2\2\u01d3\u01d4\3\2\2\2\u01d4\u01d5\3\2\2\2\u01d5\u01d6"+
		"\7M\2\2\u01d6\u0239\3\2\2\2\u01d7\u01d8\7 \2\2\u01d8\u01da\58\35\2\u01d9"+
		"\u01db\5h\65\2\u01da\u01d9\3\2\2\2\u01db\u01dc\3\2\2\2\u01dc\u01da\3\2"+
		"\2\2\u01dc\u01dd\3\2\2\2\u01dd\u01e0\3\2\2\2\u01de\u01df\7L\2\2\u01df"+
		"\u01e1\58\35\2\u01e0\u01de\3\2\2\2\u01e0\u01e1\3\2\2\2\u01e1\u01e2\3\2"+
		"\2\2\u01e2\u01e3\7M\2\2\u01e3\u0239\3\2\2\2\u01e4\u01e5\7!\2\2\u01e5\u01e6"+
		"\7\5\2\2\u01e6\u01e7\58\35\2\u01e7\u01e8\7\25\2\2\u01e8\u01e9\5Z.\2\u01e9"+
		"\u01ea\7\6\2\2\u01ea\u0239\3\2\2\2\u01eb\u01ec\7\u00db\2\2\u01ec\u01f5"+
		"\7\5\2\2\u01ed\u01f2\5\64\33\2\u01ee\u01ef\7\4\2\2\u01ef\u01f1\5\64\33"+
		"\2\u01f0\u01ee\3\2\2\2\u01f1\u01f4\3\2\2\2\u01f2\u01f0\3\2\2\2\u01f2\u01f3"+
		"\3\2\2\2\u01f3\u01f6\3\2\2\2\u01f4\u01f2\3\2\2\2\u01f5\u01ed\3\2\2\2\u01f5"+
		"\u01f6\3\2\2\2\u01f6\u01f7\3\2\2\2\u01f7\u0239\7\6\2\2\u01f8\u01f9\7]"+
		"\2\2\u01f9\u01fa\7\5\2\2\u01fa\u01fd\58\35\2\u01fb\u01fc\7m\2\2\u01fc"+
		"\u01fe\7\u0097\2\2\u01fd\u01fb\3\2\2\2\u01fd\u01fe\3\2\2\2\u01fe\u01ff"+
		"\3\2\2\2\u01ff\u0200\7\6\2\2\u0200\u0239\3\2\2\2\u0201\u0202\7}\2\2\u0202"+
		"\u0203\7\5\2\2\u0203\u0206\58\35\2\u0204\u0205\7m\2\2\u0205\u0207\7\u0097"+
		"\2\2\u0206\u0204\3\2\2\2\u0206\u0207\3\2\2\2\u0207\u0208\3\2\2\2\u0208"+
		"\u0209\7\6\2\2\u0209\u0239\3\2\2\2\u020a\u020b\7\u00ac\2\2\u020b\u020c"+
		"\7\5\2\2\u020c\u020d\5> \2\u020d\u020e\7o\2\2\u020e\u020f\5> \2\u020f"+
		"\u0210\7\6\2\2\u0210\u0239\3\2\2\2\u0211\u0239\5B\"\2\u0212\u0239\7\u010c"+
		"\2\2\u0213\u0214\5x=\2\u0214\u0215\7\7\2\2\u0215\u0216\7\u010c\2\2\u0216"+
		"\u0239\3\2\2\2\u0217\u0218\7\5\2\2\u0218\u021b\5\64\33\2\u0219\u021a\7"+
		"\4\2\2\u021a\u021c\5\64\33\2\u021b\u0219\3\2\2\2\u021c\u021d\3\2\2\2\u021d"+
		"\u021b\3\2\2\2\u021d\u021e\3\2\2\2\u021e\u021f\3\2\2\2\u021f\u0220\7\6"+
		"\2\2\u0220\u0239\3\2\2\2\u0221\u0222\7\5\2\2\u0222\u0223\5\n\6\2\u0223"+
		"\u0224\7\6\2\2\u0224\u0239\3\2\2\2\u0225\u0226\5v<\2\u0226\u022f\7\5\2"+
		"\2\u0227\u022c\58\35\2\u0228\u0229\7\4\2\2\u0229\u022b\58\35\2\u022a\u0228"+
		"\3\2\2\2\u022b\u022e\3\2\2\2\u022c\u022a\3\2\2\2\u022c\u022d\3\2\2\2\u022d"+
		"\u0230\3\2\2\2\u022e\u022c\3\2\2\2\u022f\u0227\3\2\2\2\u022f\u0230\3\2"+
		"\2\2\u0230\u0231\3\2\2\2\u0231\u0232\7\6\2\2\u0232\u0239\3\2\2\2\u0233"+
		"\u0239\5~@\2\u0234\u0235\7\5\2\2\u0235\u0236\58\35\2\u0236\u0237\7\6\2"+
		"\2\u0237\u0239\3\2\2\2\u0238\u01c9\3\2\2\2\u0238\u01cb\3\2\2\2\u0238\u01d7"+
		"\3\2\2\2\u0238\u01e4\3\2\2\2\u0238\u01eb\3\2\2\2\u0238\u01f8\3\2\2\2\u0238"+
		"\u0201\3\2\2\2\u0238\u020a\3\2\2\2\u0238\u0211\3\2\2\2\u0238\u0212\3\2"+
		"\2\2\u0238\u0213\3\2\2\2\u0238\u0217\3\2\2\2\u0238\u0221\3\2\2\2\u0238"+
		"\u0225\3\2\2\2\u0238\u0233\3\2\2\2\u0238\u0234\3\2\2\2\u0239\u0244\3\2"+
		"\2\2\u023a\u023b\f\6\2\2\u023b\u023c\7\b\2\2\u023c\u023d\5> \2\u023d\u023e"+
		"\7\t\2\2\u023e\u0243\3\2\2\2\u023f\u0240\f\4\2\2\u0240\u0241\7\7\2\2\u0241"+
		"\u0243\5~@\2\u0242\u023a\3\2\2\2\u0242\u023f\3\2\2\2\u0243\u0246\3\2\2"+
		"\2\u0244\u0242\3\2\2\2\u0244\u0245\3\2\2\2\u0245A\3\2\2\2\u0246\u0244"+
		"\3\2\2\2\u0247\u0254\7\u0096\2\2\u0248\u0254\5L\'\2\u0249\u024a\5~@\2"+
		"\u024a\u024b\7\u0114\2\2\u024b\u0254\3\2\2\2\u024c\u0254\5\u0084C\2\u024d"+
		"\u0254\5J&\2\u024e\u0250\7\u0114\2\2\u024f\u024e\3\2\2\2\u0250\u0251\3"+
		"\2\2\2\u0251\u024f\3\2\2\2\u0251\u0252\3\2\2\2\u0252\u0254\3\2\2\2\u0253"+
		"\u0247\3\2\2\2\u0253\u0248\3\2\2\2\u0253\u0249\3\2\2\2\u0253\u024c\3\2"+
		"\2\2\u0253\u024d\3\2\2\2\u0253\u024f\3\2\2\2\u0254C\3\2\2\2\u0255\u0256"+
		"\t\n\2\2\u0256E\3\2\2\2\u0257\u0258\t\13\2\2\u0258G\3\2\2\2\u0259\u025a"+
		"\t\f\2\2\u025aI\3\2\2\2\u025b\u025c\t\r\2\2\u025cK\3\2\2\2\u025d\u0260"+
		"\7w\2\2\u025e\u0261\5N(\2\u025f\u0261\5R*\2\u0260\u025e\3\2\2\2\u0260"+
		"\u025f\3\2\2\2\u0260\u0261\3\2\2\2\u0261M\3\2\2\2\u0262\u0264\5P)\2\u0263"+
		"\u0265\5T+\2\u0264\u0263\3\2\2\2\u0264\u0265\3\2\2\2\u0265O\3\2\2\2\u0266"+
		"\u0267\5V,\2\u0267\u0268\5~@\2\u0268\u026a\3\2\2\2\u0269\u0266\3\2\2\2"+
		"\u026a\u026b\3\2\2\2\u026b\u0269\3\2\2\2\u026b\u026c\3\2\2\2\u026cQ\3"+
		"\2\2\2\u026d\u0270\5T+\2\u026e\u0271\5P)\2\u026f\u0271\5T+\2\u0270\u026e"+
		"\3\2\2\2\u0270\u026f\3\2\2\2\u0270\u0271\3\2\2\2\u0271S\3\2\2\2\u0272"+
		"\u0273\5V,\2\u0273\u0274\5~@\2\u0274\u0275\7\u00e5\2\2\u0275\u0276\5~"+
		"@\2\u0276U\3\2\2\2\u0277\u0279\t\16\2\2\u0278\u0277\3\2\2\2\u0278\u0279"+
		"\3\2\2\2\u0279\u027a\3\2\2\2\u027a\u027d\t\17\2\2\u027b\u027d\7\u0114"+
		"\2\2\u027c\u0278\3\2\2\2\u027c\u027b\3\2\2\2\u027dW\3\2\2\2\u027e\u0282"+
		"\7]\2\2\u027f\u0280\7\f\2\2\u0280\u0282\5z>\2\u0281\u027e\3\2\2\2\u0281"+
		"\u027f\3\2\2\2\u0282Y\3\2\2\2\u0283\u0284\7\24\2\2\u0284\u0285\7\u0106"+
		"\2\2\u0285\u0286\5Z.\2\u0286\u0287\7\u0108\2\2\u0287\u02a6\3\2\2\2\u0288"+
		"\u0289\7\u008d\2\2\u0289\u028a\7\u0106\2\2\u028a\u028b\5Z.\2\u028b\u028c"+
		"\7\4\2\2\u028c\u028d\5Z.\2\u028d\u028e\7\u0108\2\2\u028e\u02a6\3\2\2\2"+
		"\u028f\u0296\7\u00db\2\2\u0290\u0292\7\u0106\2\2\u0291\u0293\5d\63\2\u0292"+
		"\u0291\3\2\2\2\u0292\u0293\3\2\2\2\u0293\u0294\3\2\2\2\u0294\u0297\7\u0108"+
		"\2\2\u0295\u0297\7\u0104\2\2\u0296\u0290\3\2\2\2\u0296\u0295\3\2\2\2\u0297"+
		"\u02a6\3\2\2\2\u0298\u02a3\5~@\2\u0299\u029a\7\5\2\2\u029a\u029f\7\u0118"+
		"\2\2\u029b\u029c\7\4\2\2\u029c\u029e\7\u0118\2\2\u029d\u029b\3\2\2\2\u029e"+
		"\u02a1\3\2\2\2\u029f\u029d\3\2\2\2\u029f\u02a0\3\2\2\2\u02a0\u02a2\3\2"+
		"\2\2\u02a1\u029f\3\2\2\2\u02a2\u02a4\7\6\2\2\u02a3\u0299\3\2\2\2\u02a3"+
		"\u02a4\3\2\2\2\u02a4\u02a6\3\2\2\2\u02a5\u0283\3\2\2\2\u02a5\u0288\3\2"+
		"\2\2\u02a5\u028f\3\2\2\2\u02a5\u0298\3\2\2\2\u02a6[\3\2\2\2\u02a7\u02ac"+
		"\5^\60\2\u02a8\u02a9\7\4\2\2\u02a9\u02ab\5^\60\2\u02aa\u02a8\3\2\2\2\u02ab"+
		"\u02ae\3\2\2\2\u02ac\u02aa\3\2\2\2\u02ac\u02ad\3\2\2\2\u02ad]\3\2\2\2"+
		"\u02ae\u02ac\3\2\2\2\u02af\u02b0\5\62\32\2\u02b0\u02b3\5Z.\2\u02b1\u02b2"+
		"\7\u0095\2\2\u02b2\u02b4\7\u0096\2\2\u02b3\u02b1\3\2\2\2\u02b3\u02b4\3"+
		"\2\2\2\u02b4\u02b6\3\2\2\2\u02b5\u02b7\5\b\5\2\u02b6\u02b5\3\2\2\2\u02b6"+
		"\u02b7\3\2\2\2\u02b7\u02b9\3\2\2\2\u02b8\u02ba\5X-\2\u02b9\u02b8\3\2\2"+
		"\2\u02b9\u02ba\3\2\2\2\u02ba_\3\2\2\2\u02bb\u02c0\5b\62\2\u02bc\u02bd"+
		"\7\4\2\2\u02bd\u02bf\5b\62\2\u02be\u02bc\3\2\2\2\u02bf\u02c2\3\2\2\2\u02c0"+
		"\u02be\3\2\2\2\u02c0\u02c1\3\2\2\2\u02c1a\3\2\2\2\u02c2\u02c0\3\2\2\2"+
		"\u02c3\u02c4\5z>\2\u02c4\u02c7\5Z.\2\u02c5\u02c6\7\u0095\2\2\u02c6\u02c8"+
		"\7\u0096\2\2\u02c7\u02c5\3\2\2\2\u02c7\u02c8\3\2\2\2\u02c8\u02ca\3\2\2"+
		"\2\u02c9\u02cb\5\b\5\2\u02ca\u02c9\3\2\2\2\u02ca\u02cb\3\2\2\2\u02cbc"+
		"\3\2\2\2\u02cc\u02d1\5f\64\2\u02cd\u02ce\7\4\2\2\u02ce\u02d0\5f\64\2\u02cf"+
		"\u02cd\3\2\2\2\u02d0\u02d3\3\2\2\2\u02d1\u02cf\3\2\2\2\u02d1\u02d2\3\2"+
		"\2\2\u02d2e\3\2\2\2\u02d3\u02d1\3\2\2\2\u02d4\u02d5\5~@\2\u02d5\u02d6"+
		"\7\n\2\2\u02d6\u02d9\5Z.\2\u02d7\u02d8\7\u0095\2\2\u02d8\u02da\7\u0096"+
		"\2\2\u02d9\u02d7\3\2\2\2\u02d9\u02da\3\2\2\2\u02da\u02dc\3\2\2\2\u02db"+
		"\u02dd\5\b\5\2\u02dc\u02db\3\2\2\2\u02dc\u02dd\3\2\2\2\u02ddg\3\2\2\2"+
		"\u02de\u02df\7\u00fe\2\2\u02df\u02e0\58\35\2\u02e0\u02e1\7\u00e4\2\2\u02e1"+
		"\u02e2\58\35\2\u02e2i\3\2\2\2\u02e3\u02e4\7\u0100\2\2\u02e4\u02e9\5l\67"+
		"\2\u02e5\u02e6\7\4\2\2\u02e6\u02e8\5l\67\2\u02e7\u02e5\3\2\2\2\u02e8\u02eb"+
		"\3\2\2\2\u02e9\u02e7\3\2\2\2\u02e9\u02ea\3\2\2\2\u02eak\3\2\2\2\u02eb"+
		"\u02e9\3\2\2\2\u02ec\u02ed\5z>\2\u02ed\u02ee\7\25\2\2\u02ee\u02ef\5n8"+
		"\2\u02efm\3\2\2\2\u02f0\u031f\5z>\2\u02f1\u02f2\7\5\2\2\u02f2\u02f3\5"+
		"z>\2\u02f3\u02f4\7\6\2\2\u02f4\u031f\3\2\2\2\u02f5\u0318\7\5\2\2\u02f6"+
		"\u02f7\7%\2\2\u02f7\u02f8\7\35\2\2\u02f8\u02fd\58\35\2\u02f9\u02fa\7\4"+
		"\2\2\u02fa\u02fc\58\35\2\u02fb\u02f9\3\2\2\2\u02fc\u02ff\3\2\2\2\u02fd"+
		"\u02fb\3\2\2\2\u02fd\u02fe\3\2\2\2\u02fe\u0319\3\2\2\2\u02ff\u02fd\3\2"+
		"\2\2\u0300\u0301\t\20\2\2\u0301\u0302\7\35\2\2\u0302\u0307\58\35\2\u0303"+
		"\u0304\7\4\2\2\u0304\u0306\58\35\2\u0305\u0303\3\2\2\2\u0306\u0309\3\2"+
		"\2\2\u0307\u0305\3\2\2\2\u0307\u0308\3\2\2\2\u0308\u030b\3\2\2\2\u0309"+
		"\u0307\3\2\2\2\u030a\u0300\3\2\2\2\u030a\u030b\3\2\2\2\u030b\u0316\3\2"+
		"\2\2\u030c\u030d\t\21\2\2\u030d\u030e\7\35\2\2\u030e\u0313\5\22\n\2\u030f"+
		"\u0310\7\4\2\2\u0310\u0312\5\22\n\2\u0311\u030f\3\2\2\2\u0312\u0315\3"+
		"\2\2\2\u0313\u0311\3\2\2\2\u0313\u0314\3\2\2\2\u0314\u0317\3\2\2\2\u0315"+
		"\u0313\3\2\2\2\u0316\u030c\3\2\2\2\u0316\u0317\3\2\2\2\u0317\u0319\3\2"+
		"\2\2\u0318\u02f6\3\2\2\2\u0318\u030a\3\2\2\2\u0319\u031b\3\2\2\2\u031a"+
		"\u031c\5p9\2\u031b\u031a\3\2\2\2\u031b\u031c\3\2\2\2\u031c\u031d\3\2\2"+
		"\2\u031d\u031f\7\6\2\2\u031e\u02f0\3\2\2\2\u031e\u02f1\3\2\2\2\u031e\u02f5"+
		"\3\2\2\2\u031fo\3\2\2\2\u0320\u0321\7\u00b3\2\2\u0321\u0331\5r:\2\u0322"+
		"\u0323\7\u00c7\2\2\u0323\u0331\5r:\2\u0324\u0325\7\u00b3\2\2\u0325\u0326"+
		"\7\31\2\2\u0326\u0327\5r:\2\u0327\u0328\7\20\2\2\u0328\u0329\5r:\2\u0329"+
		"\u0331\3\2\2\2\u032a\u032b\7\u00c7\2\2\u032b\u032c\7\31\2\2\u032c\u032d"+
		"\5r:\2\u032d\u032e\7\20\2\2\u032e\u032f\5r:\2\u032f\u0331\3\2\2\2\u0330"+
		"\u0320\3\2\2\2\u0330\u0322\3\2\2\2\u0330\u0324\3\2\2\2\u0330\u032a\3\2"+
		"\2\2\u0331q\3\2\2\2\u0332\u0333\7\u00f0\2\2\u0333\u033a\t\22\2\2\u0334"+
		"\u0335\7\67\2\2\u0335\u033a\7\u00c6\2\2\u0336\u0337\58\35\2\u0337\u0338"+
		"\t\22\2\2\u0338\u033a\3\2\2\2\u0339\u0332\3\2\2\2\u0339\u0334\3\2\2\2"+
		"\u0339\u0336\3\2\2\2\u033as\3\2\2\2\u033b\u0340\5x=\2\u033c\u033d\7\4"+
		"\2\2\u033d\u033f\5x=\2\u033e\u033c\3\2\2\2\u033f\u0342\3\2\2\2\u0340\u033e"+
		"\3\2\2\2\u0340\u0341\3\2\2\2\u0341u\3\2\2\2\u0342\u0340\3\2\2\2\u0343"+
		"\u0348\5x=\2\u0344\u0348\7[\2\2\u0345\u0348\7\u0081\2\2\u0346\u0348\7"+
		"\u00c0\2\2\u0347\u0343\3\2\2\2\u0347\u0344\3\2\2\2\u0347\u0345\3\2\2\2"+
		"\u0347\u0346\3\2\2\2\u0348w\3\2\2\2\u0349\u034e\5~@\2\u034a\u034b\7\7"+
		"\2\2\u034b\u034d\5~@\2\u034c\u034a\3\2\2\2\u034d\u0350\3\2\2\2\u034e\u034c"+
		"\3\2\2\2\u034e\u034f\3\2\2\2\u034fy\3\2\2\2\u0350\u034e\3\2\2\2\u0351"+
		"\u0352\5~@\2\u0352\u0353\5|?\2\u0353{\3\2\2\2\u0354\u0355\7\u010b\2\2"+
		"\u0355\u0357\5~@\2\u0356\u0354\3\2\2\2\u0357\u0358\3\2\2\2\u0358\u0356"+
		"\3\2\2\2\u0358\u0359\3\2\2\2\u0359\u035c\3\2\2\2\u035a\u035c\3\2\2\2\u035b"+
		"\u0356\3\2\2\2\u035b\u035a\3\2\2\2\u035c}\3\2\2\2\u035d\u0360\5\u0080"+
		"A\2\u035e\u0360\5\u008aF\2\u035f\u035d\3\2\2\2\u035f\u035e\3\2\2\2\u0360"+
		"\177\3\2\2\2\u0361\u0366\7\u011d\2\2\u0362\u0366\5\u0082B\2\u0363\u0366"+
		"\5\u0088E\2\u0364\u0366\5\u008cG\2\u0365\u0361\3\2\2\2\u0365\u0362\3\2"+
		"\2\2\u0365\u0363\3\2\2\2\u0365\u0364\3\2\2\2\u0366\u0081\3\2\2\2\u0367"+
		"\u0368\7\u011e\2\2\u0368\u0083\3\2\2\2\u0369\u036b\7\u010b\2\2\u036a\u0369"+
		"\3\2\2\2\u036a\u036b\3\2\2\2\u036b\u036c\3\2\2\2\u036c\u0386\t\23\2\2"+
		"\u036d\u036f\7\u010b\2\2\u036e\u036d\3\2\2\2\u036e\u036f\3\2\2\2\u036f"+
		"\u0370\3\2\2\2\u0370\u0386\7\u0118\2\2\u0371\u0373\7\u010b\2\2\u0372\u0371"+
		"\3\2\2\2\u0372\u0373\3\2\2\2\u0373\u0374\3\2\2\2\u0374\u0386\7\u0115\2"+
		"\2\u0375\u0377\7\u010b\2\2\u0376\u0375\3\2\2\2\u0376\u0377\3\2\2\2\u0377"+
		"\u0378\3\2\2\2\u0378\u0386\7\u0116\2\2\u0379\u037b\7\u010b\2\2\u037a\u0379"+
		"\3\2\2\2\u037a\u037b\3\2\2\2\u037b\u037c\3\2\2\2\u037c\u0386\7\u0117\2"+
		"\2\u037d\u037f\7\u010b\2\2\u037e\u037d\3\2\2\2\u037e\u037f\3\2\2\2\u037f"+
		"\u0380\3\2\2\2\u0380\u0386\7\u011b\2\2\u0381\u0383\7\u010b\2\2\u0382\u0381"+
		"\3\2\2\2\u0382\u0383\3\2\2\2\u0383\u0384\3\2\2\2\u0384\u0386\7\u011c\2"+
		"\2\u0385\u036a\3\2\2\2\u0385\u036e\3\2\2\2\u0385\u0372\3\2\2\2\u0385\u0376"+
		"\3\2\2\2\u0385\u037a\3\2\2\2\u0385\u037e\3\2\2\2\u0385\u0382\3\2\2\2\u0386"+
		"\u0085\3\2\2\2\u0387\u0388\7\u00ee\2\2\u0388\u038f\5Z.\2\u0389\u038f\5"+
		"\b\5\2\u038a\u038f\5X-\2\u038b\u038c\t\24\2\2\u038c\u038d\7\u0095\2\2"+
		"\u038d\u038f\7\u0096\2\2\u038e\u0387\3\2\2\2\u038e\u0389\3\2\2\2\u038e"+
		"\u038a\3\2\2\2\u038e\u038b\3\2\2\2\u038f\u0087\3\2\2\2\u0390\u0391\t\25"+
		"\2\2\u0391\u0089\3\2\2\2\u0392\u0393\t\26\2\2\u0393\u008b\3\2\2\2\u0394"+
		"\u0395\t\27\2\2\u0395\u008d\3\2\2\2r\u0092\u00a9\u00ac\u00b5\u00b8\u00bd"+
		"\u00bf\u00ca\u00ce\u00d2\u00d6\u00d9\u00dd\u00ea\u00fa\u0103\u010a\u0112"+
		"\u0119\u0128\u012b\u012f\u0131\u0138\u0140\u0145\u0149\u014b\u0152\u015c"+
		"\u015e\u0166\u0168\u016c\u0174\u017d\u0183\u018b\u0190\u0196\u019a\u019f"+
		"\u01a4\u01a9\u01af\u01c4\u01c6\u01cf\u01d3\u01dc\u01e0\u01f2\u01f5\u01fd"+
		"\u0206\u021d\u022c\u022f\u0238\u0242\u0244\u0251\u0253\u0260\u0264\u026b"+
		"\u0270\u0278\u027c\u0281\u0292\u0296\u029f\u02a3\u02a5\u02ac\u02b3\u02b6"+
		"\u02b9\u02c0\u02c7\u02ca\u02d1\u02d9\u02dc\u02e9\u02fd\u0307\u030a\u0313"+
		"\u0316\u0318\u031b\u031e\u0330\u0339\u0340\u0347\u034e\u0358\u035b\u035f"+
		"\u0365\u036a\u036e\u0372\u0376\u037a\u037e\u0382\u0385\u038e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}