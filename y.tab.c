/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _leftparen = 258,
     _rightparen = 259,
     _leftbrace = 260,
     _rightbrace = 261,
     _leftbracket = 262,
     _rightbracket = 263,
     _semicolon = 264,
     _boolean = 265,
     _double = 266,
     _int = 267,
     _string = 268,
     _class = 269,
     _implements = 270,
     _interface = 271,
     _void = 272,
     _id = 273,
     _if = 274,
     _else = 275,
     _break = 276,
     _extends = 277,
     _for = 278,
     _new = 279,
     _newarray = 280,
     _println = 281,
     _readln = 282,
     _return = 283,
     _while = 284,
     _comma = 285,
     _period = 286,
     _intconstant = 287,
     _doubleconstant = 288,
     _stringconstant = 289,
     _booleanconstant = 290,
     _mod = 291,
     _division = 292,
     _multiplication = 293,
     _minus = 294,
     _plus = 295,
     _greaterequal = 296,
     _greater = 297,
     _lessequal = 298,
     _less = 299,
     _notequal = 300,
     _equal = 301,
     _and = 302,
     _or = 303,
     _assignop = 304,
     _not = 305,
     IF_ONLY = 306
   };
#endif
/* Tokens.  */
#define _leftparen 258
#define _rightparen 259
#define _leftbrace 260
#define _rightbrace 261
#define _leftbracket 262
#define _rightbracket 263
#define _semicolon 264
#define _boolean 265
#define _double 266
#define _int 267
#define _string 268
#define _class 269
#define _implements 270
#define _interface 271
#define _void 272
#define _id 273
#define _if 274
#define _else 275
#define _break 276
#define _extends 277
#define _for 278
#define _new 279
#define _newarray 280
#define _println 281
#define _readln 282
#define _return 283
#define _while 284
#define _comma 285
#define _period 286
#define _intconstant 287
#define _doubleconstant 288
#define _stringconstant 289
#define _booleanconstant 290
#define _mod 291
#define _division 292
#define _multiplication 293
#define _minus 294
#define _plus 295
#define _greaterequal 296
#define _greater 297
#define _lessequal 298
#define _less 299
#define _notequal 300
#define _equal 301
#define _and 302
#define _or 303
#define _assignop 304
#define _not 305
#define IF_ONLY 306




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <stdio.h>
extern int yylex();
extern int yyparse();
void yyerror(char *s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 215 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   297

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      21,    24,    25,    28,    30,    32,    34,    36,    38,    45,
      52,    54,    58,    60,    61,    64,    65,    67,    71,    74,
      75,    83,    85,    87,    90,    91,    97,   104,   111,   114,
     115,   117,   118,   121,   123,   125,   127,   129,   131,   133,
     135,   138,   139,   146,   154,   160,   170,   173,   177,   183,
     188,   192,   194,   196,   198,   202,   206,   210,   214,   218,
     222,   226,   230,   234,   238,   242,   246,   250,   254,   258,
     261,   264,   269,   276,   278,   282,   284,   287,   291,   294,
     299,   305,   308,   310,   311,   313,   315,   317
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    -1,    55,    56,    -1,
      57,    -1,    61,    -1,    67,    -1,    70,    -1,    59,     9,
      -1,    58,    57,    -1,    -1,    60,    18,    -1,    12,    -1,
      11,    -1,    10,    -1,    13,    -1,    18,    -1,    60,    18,
       3,    63,     4,    82,    -1,    17,    18,     3,    63,     4,
      82,    -1,    59,    -1,    62,    30,    59,    -1,    62,    -1,
      -1,    22,    18,    -1,    -1,    18,    -1,    65,    30,    18,
      -1,    15,    65,    -1,    -1,    14,    18,    64,    66,     5,
      69,     6,    -1,    57,    -1,    61,    -1,    69,    68,    -1,
      -1,    16,    18,     5,    72,     6,    -1,    60,    18,     3,
      63,     4,     9,    -1,    17,    18,     3,    63,     4,     9,
      -1,    72,    71,    -1,    -1,    83,    -1,    -1,    73,     9,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    75,    74,    -1,    -1,    19,
       3,    83,     4,    74,    51,    -1,    19,     3,    83,     4,
      74,    20,    74,    -1,    29,     3,    83,     4,    74,    -1,
      23,     3,    73,     9,    83,     9,    73,     4,    74,    -1,
      21,     9,    -1,    28,    73,     9,    -1,    26,     3,    84,
       4,     9,    -1,     5,    58,    75,     6,    -1,    85,    49,
      83,    -1,    90,    -1,    85,    -1,    87,    -1,     3,    83,
       4,    -1,    83,    40,    83,    -1,    83,    39,    83,    -1,
      83,    38,    83,    -1,    83,    37,    83,    -1,    83,    36,
      83,    -1,    39,    83,    38,    -1,    83,    44,    83,    -1,
      83,    43,    83,    -1,    83,    42,    83,    -1,    83,    41,
      83,    -1,    83,    46,    83,    -1,    83,    45,    83,    -1,
      83,    47,    83,    -1,    83,    48,    83,    -1,    50,    83,
      -1,    27,    52,    -1,    24,     3,    18,     4,    -1,    25,
       3,    32,    30,    60,     4,    -1,    83,    -1,    84,    30,
      83,    -1,    18,    -1,    85,    86,    -1,     7,    83,     8,
      -1,    86,    88,    -1,    18,     3,    89,     4,    -1,    18,
      88,     3,    89,     4,    -1,    31,    18,    -1,    84,    -1,
      -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    28,    29,    32,    33,    34,    35,    38,
      41,    42,    45,    48,    49,    50,    51,    52,    55,    56,
      59,    60,    63,    64,    67,    68,    71,    72,    75,    76,
      79,    82,    83,    86,    87,    90,    93,    94,    97,    98,
     101,   102,   105,   106,   107,   108,   109,   110,   111,   112,
     115,   116,   119,   120,   123,   126,   129,   132,   135,   138,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   166,   167,   170,   171,   174,   175,   178,
     179,   182,   185,   186,   189,   190,   191,   192
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_leftparen", "_rightparen",
  "_leftbrace", "_rightbrace", "_leftbracket", "_rightbracket",
  "_semicolon", "_boolean", "_double", "_int", "_string", "_class",
  "_implements", "_interface", "_void", "_id", "_if", "_else", "_break",
  "_extends", "_for", "_new", "_newarray", "_println", "_readln",
  "_return", "_while", "_comma", "_period", "_intconstant",
  "_doubleconstant", "_stringconstant", "_booleanconstant", "_mod",
  "_division", "_multiplication", "_minus", "_plus", "_greaterequal",
  "_greater", "_lessequal", "_less", "_notequal", "_equal", "_and", "_or",
  "_assignop", "_not", "IF_ONLY", "\"()\"", "$accept", "PARSER", "START",
  "EXPR1", "VAR_DECL", "VAR_DECLS", "VAR", "TYPE", "FUNCTION_DECL",
  "VAR_PLUS", "FORMALS", "EXTEND", "ID_PLUS", "IMPLEMENT", "CLASS_DECL",
  "FIELD", "FIELD_PLUS", "INTERFACE_DECL", "PROTOTYPE", "PROTOTYPE_PLUS",
  "EXPR_ONE", "STMT", "STMTS", "IF_STMT", "WHILE_STMT", "FOR_STMT",
  "BREAK_STMT", "RETURN_STMT", "PRINT_STMT", "STMT_BLOCK", "EXPR", "EXPRS",
  "LVALUE", "LVALUE_EXPR", "CALL", "PRODPERIODID", "ACTUALS", "CONSTANT", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    57,
      58,    58,    59,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    68,    68,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    76,    76,    77,    78,    79,    80,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    89,    89,    90,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     6,     6,
       1,     3,     1,     0,     2,     0,     1,     3,     2,     0,
       7,     1,     1,     2,     0,     5,     6,     6,     2,     0,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     6,     7,     5,     9,     2,     3,     5,     4,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     6,     1,     3,     1,     2,     3,     2,     4,
       5,     2,     1,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,    14,    13,    16,     0,     0,     0,    17,     0,
       2,     3,     5,     0,     0,     6,     7,     8,    25,     0,
       0,     1,     4,     9,    12,     0,    29,    39,    23,    23,
      24,     0,     0,     0,    20,     0,    22,     0,     0,    26,
      28,    34,    35,     0,     0,    38,    12,     0,     0,     0,
       0,     0,     0,     0,    21,    11,    19,    18,    27,    30,
      31,    32,    33,    23,    23,    51,     0,     0,    10,    41,
       0,     0,     0,    59,    85,     0,     0,     0,     0,     0,
       0,     0,    41,     0,    94,    95,    96,    97,     0,     0,
       0,    50,    43,    44,    45,    46,    47,    48,    49,    40,
      62,    63,    61,    37,    36,     0,    93,     0,     0,     0,
      56,    41,     0,     0,     0,    80,     0,     0,     0,    79,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    64,    83,    92,
       0,    91,    93,     0,     0,     0,     0,     0,    57,     0,
      70,    69,    68,    67,    66,    65,    74,    73,    72,    71,
      76,    75,    77,    78,     0,    60,    88,     0,    89,     0,
      41,     0,    81,     0,     0,    41,    87,    84,    90,     0,
       0,     0,    58,    54,    41,    52,    41,    82,    53,     0,
      41,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    65,    13,    35,    15,    36,
      37,    26,    40,    32,    16,    62,    51,    17,    45,    33,
      90,    91,    69,    92,    93,    94,    95,    96,    97,    98,
      99,   139,   100,   136,   101,   108,   140,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -162
static const yytype_int16 yypact[] =
{
     115,  -162,  -162,  -162,  -162,    -7,     3,     6,  -162,    13,
     115,  -162,  -162,     9,    10,  -162,  -162,  -162,     5,    17,
      28,  -162,  -162,  -162,    29,    31,    20,  -162,    74,    74,
    -162,    32,    41,    65,  -162,    49,    38,    43,    66,  -162,
      39,  -162,  -162,    54,    56,  -162,  -162,    74,    75,    75,
      61,    83,    94,    96,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,    74,    74,    74,   103,   111,  -162,    85,
     107,   113,   131,  -162,    12,   127,   129,   137,   145,   156,
     157,   109,   131,   159,  -162,  -162,  -162,  -162,   131,   131,
     158,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,   223,
      -5,  -162,  -162,  -162,  -162,   167,   131,   154,   171,   131,
    -162,   131,   161,   148,   131,  -162,   168,   131,   236,  -162,
    -162,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   160,  -162,   223,   152,
     184,  -162,   131,   183,   180,   186,   162,     4,  -162,   196,
     151,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,   209,  -162,  -162,   131,  -162,   189,
     118,   131,  -162,    74,   185,   118,  -162,   223,  -162,   -15,
     249,   191,  -162,  -162,   118,  -162,   131,  -162,  -162,   192,
     118,  -162
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,  -162,   187,   -39,  -162,   -22,     0,   147,  -162,
     -25,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
     -81,  -161,  -162,  -162,  -162,  -162,  -162,  -162,  -162,   -32,
     -69,    88,  -162,  -162,  -162,    63,    76,  -162
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,   116,   134,   105,    38,   184,    34,    34,   174,   179,
      14,    18,    60,    21,   183,   106,    56,    57,    23,   118,
     119,    19,    27,   188,    20,    54,    68,    25,    24,   191,
     144,    28,    29,    44,   167,    31,   185,   138,    66,    67,
     143,    34,    34,   107,   135,   138,    41,    48,   149,    30,
      39,    14,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    46,    47,    50,
      49,    42,    52,   138,    53,     1,     2,     3,     4,    58,
      55,   153,    43,     8,     1,     2,     3,     4,    72,    59,
      55,    73,     8,     1,     2,     3,     4,    63,   177,    64,
       7,     8,   180,    74,    75,   189,    76,    70,    77,    78,
      79,    80,    81,    82,    83,    71,   103,    84,    85,    86,
      87,    72,   104,    55,    88,     1,     2,     3,     4,     5,
     109,     6,     7,     8,    72,    89,    74,    75,   110,    76,
     111,    77,    78,    79,    80,    81,    82,    83,   112,    74,
      84,    85,    86,    87,    72,    78,    79,    88,    81,   113,
     114,   115,   117,    84,    85,    86,    87,   120,    89,    74,
      88,   137,   141,   181,   142,    78,    79,   148,    81,   145,
     146,    89,   167,    84,    85,    86,    87,   170,   168,   171,
     172,   107,   173,   178,   182,   187,   190,    22,    61,   166,
     175,    89,   147,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,   176,   169,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   186,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   121,   122,   150,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
       0,    82,     7,    72,    29,    20,    28,    29,     4,   170,
      10,    18,    51,     0,   175,     3,    48,    49,     9,    88,
      89,    18,     5,   184,    18,    47,    65,    22,    18,   190,
     111,     3,     3,    33,    30,    15,    51,   106,    63,    64,
     109,    63,    64,    31,    49,   114,     5,     4,   117,    18,
      18,    51,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    18,    30,    30,
       4,     6,    18,   142,    18,    10,    11,    12,    13,    18,
       5,   150,    17,    18,    10,    11,    12,    13,     3,     6,
       5,     6,    18,    10,    11,    12,    13,     3,   167,     3,
      17,    18,   171,    18,    19,   186,    21,     4,    23,    24,
      25,    26,    27,    28,    29,     4,     9,    32,    33,    34,
      35,     3,     9,     5,    39,    10,    11,    12,    13,    14,
       3,    16,    17,    18,     3,    50,    18,    19,     9,    21,
       3,    23,    24,    25,    26,    27,    28,    29,     3,    18,
      32,    33,    34,    35,     3,    24,    25,    39,    27,     3,
       3,    52,     3,    32,    33,    34,    35,     9,    50,    18,
      39,     4,    18,   173,     3,    24,    25,     9,    27,    18,
      32,    50,    30,    32,    33,    34,    35,     4,     4,     9,
       4,    31,    30,     4,     9,     4,     4,    10,    51,   136,
       4,    50,   114,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,     8,   142,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     9,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    14,    16,    17,    18,    54,
      55,    56,    57,    59,    60,    61,    67,    70,    18,    18,
      18,     0,    56,     9,    18,    22,    64,     5,     3,     3,
      18,    15,    66,    72,    59,    60,    62,    63,    63,    18,
      65,     5,     6,    17,    60,    71,    18,    30,     4,     4,
      30,    69,    18,    18,    59,     5,    82,    82,    18,     6,
      57,    61,    68,     3,     3,    58,    63,    63,    57,    75,
       4,     4,     3,     6,    18,    19,    21,    23,    24,    25,
      26,    27,    28,    29,    32,    33,    34,    35,    39,    50,
      73,    74,    76,    77,    78,    79,    80,    81,    82,    83,
      85,    87,    90,     9,     9,    83,     3,    31,    88,     3,
       9,     3,     3,     3,     3,    52,    73,     3,    83,    83,
       9,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     7,    49,    86,     4,    83,    84,
      89,    18,     3,    83,    73,    18,    32,    84,     9,    83,
      38,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    88,    30,     4,    89,
       4,     9,     4,    30,     4,     4,     8,    83,     4,    74,
      83,    60,     9,    74,    20,    51,     9,     4,    74,    73,
       4,    74
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
	printf("[Shift]");

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 24 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 3:
#line 28 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 4:
#line 29 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 5:
#line 32 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 6:
#line 33 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 7:
#line 34 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 8:
#line 35 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 9:
#line 38 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 10:
#line 41 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 11:
#line 42 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 12:
#line 45 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 13:
#line 48 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 14:
#line 49 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 15:
#line 50 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 16:
#line 51 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 17:
#line 52 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 18:
#line 55 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 19:
#line 56 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 20:
#line 59 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 21:
#line 60 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 22:
#line 63 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 23:
#line 64 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 24:
#line 67 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 25:
#line 68 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 26:
#line 71 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 27:
#line 72 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 28:
#line 75 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 29:
#line 76 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 30:
#line 79 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 31:
#line 82 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 32:
#line 83 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 33:
#line 86 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 34:
#line 87 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 35:
#line 90 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 36:
#line 93 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 37:
#line 94 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 38:
#line 97 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 39:
#line 98 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 40:
#line 101 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 41:
#line 102 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 42:
#line 105 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 43:
#line 106 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 44:
#line 107 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 45:
#line 108 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 46:
#line 109 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 47:
#line 110 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 48:
#line 111 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 49:
#line 112 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 50:
#line 115 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 51:
#line 116 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 52:
#line 119 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 53:
#line 120 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 54:
#line 123 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 55:
#line 126 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 56:
#line 129 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 57:
#line 132 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 58:
#line 135 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 59:
#line 138 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 60:
#line 141 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 61:
#line 142 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 62:
#line 143 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 63:
#line 144 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 64:
#line 145 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 65:
#line 146 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 66:
#line 147 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 67:
#line 148 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 68:
#line 149 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 69:
#line 150 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 70:
#line 151 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 71:
#line 152 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 72:
#line 153 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 73:
#line 154 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 74:
#line 155 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 75:
#line 156 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 76:
#line 157 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 77:
#line 158 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 78:
#line 159 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 79:
#line 160 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 80:
#line 161 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 81:
#line 162 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 82:
#line 163 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 83:
#line 166 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 84:
#line 167 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 85:
#line 170 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 86:
#line 171 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 87:
#line 174 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 88:
#line 175 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 89:
#line 178 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 90:
#line 179 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 92:
#line 185 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 93:
#line 186 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 94:
#line 189 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 95:
#line 190 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 96:
#line 191 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;

  case 97:
#line 192 "parser.y"
    {printf("[Reduce %i%s", yyn, "]");}
    break;


/* Line 1267 of yacc.c.  */
#line 2081 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 195 "parser.y"


int main(){

    int result = yyparse();
    if (result == 0){
	printf("\n[Accept]");
    }
    else{
     printf("\n[Reject]");
    }
    printf("\n");
    return 0;
}

void yyerror (char *s) {}

int yywrap (void) {return 1;}

