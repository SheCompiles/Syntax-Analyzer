/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
extern int yyparse();
void yyerror(char *s);

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    _assignop = 291,
    _or = 292,
    _and = 293,
    _equal = 294,
    _notequal = 295,
    _less = 296,
    _lessequal = 297,
    _greater = 298,
    _greaterequal = 299,
    _plus = 300,
    _minus = 301,
    _multiplication = 302,
    _division = 303,
    _mod = 304,
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
#define _assignop 291
#define _or 292
#define _and 293
#define _equal 294
#define _notequal 295
#define _less 296
#define _lessequal 297
#define _greater 298
#define _greaterequal 299
#define _plus 300
#define _minus 301
#define _multiplication 302
#define _division 303
#define _mod 304
#define _not 305
#define IF_ONLY 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   320

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "_doubleconstant", "_stringconstant", "_booleanconstant", "_assignop",
  "_or", "_and", "_equal", "_notequal", "_less", "_lessequal", "_greater",
  "_greaterequal", "_plus", "_minus", "_multiplication", "_division",
  "_mod", "_not", "IF_ONLY", "\"()\"", "$accept", "PARSER", "START",
  "EXPR1", "VAR_DECL", "VAR_DECLS", "VAR", "TYPE", "FUNCTION_DECL",
  "VAR_PLUS", "FORMALS", "EXTEND", "ID_PLUS", "IMPLEMENT", "CLASS_DECL",
  "FIELD", "FIELD_PLUS", "INTERFACE_DECL", "PROTOTYPE", "PROTOTYPE_PLUS",
  "EXPR_ONE", "STMT", "STMTS", "IF_STMT", "WHILE_STMT", "FOR_STMT",
  "BREAK_STMT", "RETURN_STMT", "PRINT_STMT", "STMT_BLOCK", "EXPR", "EXPRS",
  "LVALUE", "LVALUE_EXPR", "CALL", "PRODPERIODID", "ACTUALS", "CONSTANT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     116,  -162,  -162,  -162,  -162,    -7,     3,     6,  -162,    13,
     116,  -162,  -162,     9,    10,  -162,  -162,  -162,     5,    17,
      29,  -162,  -162,  -162,    32,    26,    31,  -162,    74,    74,
    -162,    49,    42,    65,  -162,    50,    19,    46,    66,  -162,
      39,  -162,  -162,    54,    56,  -162,  -162,    74,    75,    75,
      61,    83,    94,    96,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,    74,    74,    74,   103,   111,  -162,    85,
     107,   113,   145,  -162,    12,   121,   129,   122,   137,   146,
     151,   104,   145,   152,  -162,  -162,  -162,  -162,   145,   145,
     148,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,   244,
      -5,  -162,  -162,  -162,  -162,   188,   145,   140,   156,   145,
    -162,   145,   142,   130,   145,  -162,   157,   145,   257,  -162,
    -162,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   134,  -162,   244,   131,
     163,  -162,   145,   204,   162,   170,   153,     4,  -162,   217,
     172,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,   230,  -162,  -162,   145,  -162,   177,
     118,   145,  -162,    74,   167,   118,  -162,   244,  -162,   -15,
     271,   178,  -162,  -162,   118,  -162,   145,  -162,  -162,   180,
     118,  -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
      70,    78,    77,    75,    76,    71,    72,    73,    74,    65,
      66,    67,    68,    69,     0,    60,    88,     0,    89,     0,
      41,     0,    81,     0,     0,    41,    87,    84,    90,     0,
       0,     0,    58,    54,    41,    52,    41,    82,    53,     0,
      41,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,  -162,   175,   -39,  -162,   -22,     0,   135,  -162,
     -25,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
     -81,  -161,  -162,  -162,  -162,  -162,  -162,  -162,  -162,   -32,
     -69,    73,  -162,  -162,  -162,    52,    47,  -162
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    65,    13,    35,    15,    36,
      37,    26,    40,    32,    16,    62,    51,    17,    45,    33,
      90,    91,    69,    92,    93,    94,    95,    96,    97,    98,
      99,   139,   100,   136,   101,   108,   140,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,   116,   134,   105,    38,   184,    34,    34,   174,   179,
      14,    18,    60,    21,   183,   106,    56,    57,    23,   118,
     119,    19,    27,   188,    20,    54,    68,    25,    24,   191,
     144,   135,    28,    44,   167,    29,   185,   138,    66,    67,
     143,    34,    34,   107,    30,   138,    31,    41,   149,    47,
      48,    14,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    39,    46,    50,
      49,    42,    52,   138,    53,     1,     2,     3,     4,    58,
      55,   161,    43,     8,     1,     2,     3,     4,    72,    59,
      55,    73,     8,     1,     2,     3,     4,    63,   177,    64,
       7,     8,   180,    74,    75,   189,    76,    70,    77,    78,
      79,    80,    81,    82,    83,    71,   103,    84,    85,    86,
      87,    72,   104,    55,   109,   111,     1,     2,     3,     4,
       5,    88,     6,     7,     8,    89,    74,    75,   110,    76,
     112,    77,    78,    79,    80,    81,    82,    83,    72,   113,
      84,    85,    86,    87,   114,   117,   115,   120,   141,   142,
     145,   167,   146,    74,    88,   107,   148,   168,    89,    78,
      79,   171,    81,   181,   172,    72,   182,    84,    85,    86,
      87,   178,   187,   173,   190,    22,    61,   147,   166,   169,
      74,    88,   137,     0,     0,    89,    78,    79,     0,    81,
       0,     0,     0,     0,    84,    85,    86,    87,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,    89,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   176,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     186,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   150,   132,   133,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133
};

