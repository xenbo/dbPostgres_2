/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_BASE_YY_GRAM_H_INCLUDED
# define YY_BASE_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    FCONST = 259,
    SCONST = 260,
    BCONST = 261,
    XCONST = 262,
    Op = 263,
    ICONST = 264,
    PARAM = 265,
    TYPECAST = 266,
    DOT_DOT = 267,
    COLON_EQUALS = 268,
    EQUALS_GREATER = 269,
    LESS_EQUALS = 270,
    GREATER_EQUALS = 271,
    NOT_EQUALS = 272,
    ABORT_P = 273,
    ABSOLUTE_P = 274,
    ACCESS = 275,
    ACTION = 276,
    ADD_P = 277,
    ADMIN = 278,
    AFTER = 279,
    AGGREGATE = 280,
    ALL = 281,
    ALSO = 282,
    ALTER = 283,
    ALWAYS = 284,
    ANALYSE = 285,
    ANALYZE = 286,
    AND = 287,
    ANY = 288,
    ARRAY = 289,
    AS = 290,
    ASC = 291,
    ASSERTION = 292,
    ASSIGNMENT = 293,
    ASYMMETRIC = 294,
    AT = 295,
    ATTACH = 296,
    ATTRIBUTE = 297,
    AUTHORIZATION = 298,
    BACKWARD = 299,
    BEFORE = 300,
    BEGIN_P = 301,
    BETWEEN = 302,
    BIGINT = 303,
    BINARY = 304,
    BIT = 305,
    BOOLEAN_P = 306,
    BOTH = 307,
    BY = 308,
    CACHE = 309,
    CALL = 310,
    CALLED = 311,
    CASCADE = 312,
    CASCADED = 313,
    CASE = 314,
    CAST = 315,
    CATALOG_P = 316,
    CHAIN = 317,
    CHAR_P = 318,
    CHARACTER = 319,
    CHARACTERISTICS = 320,
    CHECK = 321,
    CHECKPOINT = 322,
    CLASS = 323,
    CLOSE = 324,
    CLUSTER = 325,
    COALESCE = 326,
    COLLATE = 327,
    COLLATION = 328,
    COLUMN = 329,
    COLUMNS = 330,
    COMMENT = 331,
    COMMENTS = 332,
    COMMIT = 333,
    COMMITTED = 334,
    CONCURRENTLY = 335,
    CONFIGURATION = 336,
    CONFLICT = 337,
    CONNECTION = 338,
    CONSTRAINT = 339,
    CONSTRAINTS = 340,
    CONTENT_P = 341,
    CONTINUE_P = 342,
    CONVERSION_P = 343,
    COPY = 344,
    COST = 345,
    CREATE = 346,
    CROSS = 347,
    CSV = 348,
    CUBE = 349,
    CURRENT_P = 350,
    CURRENT_CATALOG = 351,
    CURRENT_DATE = 352,
    CURRENT_ROLE = 353,
    CURRENT_SCHEMA = 354,
    CURRENT_TIME = 355,
    CURRENT_TIMESTAMP = 356,
    CURRENT_USER = 357,
    CURSOR = 358,
    CYCLE = 359,
    DATA_P = 360,
    DATABASE = 361,
    DAY_P = 362,
    DEALLOCATE = 363,
    DEC = 364,
    DECIMAL_P = 365,
    DECLARE = 366,
    DEFAULT = 367,
    DEFAULTS = 368,
    DEFERRABLE = 369,
    DEFERRED = 370,
    DEFINER = 371,
    DELETE_P = 372,
    DELIMITER = 373,
    DELIMITERS = 374,
    DEPENDS = 375,
    DESC = 376,
    DETACH = 377,
    DICTIONARY = 378,
    DISABLE_P = 379,
    DISCARD = 380,
    DISTINCT = 381,
    DO = 382,
    DOCUMENT_P = 383,
    DOMAIN_P = 384,
    DOUBLE_P = 385,
    DROP = 386,
    EACH = 387,
    ELSE = 388,
    ENABLE_P = 389,
    ENCODING = 390,
    ENCRYPTED = 391,
    END_P = 392,
    ENUM_P = 393,
    ESCAPE = 394,
    EVENT = 395,
    EXCEPT = 396,
    EXCLUDE = 397,
    EXCLUDING = 398,
    EXCLUSIVE = 399,
    EXECUTE = 400,
    EXISTS = 401,
    EXPLAIN = 402,
    EXTENSION = 403,
    EXTERNAL = 404,
    EXTRACT = 405,
    FALSE_P = 406,
    FAMILY = 407,
    FETCH = 408,
    FILTER = 409,
    FIRST_P = 410,
    FLOAT_P = 411,
    FOLLOWING = 412,
    FOR = 413,
    FORCE = 414,
    FOREIGN = 415,
    FORWARD = 416,
    FREEZE = 417,
    FROM = 418,
    FULL = 419,
    FUNCTION = 420,
    FUNCTIONS = 421,
    GENERATED = 422,
    GLOBAL = 423,
    GRANT = 424,
    GRANTED = 425,
    GREATEST = 426,
    GROUP_P = 427,
    GROUPING = 428,
    HANDLER = 429,
    HAVING = 430,
    HEADER_P = 431,
    HOLD = 432,
    HOUR_P = 433,
    IDENTITY_P = 434,
    IF_P = 435,
    ILIKE = 436,
    IMMEDIATE = 437,
    IMMUTABLE = 438,
    IMPLICIT_P = 439,
    IMPORT_P = 440,
    IN_P = 441,
    INCLUDING = 442,
    INCREMENT = 443,
    INDEX = 444,
    INDEXES = 445,
    INHERIT = 446,
    INHERITS = 447,
    INITIALLY = 448,
    INLINE_P = 449,
    INNER_P = 450,
    INOUT = 451,
    INPUT_P = 452,
    INSENSITIVE = 453,
    INSERT = 454,
    INSTEAD = 455,
    INT_P = 456,
    INTEGER = 457,
    INTERSECT = 458,
    INTERVAL = 459,
    INTO = 460,
    INVOKER = 461,
    IS = 462,
    ISNULL = 463,
    ISOLATION = 464,
    JOIN = 465,
    KEY = 466,
    LABEL = 467,
    LANGUAGE = 468,
    LARGE_P = 469,
    LAST_P = 470,
    LATERAL_P = 471,
    LEADING = 472,
    LEAKPROOF = 473,
    LEAST = 474,
    LEFT = 475,
    LEVEL = 476,
    LIKE = 477,
    LIMIT = 478,
    LISTEN = 479,
    LOAD = 480,
    LOCAL = 481,
    LOCALTIME = 482,
    LOCALTIMESTAMP = 483,
    LOCATION = 484,
    LOCK_P = 485,
    LOCKED = 486,
    LOGGED = 487,
    MAPPING = 488,
    MATCH = 489,
    MATERIALIZED = 490,
    MAXVALUE = 491,
    METHOD = 492,
    MINUTE_P = 493,
    MINVALUE = 494,
    MODE = 495,
    MONTH_P = 496,
    MOVE = 497,
    NAME_P = 498,
    NAMES = 499,
    NATIONAL = 500,
    NATURAL = 501,
    NCHAR = 502,
    NEW = 503,
    NEXT = 504,
    NO = 505,
    NONE = 506,
    NOT = 507,
    NOTHING = 508,
    NOTIFY = 509,
    NOTNULL = 510,
    NOWAIT = 511,
    NULL_P = 512,
    NULLIF = 513,
    NULLS_P = 514,
    NUMERIC = 515,
    OBJECT_P = 516,
    OF = 517,
    OFF = 518,
    OFFSET = 519,
    OIDS = 520,
    OLD = 521,
    ON = 522,
    ONLY = 523,
    OPERATOR = 524,
    OPTION = 525,
    OPTIONS = 526,
    OR = 527,
    ORDER = 528,
    ORDINALITY = 529,
    OUT_P = 530,
    OUTER_P = 531,
    OVER = 532,
    OVERLAPS = 533,
    OVERLAY = 534,
    OVERRIDING = 535,
    OWNED = 536,
    OWNER = 537,
    PARALLEL = 538,
    PARSER = 539,
    PARTIAL = 540,
    PARTITION = 541,
    PASSING = 542,
    PASSWORD = 543,
    PLACING = 544,
    PLANS = 545,
    POLICY = 546,
    POSITION = 547,
    PRECEDING = 548,
    PRECISION = 549,
    PRESERVE = 550,
    PREPARE = 551,
    PREPARED = 552,
    PRIMARY = 553,
    PRIOR = 554,
    PRIVILEGES = 555,
    PROCEDURAL = 556,
    PROCEDURE = 557,
    PROCEDURES = 558,
    PROGRAM = 559,
    PUBLICATION = 560,
    QUOTE = 561,
    RANGE = 562,
    READ = 563,
    REAL = 564,
    REASSIGN = 565,
    RECHECK = 566,
    RECURSIVE = 567,
    REF = 568,
    REFERENCES = 569,
    REFERENCING = 570,
    REFRESH = 571,
    REINDEX = 572,
    RELATIVE_P = 573,
    RELEASE = 574,
    RENAME = 575,
    REPEATABLE = 576,
    REPLACE = 577,
    REPLICA = 578,
    RESET = 579,
    RESTART = 580,
    RESTRICT = 581,
    RETURNING = 582,
    RETURNS = 583,
    REVOKE = 584,
    RIGHT = 585,
    ROLE = 586,
    ROLLBACK = 587,
    ROLLUP = 588,
    ROUTINE = 589,
    ROUTINES = 590,
    ROW = 591,
    ROWS = 592,
    RULE = 593,
    SAVEPOINT = 594,
    SCHEMA = 595,
    SCHEMAS = 596,
    SCROLL = 597,
    SEARCH = 598,
    SECOND_P = 599,
    SECURITY = 600,
    SELECT = 601,
    SEQUENCE = 602,
    SEQUENCES = 603,
    SERIALIZABLE = 604,
    SERVER = 605,
    SESSION = 606,
    SESSION_USER = 607,
    SET = 608,
    SETS = 609,
    SETOF = 610,
    SHARE = 611,
    SHOW = 612,
    SIMILAR = 613,
    SIMPLE = 614,
    SKIP = 615,
    SMALLINT = 616,
    SNAPSHOT = 617,
    SOME = 618,
    SQL_P = 619,
    STABLE = 620,
    STANDALONE_P = 621,
    START = 622,
    STATEMENT = 623,
    STATISTICS = 624,
    STDIN = 625,
    STDOUT = 626,
    STORAGE = 627,
    STRICT_P = 628,
    STRIP_P = 629,
    SUBSCRIPTION = 630,
    SUBSTRING = 631,
    SYMMETRIC = 632,
    SYSID = 633,
    SYSTEM_P = 634,
    TABLE = 635,
    TABLES = 636,
    TABLESAMPLE = 637,
    TABLESPACE = 638,
    TEMP = 639,
    TEMPLATE = 640,
    TEMPORARY = 641,
    TEXT_P = 642,
    THEN = 643,
    TIME = 644,
    TIMESTAMP = 645,
    TO = 646,
    TRAILING = 647,
    TRANSACTION = 648,
    TRANSFORM = 649,
    TREAT = 650,
    TRIGGER = 651,
    TRIM = 652,
    TRUE_P = 653,
    TRUNCATE = 654,
    TRUSTED = 655,
    TYPE_P = 656,
    TYPES_P = 657,
    UNBOUNDED = 658,
    UNCOMMITTED = 659,
    UNENCRYPTED = 660,
    UNION = 661,
    UNIQUE = 662,
    UNKNOWN = 663,
    UNLISTEN = 664,
    UNLOGGED = 665,
    UNTIL = 666,
    UPDATE = 667,
    USER = 668,
    USING = 669,
    VACUUM = 670,
    VALID = 671,
    VALIDATE = 672,
    VALIDATOR = 673,
    VALUE_P = 674,
    VALUES = 675,
    VARCHAR = 676,
    VARIADIC = 677,
    VARYING = 678,
    VERBOSE = 679,
    VERSION_P = 680,
    VIEW = 681,
    VIEWS = 682,
    VOLATILE = 683,
    WHEN = 684,
    WHERE = 685,
    WHITESPACE_P = 686,
    WINDOW = 687,
    WITH = 688,
    WITHIN = 689,
    WITHOUT = 690,
    WORK = 691,
    WRAPPER = 692,
    WRITE = 693,
    XML_P = 694,
    XMLATTRIBUTES = 695,
    XMLCONCAT = 696,
    XMLELEMENT = 697,
    XMLEXISTS = 698,
    XMLFOREST = 699,
    XMLNAMESPACES = 700,
    XMLPARSE = 701,
    XMLPI = 702,
    XMLROOT = 703,
    XMLSERIALIZE = 704,
    XMLTABLE = 705,
    YEAR_P = 706,
    YES_P = 707,
    ZONE = 708,
    NOT_LA = 709,
    NULLS_LA = 710,
    WITH_LA = 711,
    POSTFIXOP = 712,
    UMINUS = 713
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 202 "gram.y" /* yacc.c:1909  */

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs		*objwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	InferClause			*infer;
	OnConflictClause	*onconflict;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	struct ImportQual	*importqual;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
	PartitionElem		*partelem;
	PartitionSpec		*partspec;
	PartitionBoundSpec	*partboundspec;
	RoleSpec			*rolespec;

#line 557 "gram.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int base_yyparse (core_yyscan_t yyscanner);

#endif /* !YY_BASE_YY_GRAM_H_INCLUDED  */
