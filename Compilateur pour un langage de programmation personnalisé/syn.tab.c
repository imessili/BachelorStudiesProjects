
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syn.y"

	/*
	
	
	
	*/
	
#include <string.h>

int NL=1,NC=1,k,j;
int mark_aff=1,act_div=0,mark_read=0 ,mark_write=0,mark_cond=0,mark_op_arith=0;
char save_type[10];
char save_val[100];
int save_int ;
char save_affected[15];
char save_sdf[10];
char save_sdf_list[20];
char save_opp[20];


/* Line 189 of yacc.c  */
#line 94 "syn.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIFF = 258,
     SUPE = 259,
     INFE = 260,
     SUP = 261,
     INF = 262,
     EG = 263,
     ELSE = 264,
     END_IF = 265,
     IF = 266,
     EXECUT = 267,
     While = 268,
     WRITE = 269,
     READ = 270,
     PROCESS = 271,
     LOOP = 272,
     ARRAY = 273,
     CONST = 274,
     INTEGER = 275,
     STRING = 276,
     CHAR = 277,
     REAL = 278,
     VAR = 279,
     Programme = 280,
     deb_bib = 281,
     andC = 282,
     percentage = 283,
     dz = 284,
     dolar = 285,
     pipe = 286,
     deux_points = 287,
     affec = 288,
     equal = 289,
     addr = 290,
     op_add = 291,
     op_sub = 292,
     op_mult = 293,
     op_div = 294,
     acc_o = 295,
     acc_c = 296,
     par_o = 297,
     par_c = 298,
     cro_c = 299,
     cro_o = 300,
     sep = 301,
     idf = 302,
     const_int = 303,
     const_real = 304,
     const_str = 305,
     const_char = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "syn.y"

int entier;
char* str;
float real;