static const yytype_int16 yycheck[] =
{
       0,    82,     7,    72,    29,    20,    28,    29,     4,   170,
      10,    18,    51,     0,   175,     3,    48,    49,     9,    88,
      89,    18,     5,   184,    18,    47,    65,    22,    18,   190,
     111,    36,     3,    33,    30,     3,    51,   106,    63,    64,
     109,    63,    64,    31,    18,   114,    15,     5,   117,    30,
       4,    51,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    18,    18,    30,
       4,     6,    18,   142,    18,    10,    11,    12,    13,    18,
       5,   150,    17,    18,    10,    11,    12,    13,     3,     6,
       5,     6,    18,    10,    11,    12,    13,     3,   167,     3,
      17,    18,   171,    18,    19,   186,    21,     4,    23,    24,
      25,    26,    27,    28,    29,     4,     9,    32,    33,    34,
      35,     3,     9,     5,     3,     3,    10,    11,    12,    13,
      14,    46,    16,    17,    18,    50,    18,    19,     9,    21,
       3,    23,    24,    25,    26,    27,    28,    29,     3,     3,
      32,    33,    34,    35,     3,     3,    52,     9,    18,     3,
      18,    30,    32,    18,    46,    31,     9,     4,    50,    24,
      25,     9,    27,   173,     4,     3,     9,    32,    33,    34,
      35,     4,     4,    30,     4,    10,    51,   114,   136,   142,
      18,    46,     4,    -1,    -1,    50,    24,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    50,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     8,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       9,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49
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
      26,    27,    28,    29,    32,    33,    34,    35,    46,    50,
      73,    74,    76,    77,    78,    79,    80,    81,    82,    83,
      85,    87,    90,     9,     9,    83,     3,    31,    88,     3,
       9,     3,     3,     3,     3,    52,    73,     3,    83,    83,
       9,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     7,    36,    86,     4,    83,    84,
      89,    18,     3,    83,    73,    18,    32,    84,     9,    83,
      47,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    88,    30,     4,    89,
       4,     9,     4,    30,     4,     4,     8,    83,     4,    74,
      83,    60,     9,    74,    20,    51,     9,     4,    74,    73,
       4,    74
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug = 1;
#else //YYDEBUG
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif //YYDEBUG

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
printf("[Shift]");
    
  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 24 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 29 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 32 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 48 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 56 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 63 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 82 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 93 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 94 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 106 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 107 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 175 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("[Reduce %i%s", yyn, "]");}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2037 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 195 "parser.y" /* yacc.c:1906  */


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