/* Line 214 of yacc.c  */
#line 190 "syn.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "syn.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    16,    20,    23,    25,    27,    29,
      32,    35,    36,    42,    47,    54,    60,    62,    64,    66,
      68,    72,    74,    76,    81,    82,    89,    93,    95,    97,
      99,   101,   104,   107,   110,   113,   114,   116,   121,   122,
     128,   129,   138,   140,   141,   142,   148,   150,   152,   154,
     156,   158,   160,   162,   164,   166,   168,   169,   178,   186,
     196,   197,   207,   208,   216,   222,   223,   228,   231,   232,
     237,   238,   243,   245,   247,   249,   251,   253,   255
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    25,    47,    40,    56,    41,    -1,
      25,    47,    40,    56,    41,    -1,    26,    55,    54,    -1,
      26,    55,    -1,    17,    -1,    18,    -1,    16,    -1,    57,
      65,    -1,    24,    58,    -1,    -1,    59,    32,    60,    30,
      58,    -1,    59,    32,    60,    30,    -1,    19,    59,    32,
      62,    30,    58,    -1,    19,    59,    32,    62,    30,    -1,
      20,    -1,    23,    -1,    22,    -1,    21,    -1,    61,    46,
      60,    -1,    61,    -1,    47,    -1,    47,    45,    64,    44,
      -1,    -1,    47,    33,    64,    63,    46,    62,    -1,    47,
      33,    64,    -1,    51,    -1,    50,    -1,    48,    -1,    49,
      -1,    67,    65,    -1,    76,    65,    -1,    77,    65,    -1,
      80,    65,    -1,    -1,    47,    -1,    47,    45,    64,    44,
      -1,    -1,    47,    68,    33,    70,    30,    -1,    -1,    47,
      45,    64,    44,    69,    33,    70,    30,    -1,    71,    -1,
      -1,    -1,    74,    72,    75,    73,    71,    -1,    74,    -1,
      66,    -1,    64,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    81,    -1,    83,    -1,    78,    -1,    -1,    13,
      79,    42,    87,    43,    40,    65,    41,    -1,    12,    65,
      11,    42,    87,    43,    10,    -1,    12,    65,    11,    42,
      87,    43,     9,    65,    10,    -1,    -1,    15,    42,    50,
      82,    31,    35,    66,    43,    30,    -1,    -1,    14,    42,
      50,    84,    85,    43,    30,    -1,    14,    42,    50,    43,
      30,    -1,    -1,    31,    66,    86,    85,    -1,    31,    66,
      -1,    -1,    89,    88,    91,    89,    -1,    -1,    42,    90,
      71,    43,    -1,    74,    -1,     8,    -1,     7,    -1,     6,
      -1,     5,    -1,     4,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    54,    55,    61,    62,    63,    69,
      76,    77,    80,    81,    82,    83,    87,    88,    89,    90,
      95,    96,   101,   104,   116,   116,   123,   133,   134,   135,
     136,   142,   143,   144,   145,   146,   151,   167,   188,   188,
     196,   196,   207,   213,   213,   213,   217,   222,   223,   236,
     237,   241,   245,   253,   254,   260,   266,   266,   274,   275,
     281,   281,   289,   289,   292,   295,   295,   295,   298,   298,
     301,   301,   302,   309,   309,   309,   309,   309,   309
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIFF", "SUPE", "INFE", "SUP", "INF",
  "EG", "ELSE", "END_IF", "IF", "EXECUT", "While", "WRITE", "READ",
  "PROCESS", "LOOP", "ARRAY", "CONST", "INTEGER", "STRING", "CHAR", "REAL",
  "VAR", "Programme", "deb_bib", "andC", "percentage", "dz", "dolar",
  "pipe", "deux_points", "affec", "equal", "addr", "op_add", "op_sub",
  "op_mult", "op_div", "acc_o", "acc_c", "par_o", "par_c", "cro_c",
  "cro_o", "sep", "idf", "const_int", "const_real", "const_str",
  "const_char", "$accept", "prog", "declaratio_bib", "bib", "crp",
  "declaration_var", "declaration_type", "type", "list_var", "IDF_dec",
  "list_var_const", "$@1", "const_val", "instructions", "IDF",
  "affectation", "$@2", "$@3", "EXP_arithmetique",
  "operation_arithmetique", "$@4", "$@5", "operand",
  "operateurs_arithmetique", "IO", "Boucle", "while_block", "$@6",
  "Condition_block", "read_intruction", "$@7", "write_intruction", "$@8",
  "list_pipe", "$@9", "EXP_conditionelle", "$@10", "operand_cond", "$@11",
  "operateurs_conditionelle", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    56,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    61,    63,    62,    62,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    68,    67,
      69,    67,    70,    72,    73,    71,    71,    74,    74,    75,
      75,    75,    75,    76,    76,    77,    79,    78,    80,    80,
      82,    81,    84,    83,    83,    86,    85,    85,    88,    87,
      90,    89,    89,    91,    91,    91,    91,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     3,     2,     1,     1,     1,     2,
       2,     0,     5,     4,     6,     5,     1,     1,     1,     1,
       3,     1,     1,     4,     0,     6,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     0,     1,     4,     0,     5,
       0,     8,     1,     0,     0,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     8,     7,     9,
       0,     9,     0,     7,     5,     0,     4,     2,     0,     4,
       0,     4,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     8,     6,     7,     5,
       1,     0,    11,     4,     0,     0,     0,    35,    11,     0,
      16,    19,    18,    17,    10,     0,     3,    35,    56,     0,
       0,    38,     9,    35,    35,    35,    55,    35,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,    34,     2,     0,    22,     0,    21,     0,     0,
      62,    60,    29,    30,    28,    27,     0,     0,     0,     0,
       0,    13,     0,     0,    70,    36,    48,    47,    72,     0,
      68,     0,     0,     0,    40,     0,    42,    43,     0,    15,
       0,    12,    20,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,    39,     0,    24,    14,    23,     0,     0,
       0,    35,    78,    77,    76,    75,    74,    73,     0,    65,
       0,     0,     0,    49,    50,    51,    52,    44,     0,    35,
      58,    71,    37,     0,    69,     0,    63,     0,     0,     0,
       0,     0,    57,    66,     0,    41,    45,    25,    59,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    16,    17,    24,    25,    56,    57,
      69,   128,    76,    32,    77,    33,    48,   102,    85,    86,
     104,   139,    87,   127,    34,    35,    36,    44,    37,    38,
      83,    39,    82,   100,   135,    79,    97,    80,    94,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int8 yypact[] =
{
       2,     0,    49,    68,    24,    29,   -96,   -96,   -96,    44,
     -96,    26,    47,   -96,    32,    15,    33,    -1,    47,    19,
     -96,   -96,   -96,   -96,   -96,    43,   -96,    -1,   -96,    34,
      36,    37,   -96,    -1,    -1,    -1,   -96,    -1,   -96,   -96,
      38,    45,    39,    69,    41,    31,    40,     8,    52,   -96,
     -96,   -96,   -96,   -96,    42,    46,    57,    48,    50,   -18,
      53,   -96,   -96,   -96,   -96,   -96,    51,     4,    55,    63,
       8,    15,    39,   -18,   -96,    54,   -96,   -96,   -96,    58,
     -96,    67,    72,    73,   -96,    70,   -96,   -21,     8,    15,
      61,   -96,   -96,    64,     4,     8,    66,    13,   -96,    62,
      65,    75,    78,   -96,    25,    82,   -96,   -96,    35,    71,
      74,    -1,   -96,   -96,   -96,   -96,   -96,   -96,   -18,    76,
      83,    62,     4,   -96,   -96,   -96,   -96,   -96,    77,    -1,
     -96,   -96,   -96,    79,   -96,    72,   -96,    81,    85,     4,
      42,    88,   -96,   -96,    86,   -96,   -96,   -96,   -96,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,   108,   -96,   103,   -96,   -66,   106,    56,   -96,
     -14,   -96,   -45,   -27,   -95,   -96,   -96,   -96,     5,   -91,
     -96,   -96,   -58,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -13,   -96,    59,   -96,    11,   -96,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -68
static const yytype_int16 yytable[] =
{
      43,    78,    66,   109,   119,    91,    49,    50,    51,   -46,
      52,    27,    28,    29,    30,    78,   112,   113,   114,   115,
     116,   117,   -46,   106,    74,    90,   137,     1,     2,    75,
      62,    63,    64,    65,    19,    20,    21,    22,    23,    20,
      21,    22,    23,   105,   129,   130,    31,     5,   146,    11,
     110,    75,    62,    63,    64,    65,    62,    63,    64,    65,
      78,   123,   124,   125,   126,     6,     7,     8,    10,    12,
       2,    15,    18,    14,    26,    42,    45,    54,    46,    53,
      58,    60,    47,    59,   133,    67,    55,    71,    88,    68,
      61,    70,    73,    89,    72,    84,    81,    98,   148,    95,
     103,    96,   141,    99,   101,   107,   111,   108,   120,    75,
     121,   122,   -26,   136,   131,   145,   149,    13,   132,   -67,
     142,    40,   143,   140,   144,    41,   147,   138,    92,   134,
       0,     0,    93
};

static const yytype_int16 yycheck[] =
{
      27,    59,    47,    94,    99,    71,    33,    34,    35,    30,
      37,    12,    13,    14,    15,    73,     3,     4,     5,     6,
       7,     8,    43,    89,    42,    70,   121,    25,    26,    47,
      48,    49,    50,    51,    19,    20,    21,    22,    23,    20,
      21,    22,    23,    88,     9,    10,    47,    47,   139,    25,
      95,    47,    48,    49,    50,    51,    48,    49,    50,    51,
     118,    36,    37,    38,    39,    16,    17,    18,     0,    40,
      26,    24,    40,    47,    41,    32,    42,    32,    42,    41,
      11,    50,    45,    42,   111,    33,    47,    30,    33,    47,
      50,    45,    42,    30,    46,    44,    43,    30,    10,    45,
      30,    43,   129,    31,    31,    44,    40,    43,    43,    47,
      35,    33,    30,    30,    43,    30,    30,     9,    44,    43,
      41,    18,   135,    46,    43,    19,   140,   122,    72,   118,
      -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    26,    53,    54,    47,    16,    17,    18,    55,
       0,    25,    40,    54,    47,    24,    56,    57,    40,    19,
      20,    21,    22,    23,    58,    59,    41,    12,    13,    14,
      15,    47,    65,    67,    76,    77,    78,    80,    81,    83,
      56,    59,    32,    65,    79,    42,    42,    45,    68,    65,
      65,    65,    65,    41,    32,    47,    60,    61,    11,    42,
      50,    50,    48,    49,    50,    51,    64,    33,    47,    62,
      45,    30,    46,    42,    42,    47,    64,    66,    74,    87,
      89,    43,    84,    82,    44,    70,    71,    74,    33,    30,
      64,    58,    60,    87,    90,    45,    43,    88,    30,    31,
      85,    31,    69,    30,    72,    64,    58,    44,    43,    71,
      64,    40,     3,     4,     5,     6,     7,     8,    91,    66,
      43,    35,    33,    36,    37,    38,    39,    75,    63,     9,
      10,    43,    44,    65,    89,    86,    30,    66,    70,    73,
      46,    65,    41,    85,    43,    30,    71,    62,    10,    30
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 48 "syn.y"
    {printf("\n***************programme sysntax correct*************** \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 49 "syn.y"
    {printf("\n***************programme sysntax correct*************** \n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 "syn.y"
    {if(existe((yyvsp[(1) - (1)].str),1))printf("\t\t\t\terreur symentique double declaration bib a la ligne %d \n",NL-1);else set_bib((yyvsp[(1) - (1)].str),(yyvsp[(1) - (1)].str));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 62 "syn.y"
    {if(existe((yyvsp[(1) - (1)].str),1))printf("\t\t\t\terreur symentique double declaration bib a la ligne %d \n",NL-1);else set_bib((yyvsp[(1) - (1)].str),(yyvsp[(1) - (1)].str));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 63 "syn.y"
    {if(existe((yyvsp[(1) - (1)].str),1))printf("\t\t\t\terreur symentique double declaration bib a la ligne %d \n",NL-1);else set_bib((yyvsp[(1) - (1)].str),(yyvsp[(1) - (1)].str));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 87 "syn.y"
    {strcpy(save_type,(yyvsp[(1) - (1)].str));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 88 "syn.y"
    {strcpy(save_type,(yyvsp[(1) - (1)].str));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 89 "syn.y"
    {strcpy(save_type,(yyvsp[(1) - (1)].str));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 90 "syn.y"
    {strcpy(save_type,(yyvsp[(1) - (1)].str));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 101 "syn.y"
    {if(existe((yyvsp[(1) - (1)].str),0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
													else {set_type((yyvsp[(1) - (1)].str),save_type);set_df_val((yyvsp[(1) - (1)].str));};}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 104 "syn.y"
    {if (position("ARRAY",1)==-1)printf("\t\t\t\terreur symentique not declared bib ARRAY  a la ligne %d sur la colonne %d \n",NL,NC);
											else if(existe((yyvsp[(1) - (4)].str),0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
													else {	set_type((yyvsp[(1) - (4)].str),save_type); 
																if (!str_cmp(get_type(save_val),"INTEGER")){if(save_int <0)
													printf("\t\t\t\terreur symentique la taille de tab doit etre positive a la ligne %d sur la colonne %d \n",NL,NC);
																													else set_size((yyvsp[(1) - (4)].str),save_val);}
																	else printf("\t\t\t\terreur symentique taille not integer a la ligne %d sur la colonne %d \n",NL,NC);};}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 116 "syn.y"
    {if(existe((yyvsp[(1) - (3)].str),0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
											else {set_type((yyvsp[(1) - (3)].str),save_type);set_constant((yyvsp[(1) - (3)].str)); 
																if (!str_cmp(get_type(save_val),save_type))set_val((yyvsp[(1) - (3)].str),save_val);
																	 else printf("\t\t\t\terreur symentique incompatible type a la ligne %d sur la colonne %d \n",NL,NC);		};}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 123 "syn.y"
    {if(existe((yyvsp[(1) - (3)].str),0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
											else {set_type((yyvsp[(1) - (3)].str),save_type);set_constant((yyvsp[(1) - (3)].str));
														if (!str_cmp(get_type(save_val),save_type))set_val((yyvsp[(1) - (3)].str),save_val);
																		else printf("\t\t\t\terreur symentique incompatible type a la ligne %d sur la colonne %d \n",NL,NC);		};}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 133 "syn.y"
    { str_cpy(save_val,(yyvsp[(1) - (1)].str));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 134 "syn.y"
    {str_cpy(save_val,(yyvsp[(1) - (1)].str));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 135 "syn.y"
    {save_int=(yyvsp[(1) - (1)].entier);itoa((yyvsp[(1) - (1)].entier),save_val,10);   ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 136 "syn.y"
    { gcvt((yyvsp[(1) - (1)].real),6,save_val);				 ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 151 "syn.y"
    { if (!existe((yyvsp[(1) - (1)].str),0))printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),NL,NC);
					else {
						if (mark_cond){if(str_cmp(get_type((yyvsp[(1) - (1)].str)),get_type(save_opp)))
					printf("\t\t\t\terreur erreur symentique incompatible types in condition  a la ligne %d sur la colonne %d \n",NL,NC);}
							else str_cpy(save_opp,(yyvsp[(1) - (1)].str)); 
						if (mark_read)if(str_cmp(get_type((yyvsp[(1) - (1)].str)),get_sdf_type(save_sdf)))
						printf("\t\t\t\terreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),get_sdf_type(save_sdf),NL,NC);
						  if(mark_write)if(k>j-1)printf("\t\t\t\terreur symentique  \"%s\" has not SDF     a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),NL,NC);
																			else {char s[2]={save_sdf_list[k],'\0'};if(str_cmp(get_type((yyvsp[(1) - (1)].str)),get_sdf_type(s)))
						printf("\t\t\t\terreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),get_sdf_type(s),NL,NC);}
							if(!mark_aff)if(str_cmp(get_type((yyvsp[(1) - (1)].str)),get_type(save_affected)))
							 	printf("\t\t\t\terreur symentique incompatible types \"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),get_type(save_affected),NL,NC);
																	if(act_div&&(!str_cmp(get_type((yyvsp[(1) - (1)].str)),"INTEGER")||!str_cmp(get_type((yyvsp[(1) - (1)].str)),"REAL"))&&!real_to_int((float)get_val((yyvsp[(1) - (1)].str))))
																				printf("\t\t\t\terreur symentique devision sur 0 types   a la ligne %d sur la colonne %d \n",NL,NC);};}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 167 "syn.y"
    {if (!existe((yyvsp[(1) - (4)].str),0))printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (4)].str),NL,NC);
								else if (position("ARRAY",1)==-1)printf("\t\t\t\terreur symentique not declared bib ARRAY  a la ligne %d sur la colonne %d \n",NL,NC);
										else { if ( get_size((yyvsp[(1) - (4)].str)) && (save_int >get_size((yyvsp[(1) - (4)].str))))
										printf("\t\t\t\terreur symentique out of size array a la ligne %d sur la colonne %d \n",NL,NC);
																if (mark_cond){if(str_cmp(get_type((yyvsp[(1) - (4)].str)),get_type(save_opp)))
										printf("\t\t\t\terreur erreur symentique incompatible types in condition  a la ligne %d sur la colonne %d \n",NL,NC);}
																	else  str_cpy(save_opp,(yyvsp[(1) - (4)].str));
																if (mark_read)if(str_cmp(get_type((yyvsp[(1) - (4)].str)),get_sdf_type(save_sdf)))
										printf("erreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (4)].str),get_sdf_type(save_sdf),NL,NC);
																if(mark_write)if(k>j-1)
										printf("\t\t\t\terreur symentique  \"%s\" has not SDF     a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (4)].str),NL,NC);
																			else {char s[2]={save_sdf_list[k],'\0'};if(str_cmp(get_type((yyvsp[(1) - (4)].str)),get_sdf_type(s)))
										printf("\t\t\t\terreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (4)].str),get_sdf_type(s),NL,NC);}
																if(!mark_aff)if(str_cmp(get_type((yyvsp[(1) - (4)].str)),get_type(save_affected)))
										printf("\t\t\t\terreur symentique incompatible types \"%s\" NOT %s   a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (4)].str),get_type(save_affected),NL,NC);};}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 188 "syn.y"
    {if (existe((yyvsp[(1) - (1)].str),0)){if(!constant((yyvsp[(1) - (1)].str)))
						printf("\t\t\t\terreur symentique can not affected value to \"%s\"    is a constant  a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),NL,NC);
										else {strcpy(save_affected,(yyvsp[(1) - (1)].str));printf("affected save \n"); mark_aff=0;}}
						else 
						printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (1)].str),NL,NC);	;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 193 "syn.y"
    {mark_aff=1;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 196 "syn.y"
    {if (existe((yyvsp[(1) - (4)].str),0))if (position("ARRAY",1)==-1)
							printf("\t\t\t\terreur symentique not declared bib ARRAY  a la ligne %d sur la colonne %d \n",NL,NC);
																		else {strcpy(save_affected,(yyvsp[(1) - (4)].str)); mark_aff=0;
													if ( get_size((yyvsp[(1) - (4)].str)) && (save_int >get_size((yyvsp[(1) - (4)].str))))
							printf("erreur symentique out of size array a la ligne %d sur la colonne %d \n",NL,NC);}
												else printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",(yyvsp[(1) - (4)].str),NL,NC);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 203 "syn.y"
    {mark_aff=1;act_div=0;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 213 "syn.y"
    {if (act_div)act_div=0;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 213 "syn.y"
    {if (position("PROCESS",1)==-1)
											printf("\t\t\t\terreur symentique not declared bib PROCESS  a la ligne %d sur la colonne %d \n",NL,NC);
										if(mark_op_arith)mark_cond=1;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 217 "syn.y"
    {if(mark_op_arith)mark_cond=1;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 223 "syn.y"
    {		if (mark_cond){if(str_cmp(get_type(save_val),get_type(save_opp)))
										printf("\t\t\t\terreur erreur symentique incompatible types in condition  a la ligne %d sur la colonne %d \n",NL,NC);}
							else  {str_cpy(save_opp,save_val);}
							if(!mark_aff)if(str_cmp(get_type(save_val),get_type(save_affected)))
								printf("\t\t\t\terreur symentique incompatible types \"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",save_val,get_type(save_affected),NL,NC); 
										if(act_div&&(!str_cmp(get_type(save_val),"INTEGER")||!str_cmp(get_type(save_val),"REAL"))&&!real_to_int((float)get_val(save_val)))
													printf("\t\t\t\terreur symentique devision sur 0 types   a la ligne %d sur la colonne %d \n",NL,NC);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 237 "syn.y"
    {if(!str_cmp(get_type(save_affected),"STRING")||!str_cmp(get_type(save_affected),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);
											if(mark_cond)if(!str_cmp(get_type(save_opp),"STRING")||!str_cmp(get_type(save_opp),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);					;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 241 "syn.y"
    {if(!str_cmp(get_type(save_affected),"STRING")||!str_cmp(get_type(save_affected),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char a la ligne %d sur la colonne %d \n",NL,NC);
											if(mark_cond)if(!str_cmp(get_type(save_opp),"STRING")||!str_cmp(get_type(save_opp),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 245 "syn.y"
    {act_div=1;if(!str_cmp(get_type(save_affected),"STRING")||!str_cmp(get_type(save_affected),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char a la ligne %d sur la colonne %d \n",NL,NC);
														if(mark_cond)if(!str_cmp(get_type(save_opp),"STRING")||!str_cmp(get_type(save_opp),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 266 "syn.y"
    {if (position("LOOP",1)==-1)printf("\t\t\t\terreur symentique not declared bib LOOP  a la ligne %d sur la colonne %d \n",NL,NC);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 281 "syn.y"
    {if(str_cmp((yyvsp[(3) - (3)].str),"\"&\"")&&str_cmp((yyvsp[(3) - (3)].str),"\"?\"")&&str_cmp((yyvsp[(3) - (3)].str),"\";\"")&&str_cmp((yyvsp[(3) - (3)].str),"\"%\""))
												printf("\t\t\t\tErreur symentique mark not signe de formatage a la ligne %d colonne %d\n",NL,NC);
													else{mark_read=1;strcpy(save_sdf,(yyvsp[(3) - (3)].str));}				;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 284 "syn.y"
    {mark_read=0;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 289 "syn.y"
    {int  i=0;k=0;j=0; while((yyvsp[(3) - (3)].str)[i]!='\0'){ if((yyvsp[(3) - (3)].str)[i]=='&'||(yyvsp[(3) - (3)].str)[i]==';'||(yyvsp[(3) - (3)].str)[i]=='?'||(yyvsp[(3) - (3)].str)[i]=='%'){save_sdf_list[j]=(yyvsp[(3) - (3)].str)[i];j++;}i++; }
											mark_write=1;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 291 "syn.y"
    {mark_write=0;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 292 "syn.y"
    {mark_write=0;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 295 "syn.y"
    {k++;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 295 "syn.y"
    {k++;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 298 "syn.y"
    {mark_cond=1;;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 298 "syn.y"
    {mark_cond=0;;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 301 "syn.y"
    {mark_op_arith=1;;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 301 "syn.y"
    {act_div=0;;}
    break;



/* Line 1455 of yacc.c  */
#line 1893 "syn.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 314 "syn.y"

main ()
{ 

init();
 
yyparse();
afficher(); 
	

}
yywrap()
{}
int yyerror(char* msg)
{
printf("\t\tErreur syntaxique a la ligne %d colonne %d\n",NL,NC);
return 0;
}
