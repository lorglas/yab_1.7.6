/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


/*

    YABASIC ---  a simple Basic Interpreter
    written by Marc-Oliver Ihm 1995-2004
    homepage: www.yabasic.de

    BISON part
     
    This file is part of yabasic and may be copied only 
    under the terms of either the Artistic License or 
    the GNU General Public License (GPL), both of which 
    can be found at www.yabasic.de

*/


#ifndef YABASIC_INCLUDED
#include "yabasic.h"     /* definitions of yabasic */
#endif

#include <malloc.h>

#if HAVE_ALLOCA_H
#ifndef WINDOWS
#include <alloca.h>
#endif
#endif

void __yy_bcopy(char *,char *,int); /* prototype missing */

int tileol; /* true, read should go to eon of line */
int mylineno=1; /* line number; counts fresh in every new file */
int main_lineno=1; /* line number of main */
int function_type=ftNONE; /* contains function type while parsing function */
char *current_function=NULL; /* name of currently parsed function */
int exported=FALSE; /* true, if function is exported */
int yylex(void);
extern struct libfile_name *current_libfile; /*  defined in main.c: name of currently parsed file */
int missing_endif=0;
int missing_endif_line=0;
int missing_endsub=0;
int missing_endsub_line=0;
int missing_next=0;
int missing_next_line=0;
int missing_wend=0;
int missing_wend_line=0;
int missing_until=0;
int missing_until_line=0;
int missing_loop=0;
int missing_loop_line=0;
int in_loop=0;

void report_missing(int severity,char *text) {
  if (missing_loop || missing_endif || missing_next || missing_until || missing_wend) {
    error(severity,text);
    string[0]='\0';
    if (missing_endif)
      sprintf(string,"if statement starting at line %d has seen no 'endif' yet",missing_endif_line);
    else if (missing_next)
      sprintf(string,"for-loop starting at line %d has seen no 'next' yet",missing_next_line);
    else if (missing_wend)
      sprintf(string,"while-loop starting at line %d has seen no 'wend' yet",missing_wend_line);
    else if (missing_until)
      sprintf(string,"repeat-loop starting at line %d has seen no 'until' yet",missing_until_line);
    else if (missing_loop)
      sprintf(string,"do-loop starting at line %d has seen no 'loop' yet",missing_wend_line);
    if (string[0]) error(severity,string);
  }
}
     



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
   by #include "bison.h".  */
#ifndef YY_YY_BISON_H_INCLUDED
# define YY_YY_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tFNUM = 258,
    tSYMBOL = 259,
    tSTRSYM = 260,
    tDOCU = 261,
    tDIGITS = 262,
    tSTRING = 263,
    tFOR = 264,
    tTO = 265,
    tSTEP = 266,
    tNEXT = 267,
    tWHILE = 268,
    tWEND = 269,
    tREPEAT = 270,
    tUNTIL = 271,
    tIMPORT = 272,
    tGOTO = 273,
    tGOSUB = 274,
    tLABEL = 275,
    tON = 276,
    tSUB = 277,
    tENDSUB = 278,
    tLOCAL = 279,
    tSTATIC = 280,
    tEXPORT = 281,
    tERROR = 282,
    tEXECUTE = 283,
    tEXECUTE2 = 284,
    tCOMPILE = 285,
    tRUNTIME_CREATED_SUB = 286,
    tINTERRUPT = 287,
    tBREAK = 288,
    tCONTINUE = 289,
    tSWITCH = 290,
    tSEND = 291,
    tCASE = 292,
    tDEFAULT = 293,
    tLOOP = 294,
    tDO = 295,
    tSEP = 296,
    tEOPROG = 297,
    tIF = 298,
    tTHEN = 299,
    tELSE = 300,
    tELSIF = 301,
    tENDIF = 302,
    tUSING = 303,
    tPRINT = 304,
    tINPUT = 305,
    tLINE = 306,
    tRETURN = 307,
    tDIM = 308,
    tEND = 309,
    tEXIT = 310,
    tAT = 311,
    tSCREEN = 312,
    tSCREENSHOT = 313,
    tREVERSE = 314,
    tCOLOUR = 315,
    tAND = 316,
    tOR = 317,
    tNOT = 318,
    tEOR = 319,
    tNEQ = 320,
    tLEQ = 321,
    tGEQ = 322,
    tLTN = 323,
    tGTN = 324,
    tEQU = 325,
    tPOW = 326,
    tREAD = 327,
    tDATA = 328,
    tRESTORE = 329,
    tOPEN = 330,
    tCLOSE = 331,
    tSEEK = 332,
    tTELL = 333,
    tAS = 334,
    tREADING = 335,
    tWRITING = 336,
    tWAIT = 337,
    tBELL = 338,
    tLET = 339,
    tARDIM = 340,
    tARSIZE = 341,
    tBIND = 342,
    tWINDOW = 343,
    tDOT = 344,
    tCIRCLE = 345,
    tCLEAR = 346,
    tFILL = 347,
    tPRINTER = 348,
    tSETUP = 349,
    tBUTTON = 350,
    tALERT = 351,
    tMENU = 352,
    tCHECKBOX = 353,
    tRADIOBUTTON = 354,
    tTEXTCONTROL = 355,
    tLISTBOX = 356,
    tDROPBOX = 357,
    tADD = 358,
    tREMOVE = 359,
    tLOCALIZE = 360,
    tFILEPANEL = 361,
    tSLIDER = 362,
    tSTATUSBAR = 363,
    tLAYOUT = 364,
    tSET = 365,
    tTEXTEDIT = 366,
    tCOUNT = 367,
    tVIEW = 368,
    tBOXVIEW = 369,
    tTABVIEW = 370,
    tTEXTURL = 371,
    tBITMAP = 372,
    tCANVAS = 373,
    tOPTION = 374,
    tDROPZONE = 375,
    tCOLORCONTROL = 376,
    tTREEBOX = 377,
    tCOLUMNBOX = 378,
    tCOLUMN = 379,
    tSORT = 380,
    tTOOLTIP = 381,
    tCALENDAR = 382,
    tCLIPBOARD = 383,
    tCOPY = 384,
    tSUBMENU = 385,
    tSELECT = 386,
    tSCROLLBAR = 387,
    tEXPAND = 388,
    tCOLLAPSE = 389,
    tSPLITVIEW = 390,
    tSTACKVIEW = 391,
    tPOPUPMENU = 392,
    tSPINCONTROL = 393,
    tMSEND = 394,
    tNUMMESSAGE = 395,
    tTHREAD = 396,
    tSOUND = 397,
    tPLAY = 398,
    tSTOP = 399,
    tSHORTCUT = 400,
    tISCOMPUTERON = 401,
    tDRAW = 402,
    tTEXT = 403,
    tFLUSH = 404,
    tELLIPSE = 405,
    tSAVE = 406,
    tRECT = 407,
    tGETCHAR = 408,
    tPUTCHAR = 409,
    tNEW = 410,
    tCURVE = 411,
    tLAUNCH = 412,
    tATTRIBUTE = 413,
    tSIN = 414,
    tASIN = 415,
    tCOS = 416,
    tACOS = 417,
    tTAN = 418,
    tATAN = 419,
    tEXP = 420,
    tLOG = 421,
    tSQRT = 422,
    tSQR = 423,
    tMYEOF = 424,
    tABS = 425,
    tSIG = 426,
    tINT = 427,
    tFRAC = 428,
    tMOD = 429,
    tRAN = 430,
    tLEN = 431,
    tVAL = 432,
    tLEFT = 433,
    tRIGHT = 434,
    tMID = 435,
    tMIN = 436,
    tMAX = 437,
    tSTR = 438,
    tINKEY = 439,
    tCHR = 440,
    tASC = 441,
    tHEX = 442,
    tDEC = 443,
    tBIN = 444,
    tUPPER = 445,
    tLOWER = 446,
    tTRIM = 447,
    tLTRIM = 448,
    tRTRIM = 449,
    tINSTR = 450,
    tRINSTR = 451,
    tSYSTEM = 452,
    tSYSTEM2 = 453,
    tPEEK = 454,
    tPEEK2 = 455,
    tPOKE = 456,
    tDATE = 457,
    tTIME = 458,
    tTOKEN = 459,
    tTOKENALT = 460,
    tSPLIT = 461,
    tSPLITALT = 462,
    tGLOB = 463,
    tMESSAGE = 464,
    tIMAGE = 465,
    tSVG = 466,
    tTRANSLATE = 467,
    tGET = 468,
    tMOUSE = 469,
    tISMOUSEIN = 470,
    tKEYBOARD = 471,
    tPASTE = 472,
    tGETNUM = 473,
    UMINUS = 474
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{


  double fnum;          /* double number */
  int inum;             /* integer number */
  int token;            /* token of command */
  int sep;              /* number of newlines */
  char *string;         /* quoted string */
  char *symbol;         /* general symbol */
  char *digits;         /* string of digits */
  char *docu;		/* embedded documentation */


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */



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
#define YYFINAL  407
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12987

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  229
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  588
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1933

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   474

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   228,     2,     2,     2,     2,
     224,   225,   221,   220,   227,   219,     2,   222,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   226,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   223
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   151,   152,   153,   152,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   173,   174,   174,   175,   176,
     177,   178,   179,   180,   181,   181,   183,   183,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   195,
     196,   196,   197,   198,   199,   200,   201,   202,   211,   212,
     213,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   401,   402,   403,   404,   405,
     406,   409,   410,   413,   414,   416,   417,   420,   421,   424,
     425,   428,   429,   430,   431,   432,   433,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   481,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   494,   495,   498,   498,   499,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   532,   535,   538,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   644,   645,   646,
     649,   650,   653,   654,   657,   658,   659,   660,   663,   666,
     669,   669,   672,   673,   674,   677,   678,   681,   682,   685,
     681,   690,   691,   694,   695,   698,   699,   700,   701,   704,
     705,   708,   709,   710,   711,   714,   715,   718,   719,   720,
     721,   724,   725,   726,   729,   730,   731,   732,   735,   736,
     740,   753,   735,   758,   759,   762,   763,   766,   767,   772,
     772,   777,   778,   781,   782,   786,   787,   788,   787,   792,
     793,   793,   797,   797,   803,   804,   808,   809,   808,   815,
     816,   820,   820,   825,   826,   830,   831,   831,   833,   830,
     837,   838,   841,   841,   845,   846,   849,   851,   853,   850,
     857,   858,   861,   862,   862,   865,   866,   868,   869,   873,
     874,   877,   878,   880,   881,   885,   886,   887,   888,   891,
     892,   893,   894,   895,   898,   899,   900,   903,   903,   904,
     904,   905,   905,   906,   906,   907,   907,   910,   911,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   930,   931,   933,   934,   937,   938
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tFNUM", "tSYMBOL", "tSTRSYM", "tDOCU",
  "tDIGITS", "tSTRING", "tFOR", "tTO", "tSTEP", "tNEXT", "tWHILE", "tWEND",
  "tREPEAT", "tUNTIL", "tIMPORT", "tGOTO", "tGOSUB", "tLABEL", "tON",
  "tSUB", "tENDSUB", "tLOCAL", "tSTATIC", "tEXPORT", "tERROR", "tEXECUTE",
  "tEXECUTE2", "tCOMPILE", "tRUNTIME_CREATED_SUB", "tINTERRUPT", "tBREAK",
  "tCONTINUE", "tSWITCH", "tSEND", "tCASE", "tDEFAULT", "tLOOP", "tDO",
  "tSEP", "tEOPROG", "tIF", "tTHEN", "tELSE", "tELSIF", "tENDIF", "tUSING",
  "tPRINT", "tINPUT", "tLINE", "tRETURN", "tDIM", "tEND", "tEXIT", "tAT",
  "tSCREEN", "tSCREENSHOT", "tREVERSE", "tCOLOUR", "tAND", "tOR", "tNOT",
  "tEOR", "tNEQ", "tLEQ", "tGEQ", "tLTN", "tGTN", "tEQU", "tPOW", "tREAD",
  "tDATA", "tRESTORE", "tOPEN", "tCLOSE", "tSEEK", "tTELL", "tAS",
  "tREADING", "tWRITING", "tWAIT", "tBELL", "tLET", "tARDIM", "tARSIZE",
  "tBIND", "tWINDOW", "tDOT", "tCIRCLE", "tCLEAR", "tFILL", "tPRINTER",
  "tSETUP", "tBUTTON", "tALERT", "tMENU", "tCHECKBOX", "tRADIOBUTTON",
  "tTEXTCONTROL", "tLISTBOX", "tDROPBOX", "tADD", "tREMOVE", "tLOCALIZE",
  "tFILEPANEL", "tSLIDER", "tSTATUSBAR", "tLAYOUT", "tSET", "tTEXTEDIT",
  "tCOUNT", "tVIEW", "tBOXVIEW", "tTABVIEW", "tTEXTURL", "tBITMAP",
  "tCANVAS", "tOPTION", "tDROPZONE", "tCOLORCONTROL", "tTREEBOX",
  "tCOLUMNBOX", "tCOLUMN", "tSORT", "tTOOLTIP", "tCALENDAR", "tCLIPBOARD",
  "tCOPY", "tSUBMENU", "tSELECT", "tSCROLLBAR", "tEXPAND", "tCOLLAPSE",
  "tSPLITVIEW", "tSTACKVIEW", "tPOPUPMENU", "tSPINCONTROL", "tMSEND",
  "tNUMMESSAGE", "tTHREAD", "tSOUND", "tPLAY", "tSTOP", "tSHORTCUT",
  "tISCOMPUTERON", "tDRAW", "tTEXT", "tFLUSH", "tELLIPSE", "tSAVE",
  "tRECT", "tGETCHAR", "tPUTCHAR", "tNEW", "tCURVE", "tLAUNCH",
  "tATTRIBUTE", "tSIN", "tASIN", "tCOS", "tACOS", "tTAN", "tATAN", "tEXP",
  "tLOG", "tSQRT", "tSQR", "tMYEOF", "tABS", "tSIG", "tINT", "tFRAC",
  "tMOD", "tRAN", "tLEN", "tVAL", "tLEFT", "tRIGHT", "tMID", "tMIN",
  "tMAX", "tSTR", "tINKEY", "tCHR", "tASC", "tHEX", "tDEC", "tBIN",
  "tUPPER", "tLOWER", "tTRIM", "tLTRIM", "tRTRIM", "tINSTR", "tRINSTR",
  "tSYSTEM", "tSYSTEM2", "tPEEK", "tPEEK2", "tPOKE", "tDATE", "tTIME",
  "tTOKEN", "tTOKENALT", "tSPLIT", "tSPLITALT", "tGLOB", "tMESSAGE",
  "tIMAGE", "tSVG", "tTRANSLATE", "tGET", "tMOUSE", "tISMOUSEIN",
  "tKEYBOARD", "tPASTE", "tGETNUM", "'-'", "'+'", "'*'", "'/'", "UMINUS",
  "'('", "')'", "';'", "','", "'#'", "$accept", "program",
  "statement_list", "$@1", "$@2", "statement", "$@3", "$@4", "$@5", "$@6",
  "$@7", "$@8", "string_assignment", "to", "open_clause", "seek_clause",
  "string_scalar_or_array", "string_expression", "string_function",
  "assignment", "expression", "$@9", "$@10", "arrayref", "string_arrayref",
  "coordinates", "function", "const", "number", "symbol_or_lineno",
  "dimlist", "function_or_array", "stringfunction_or_array", "call_list",
  "$@11", "calls", "call_item", "function_definition", "$@12", "$@13",
  "$@14", "endsub", "function_name", "export", "local_list", "local_item",
  "static_list", "static_item", "paramlist", "paramitem", "for_loop",
  "$@15", "$@16", "$@17", "$@18", "next", "step_part", "next_symbol",
  "switch_number_or_string", "$@19", "sep_list", "number_or_string",
  "case_list", "$@20", "$@21", "default", "$@22", "do_loop", "$@23",
  "loop", "while_loop", "$@24", "$@25", "wend", "repeat_loop", "$@26",
  "until", "if_clause", "$@27", "$@28", "$@29", "$@30", "endif",
  "short_if", "$@31", "else_part", "elsif_part", "$@32", "$@33",
  "maybe_then", "inputlist", "$@34", "input", "readlist", "readitem",
  "datalist", "printlist", "using", "inputbody", "$@35", "$@36", "$@37",
  "$@38", "$@39", "prompt", "printintro", "hashed_number", "goto_list",
  "gosub_list", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,    45,
      43,    42,    47,   474,    40,    41,    59,    44,    35
};
# endif

#define YYPACT_NINF -1168

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1168)))

#define YYTABLE_NINF -516

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   10801,   -62,   -54, -1168, -1168, -1168, -1168, -1168,   118,   118,
     118,  6568, -1168, -1168, -1168, 10346,  -195,  -126, 10346,    56,
   -1168, -1168, -1168, -1168,  9184,   -10, -1168,   100,  9184,   180,
   -1168,  9184,  9184,   262,    28,   604,  2146,  2146,  2146,  9184,
   -1168,    20, 10346,   -23,    45,    67,  6786, 10346,  9741,  5696,
    7004,  5914,  4606,  4824,  9862,  5260,  7222, 10346,  5042,  6132,
    7440,  5478,  7658,  6350,  9184,   -22,  7876,  4170,  4388,  9983,
    8094,    36, 10104, 10225,  8312,  8530,  8748,   -31, 10346,  1555,
    8966, 10346, 10346,   -27,   -51,   -20,     2,    35,    96,  2146,
     216,   177,   234, -1168, -1168, -1168, -1168, -1168,   260,   264,
   -1168,   340, -1168, -1168, -1168, -1168, -1168, -1168, -1168,  9184,
   -1168, 10346, -1168,   391,   151, 10801, -1168, -1168, -1168, -1168,
   -1168, -1168,   184,   188, -1168, -1168,   197,   206,   162,   212,
     224,  9184,   228,   243,   270,   293,   317,   -71, 10346, 10346,
     246,   330,   -86,   -64, 10346,   335,   -65,   363,   398,   -42,
     406,   -47,   -12,   354,   376,   435,   470,   474,  9184,   489,
     545,   -67,   587, -1168,   -46,   520,    19,   524,   526,   540,
     553,   557,   566,   578,   601,   603,   618,   677,   680,   681,
     691,   704,   712,   720,   726,   728,   743,   755,   757,   765,
     773,   781,   783,   785,   797,   806,   809,   819,   854,   857,
     876,   880,   897,   913,   914,   924,   948,   953,   956,   970,
     974,   987,  1003,  1007,  1035,  1062,  1076,  9184,  1082,   649,
   10346,   725,  9184,  9184,    70, -1168,   804, -1168, -1168, -1168,
   -1168,   280,   602,   745,   790,   818,   911,   937,   972,  1048,
   10346,   906, -1168, -1168,   906, -1168,  9184, 10801,   336,  1091,
    1214,  1093,     5,  9184,   -41, -1168,    70,  1926,  1094,  1095,
    1061,  1926,  1243,     9,  1097,  1106,  1071, -1168, -1168,    69,
      69, -1168, -1168,  1104,   906, -1168,  9184,    38,  1926,  1116,
   -1168,  1117,  1926, -1168, -1168,   260,   264,   906,  9184, 10346,
   10346, -1168, 10346,  9184,     9,     0, 10346,    52, 10346,  9184,
    1119, 10346,  1120, 10346, 10346,     9, 10346, 10346, 10346, 10346,
   10346,     9, 10346, 10346, 10346, 10346,     9, -1168,   906, 10346,
   10346, 10346,     9, 10346,     9,    82, 10346, 10346, 10346, 10346,
       9, 10346, 10346,     9, 10346,     9, 10346, 10346, 10346,     9,
   10346,  1121, 10346,  9184,  1142,     9, 10346, 10346, 10346,  1143,
   10346, 10346, 10346, 10346, 10346, 10346, 10346,     9, 10346, 10346,
   10346, 10346, 10346, 10346,     9, 10346,   122, 10346,  1145, 10346,
   10346,   133, 10346,   166, 10346,     9, 10346,     9, 10346,  1159,
    9402,  9620,   189,  9184,  9184,  9184,  9184,  9184,  9184, 10346,
    9184,  9184,  9184, 10346,    12,    -3,   906, 10346, 10346,  1284,
    1284,  1284,  3450, 10346,   195,  1164, 10346, -1168, -1168,  1279,
    9184, 10346, -1168,  1926,  1187,  9184,   906,  1196,  1329,  9184,
      39, -1168, -1168, -1168, -1168,  9184,  9184,   610,  9184,  2146,
    2146,   660,   660, -1168, 10346,   190,   191,  1184, 10346, 10346,
   10346, 10346, 10346, 10346, 10346,   193, 10346, 10346, 10346, 10346,
   10346,  9184, 10346, 10346, 10346, 10346, 10346, 10346, 10346, 10346,
   10346, 10346, 10346, -1168, 10346, 10346, 10346,  1198, 10346, 10346,
   10346, 10346, 10346,  9184, 10346,  9184,  9184, 10346, 10346,  9184,
    9184,  9184,  9184,  9184,  9184,  9184,  9184,  9184,  9184,  2146,
    9184,  9184,  9184,  9184,  9184,  3724, 10346, 10346, 10346, 10346,
   10346,  9184,  9184,  9184,  3947,  9184, 10346,  9184, 10346,  9184,
   10346, 10346, 10346, 10346, 10346, 10346, 10346, 10346, 10346,  2146,
   10346,  1201,  1202, 10346,  1284, 10346,  1284, 10346,  1205,     9,
   10346, 10467,   906, 10346, -1168,    90,  3653, 10346, 10346, 10346,
   10346, 10346, 10346, 10346, -1168, -1168, -1168, -1168,  9184,  9184,
    9184,  9184,  9184,  9184,  9184,  9184,  9184,  9184,  9184,  1215,
    1219,  1220, -1168,  1225,  1228,  1234, -1168,    29,  1242,  1244,
      70,  1926,  1431,    92,  1441, 10801,  9184,  1264, 10346, -1168,
   -1168,  9184,    70,    49,   294,  1275,    10, -1168,  1494,   -41,
   -1168, -1168,   663,  9184, -1168, -1168,  9184, -1168, -1168,   262,
   -1168, -1168,    37,  1926,   639, 10346,  9184,     9,   906,   286,
     906,  1273,  9184, 10346,   287, 10346,   319,  1274, 10346,   344,
   10346,   906,   345,  9184,   906,   348,   349,   906,   372,  9184,
     906,   374,   375,   377,  9184,   405,   416,   421,  9184,   424,
    9184, 10346,   443,   906,   446,   496,  9184,   906,   906,  9184,
     497,  9184,   498,   501,   502,  9184,   515, 10346,   906,   407,
    1271,     9, 10346,  9184,   516,   529,   532, 10346,   906,   533,
     534,   906,   558,   559,   572,  9184,   583,   906,   588,   594,
     597,   606,  9184,   616, 10346,   619, 10346,   906,   624, 10346,
     632,  9184,   633,  9184,   634,  9184,   635, 10346,  9184,  1926,
    9184,  1926, 10346,     9,  1278,  1286,   482,  1288,    13,  1287,
     906,  1289,     9,  1292,   636, 10346,  9184,  9184,   637,   686,
    1327,  1306,  1315,  1325, -1168,  9814,    30,  9184,  9184,   906,
   -1168,  1926,   906,   729, -1168,    70,  1926,  1340, -1168, -1168,
   -1168, 10056,  1330, -1168, -1168,  1347,  1356,  1367,  1389,  1456,
      76,  1341,  1370,  1372,  1383,  1388,  1399,  1402,  1413,   694,
   10346, 10346, 10346,   906,   906,   696,   906,   906,   697,   906,
   10346,   906,   706,   710,   718,   906,  1668,   722,   734,   735,
     736,   906,   746,   758,   906,   760,   906,   906,   763,   779,
     906, 10346,   906,   802,   821,   825,   906,  1756,     9,   906,
     592,  1415,  1780,   826,   844, 10177, 10298, 10419, 10540, 11853,
     815, 11876,   949, 11887, 11898,  1401, 11909, 11920, 11931, 11942,
    1993, -1168, 11953,    62,   104,   855,   870,   882,  2006,  2315,
    1018, -1168, 11998, 12015,   156, 12115,  -150, 12126,   164,   174,
     244,   334,   353,   900,   902,   357,   371,   466,  1433,   -99,
   -1168, -1168,   903,   -44,   927,   241,   929, -1168,  9184,   390,
    2566,   906,   906, -1168, -1168,   906,   906,   906,   906,   906,
     906, -1168,   118,   118,  9184,  9184,  1830,   418,  1309,   409,
      -9,   145, -1168,   -43,   -43,  1575,  1575, -1168, -1168,   280,
   -1168, -1168,   602, -1168, -1168, -1168,  1470, -1168, -1168, -1168,
   -1168,  1615,  2327,  9184,   -18, 12137, 10588, -1168, -1168,  9184,
    9184, -1168, -1168,  9184, -1168,   836, -1168,  1443,  1445,  1442,
    1447,  1926,  1453,  1484,  1489, -1168, -1168, -1168,  1605,  1611,
     931,  2340,  9184, 10346, 10346,  1468,   932,  9184,   940,  9184,
   10346,   955,  9184,   961,  9184,  1496,  9184,  9184,  9184,  1498,
   10346,  9184,  9184,  1499, 10346, 10346,  9184,  1500,  9184,  1501,
     906, 10346, 10346, 10346,  1514,  1524, 10346,  1526, 10346,  9184,
    9184,  1537, 10346,   966, 10346,  9184,  9184,   906,  1540, 10346,
   10346,  9184,   969, 10346,  9184,  9184, 10346, 10346,  1550, 10346,
    9184,  9184, 10346,  9184,  1568,  9184,   906, 10346,   977, 10346,
     979, 10346,  2356, 10346,  1571,  9184,  1574,  9184,   980, 12160,
   12177,   982,  9184, 10346,  9184,  9184, 10346, 10346,  9184, 10346,
    9184,  9184,  9184, 10346,   988,  1576,  2392, 10346, 10346, -1168,
    9184,  9184,  9184, -1168, -1168,    70,  1926,    70,  1926, 10801,
   -1168, -1168, -1168,  9184,  9184, -1168,  9184, -1168, -1168,  9184,
    9184,  9184, -1168, 10346, 10346, -1168,  1557,  1581, -1168, -1168,
    9184,  9184, 10346,   992,   994,   425,  9184,  9184,   996,  9184,
   10346, 10346,  9184, 10346, 10346, 10346, 10346,  9184, 10346,  9184,
   10346, 10346,  1002, 10346,  9184, 10346,  9184,  9184, 10346, 10346,
    9184, 10346, 10346, -1168, -1168, -1168, -1168, -1168, -1168,  9184,
   -1168, -1168,  9184, -1168, -1168, -1168, -1168, -1168, -1168, -1168,
    9184, -1168, -1168, -1168,  9184,  9184,  9184,  9184,  9184, -1168,
   10346, -1168, -1168, -1168, -1168, -1168,  9184, -1168, -1168, -1168,
   -1168, -1168, -1168, 10346, 10346, -1168, -1168, -1168, -1168, -1168,
   10346,  1804, -1168, 10346,  1804, -1168, 10346, 10346,  1588, -1168,
   -1168, -1168,  1593, -1168,  1604,   610,  1860,  1607,  1609, -1168,
    1618,  1619, -1168, -1168,   841, 10801, -1168,  9184,  2565,  1797,
   10346, -1168, 10346,   906,    70,    49,  2614,   836,   836, 12188,
    1612,  1630, -1168,  1628, -1168, -1168, -1168, -1168, 10346, -1168,
   -1168,  2146,  2146, 10346, 10346,  1629,  1008,  1022, 10346, 10346,
     700,  2666, 10346,  1926,  1024, 10346,  1926, 10346,   830,  1926,
   10346,    70,  2741,    70,  1926,  1926, 10346,   906,  1926,  1926,
   10346,  1028,  1037,   842,  1926, 10346,   926,  2813, 10346,  1042,
     906,  1052, 10346, 10346,  1054, 10346,   906,  1926,  1926, 10346,
    1055, 10346,  1056,  1026,  1632, 10346,  1060,  1064,  2835, 10346,
    1065,  1096,  1926,  1926,   906,   906, 10346,  1070,  2857,  1926,
    1125,  1926, 10346,  2877,   906, 10346,  1140, 10346,  1141, 10346,
    1144, 10346,  1926, 10346,  1926, 10346,  2953,  2953, 10346,  1633,
     906,  2936,  1259,  3054,   906,  1146,  1635,  1154,  3099,  1637,
    1639,   906, 10346, 10346,  9184,   906,  1165,  1642, 12199, 12210,
    1046, -1168,  1645, -1168,   552, 10801, 12221, 12232, 12243, 12254,
     429,    -6, -1168, -1168, 12299, 12322,   906, 10346, 10346, -1168,
    1926,  1926, 10346,    70,  1926,  1169,   906,  3125,  1174,   906,
     906,   906,  1926,  1177,  3139,   906,   906, 10346,   906,  1926,
     906,  3190,  1644,  1180,  1183,    24,   906,   906, 12416, 12427,
   12438, 12461, 12484,  1074, 12495, 12506,     3, 12517,    53,   131,
     483,   265,   538,   284,   555,   580, 10346,   118,   118, -1168,
   -1168, -1168, -1168, -1168,  1816,  1837,  1833, 12528,  9184,  1651,
     667,   152, -1168,  9184, -1168, -1168, -1168, -1168, -1168, -1168,
    1652,  1653,   906, -1168, -1168,   906,   906, 10346,  9184, 10346,
    1191,   906, 10346, 10346,  1193, 10346,  1197,  1246, 10346,  1251,
   10346,  1257,  1267, 10346,  9184,  9184,  1269, 10346,  9184,  1277,
    9184,  9184,  1314,  1317, 10346,  1318,  1319,  9184,  1328, 10346,
   10346, 10346,  1333,  9184,  9184,  9184,   906,  9184, 10346,  1337,
    9184,  9184,  9184,  1343,  9184,  1351,  9184,  1353,  9184,   906,
    9184,  1363,  1364,  1365,   906, 10346, 10346, 10346,  9184, 10346,
   10346, 10346,  9184, 10346,  9184,  1373,  1377,  1926, 10346, -1168,
    1810,  1812,  1813,  9184,   885,  9184,    42, -1168, -1168, -1168,
   -1168, -1168, -1168, 10346, -1168, -1168,   906,  1385,  1403,  9184,
   10346, 10346,  9184,  9184,   906, 10346, 10346, 10346, 10346,  9184,
   -1168, -1168, -1168, -1168, -1168, -1168,  9184, -1168, -1168, -1168,
   10346, -1168, -1168,  9184, -1168,  9184, -1168, -1168, 10346, -1168,
   -1168, 10346, -1168, -1168,  1405, -1168, -1168,  9184, -1168, -1168,
    1840,   843, 12539,  9184,  1835, 10346, 12550,   836,  1667,  1669,
     836, -1168, -1168,  1421,    70,  3244,  1423, 10346,  1432,   906,
   10346,  1434,  9184,  9184,   906, 10346,   906,  9184, 10346,   906,
    3272,  1926, 10346,  1436, 10799, 10346,    70, 10895,    70,  1926,
    9184, 10346,   906, 10346, 10346, 10906, 10346,   906,   906,  1437,
   10346, 10921,    70, 10939, 10962,  1552, 10973,   906,  9184, 10984,
   10995, 11006,  9184, 11017, 10346,  1569, 11028, 10346, 11039, 11084,
    9184,  9184,  9184,   906,   906,   906, 11102,  1440,  1454,   906,
   11202,   906,  1666, 10346, 10346,  1459, 10346, 10346, 10346, 12561,
    1679,  1681,   315, -1168,   518, -1168, -1168, -1168,   668, 10346,
   10346,    70,  1926,  1462,   906,  1926,  1926,  1465,  1473,   906,
     906, 11213, 12600,   750, 12623, 12723,   807,   824, 10346, -1168,
   10801,  9184,  1861, -1168,  1683, -1168, 11224,  1684,   847, -1168,
   -1168, -1168, -1168, -1168, 10346,  9184, 10346,  1479, 10346,   906,
   10346, 11247, 11265,  1481, 11276,  1492,  9184,  1493,  9184,  9184,
    1495,  9184, 11287,   906,  1504,  1522,  9184,  1530, 10346,   906,
    9184,  9184,  9184,  9184,  9184, 11298,  9184,  9184,  9184, 11309,
    9184,  1535, 10346, 10346,  1539,  9184,  9184, 11320, 11331, 11342,
    9184, 10346, 10346, 10346,  9184,   906,  1543, 10346,   906,   906,
     906,  1839,  1686,  1687, -1168,   885,  9184, -1168, -1168,  1548,
     906, 10346, 10346, 10346,  9184, -1168, -1168, -1168, -1168, -1168,
   -1168,   906, 10801,  1878,   628, 10801, -1168, 10346,  9184,  9184,
   -1168,  1494,   906,  1926,  1553, 10346,   906,  1556, 10346, 10346,
   10346, 10346, 10346, 11387,  9184,  1926,  1926, 10346, 11410, 10346,
    9184, 10346, 11505, 10346,   906, 11516,  1926,  1926,  1926, 11527,
   10346, 11550, 11573, 11584, 10346,  1926, 10346,  1561,   906, 10346,
    1926,  1926,  9184, 10346,  9184, 11595,   906,  1566,   906,  1689,
   10346,   906, 10346, -1168, -1168, 10801, -1168,  1926, 10801, 10346,
     906,   906,   906, 12734,  1833, -1168, -1168,  1833,  1059,   165,
   12745, 11606,   836, 10346,   906, 10346,   906,   906,  1570,   906,
     906,  9184, 11617,  1572,  9184,   906, 11628,   906,  9184,   906,
    9184,  9184,   906,  9184, 10346,  9184,  1580,   906, 10346,   906,
   11639,   906, 11650, 10346, 10346, 10346,   906,   906,    57,  1833,
     906, -1168, 10801, -1168, -1168, -1168, -1168, 10346, -1168,  9184,
   -1168,  1584,  1592, 10346,  1926,  9184, 10346,  1926, 10346,  1926,
    1926,  1926,  1926,   906, 11690, 10346,   906, 10346,  9184,   906,
     906,   906, -1168, -1168, -1168,    31,  1833,   878, 12762, 10346,
   10346,   906, 11713,   906,   906,  9184,   906,   906, 11813, -1168,
   -1168,  1913,  1840, -1168, -1168,   906,  1608, 10346, 11824, 10346,
   -1168, -1168, -1168,  9184,  1610, 10346,   906, 11835, 10346,   906,
   10346,   906,   906
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     0,   223,   478,   506,   511,    12,     0,     0,
       0,     0,    24,    26,   456,     0,     0,     0,     0,   457,
      19,    20,   489,   502,     0,   569,    48,     0,    57,     0,
     220,   221,     0,     0,     0,    54,     0,     0,     0,     0,
     211,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,     0,     0,
       0,     0,     4,     3,     8,    39,    41,    10,    22,    23,
      21,     0,    14,    15,    18,    17,    16,    28,    29,     0,
     440,     0,   440,     0,     0,     7,   433,   432,    30,    31,
      38,   430,   322,   241,   431,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   416,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   264,
     266,     0,     0,     0,     0,     0,   278,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   335,   316,   321,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,   440,   440,    42,   458,     0,     7,   522,     0,
     573,     0,     0,   549,   565,    50,    59,    58,     0,     0,
      60,   222,     0,     0,   541,   543,    52,   539,   545,     0,
       0,   546,   427,    53,    56,    55,     0,     0,   584,     0,
      40,     0,   210,     9,    11,     0,     0,   224,     0,     0,
       0,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,   447,   301,     0,   442,   225,     0,     0,     0,
       4,   440,   440,    32,    33,     0,     0,   307,     0,     0,
       0,     0,     0,   389,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,   390,     0,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    36,   305,   303,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
     462,    25,   459,   467,   468,    27,   465,     0,     0,     0,
     494,   493,     0,     4,     0,     7,     0,     0,     0,   570,
     571,     0,   552,   554,    45,     0,     0,    49,   567,   565,
     440,   440,     0,     0,   232,   231,     0,   440,   440,     0,
     429,   428,     0,   583,     0,     0,     0,     0,    88,     0,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,    68,     0,     0,   166,     0,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,   108,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,   167,     0,     0,     0,     0,     0,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   197,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,   231,     0,     0,     0,     0,
     239,     0,     0,     0,   213,     0,     0,     0,     0,   194,
       5,   302,   230,     0,   438,   445,   446,   441,   443,   439,
     479,     0,     0,   513,   512,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,   395,     0,   417,   402,     0,   418,
       0,   403,   284,     0,     0,   400,     0,     0,     0,     0,
       0,   396,     0,   419,   391,     0,   420,   294,     0,     0,
     399,     0,   401,     0,     0,     0,   415,     0,     0,   299,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     265,   267,     0,     0,     0,     0,     0,   279,     0,     0,
       0,   290,   291,   246,   336,   330,   332,   334,   331,   333,
     329,   245,     0,     0,     0,     0,   309,   311,   313,   310,
     312,   308,   327,   324,   323,   325,   326,   440,   440,     0,
     440,   440,     0,    43,    44,   491,   495,   505,   504,   503,
     516,     4,     0,     0,     0,     0,     0,   550,    46,    47,
       0,   557,   559,     0,   568,     0,    51,     0,     0,     0,
       0,   339,     0,     0,     0,   540,   547,   548,     0,     0,
     234,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,   214,   215,   216,   217,   218,   219,     7,
     453,   454,   448,     0,     0,   507,     0,   381,   277,     0,
       0,     0,   382,     0,     0,   376,     0,     0,   317,   318,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,   341,   342,   343,   344,   345,     0,
     347,   348,     0,   350,   351,   314,   354,   355,   352,   353,
       0,   357,   361,   362,     0,     0,     0,     0,     0,   251,
       0,   256,   257,   363,   275,   364,     0,   276,   258,   259,
     262,   260,   261,     0,     0,   263,   370,   372,   371,   268,
       0,     0,   271,     0,     0,   273,     0,     0,     0,   282,
     281,   585,    35,   587,    37,   306,   304,     0,     0,   460,
       0,     0,   466,   492,   499,     7,   523,     0,     0,   574,
       0,   572,     0,   555,   553,   554,     0,     0,     0,     0,
     535,   537,   566,   532,   434,   436,   440,   440,     0,   542,
     544,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,   162,     0,     0,   163,     0,   144,   145,
       0,    69,     0,    75,    76,    77,     0,    72,    74,   181,
       0,     0,     0,     0,   125,     0,     0,     0,     0,     0,
      95,    96,     0,     0,     0,     0,   113,   114,   112,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
     149,   154,   156,   155,   158,   159,     0,     0,     0,   172,
       0,   173,     0,     0,   176,     0,     0,     0,   180,     0,
       0,     0,   203,     0,   191,     0,   198,   196,     0,     0,
     115,     0,   102,   105,   103,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     6,     0,   444,     0,     7,     0,     0,     0,     0,
       0,     0,   337,   338,     0,     0,   392,     0,     0,   283,
     295,   298,     0,   286,   285,   405,   393,     0,     0,   423,
     424,   404,   296,     0,     0,   397,   398,     0,   411,   412,
     413,   339,     0,   409,     0,     0,   300,   426,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   463,
     464,   469,   470,   496,     0,     0,   517,     0,     0,     0,
       0,     0,   551,     0,   558,   560,   561,   440,   440,   533,
       0,     0,   139,   235,   236,   233,   238,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,     0,   240,
       0,     0,     0,     0,   471,     0,     4,   514,   373,   374,
     375,   383,   384,     0,   319,   320,   414,     0,   288,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
     346,   349,   356,   247,   248,   250,     0,   359,   360,   252,
       0,   365,   366,     0,   368,     0,   269,   378,     0,   270,
     380,     0,   272,   315,     0,   586,   588,     0,   500,   490,
     526,   576,     0,     0,   575,     0,     0,     0,     0,     0,
       0,   435,   437,     0,    91,     0,     0,     0,     0,   182,
       0,     0,     0,     0,   146,     0,    70,     0,     0,   122,
       0,   123,     0,     0,     0,     0,    99,     0,    98,    97,
       0,     0,   110,     0,     0,     0,     0,   135,   134,     0,
       0,     0,   127,   130,     0,     0,   152,   157,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   200,
       0,     0,     0,   116,   117,   106,     0,     0,     0,    85,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     474,   475,     0,   472,   485,   510,   509,   508,     0,     0,
       0,   407,   406,     0,   422,   421,   293,     0,     0,   408,
     410,     0,     0,     0,     0,     0,     0,     0,     0,   497,
       7,     0,   524,   580,     0,   577,     0,     0,     0,   563,
     562,   536,   538,   534,     0,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,   228,   229,
     227,     0,     0,     0,   449,     0,     0,   480,   385,     0,
     289,     0,     0,     0,     0,   249,   253,   367,   369,   377,
     379,   388,     7,     4,   530,     7,   518,     0,     0,     0,
     556,   567,    61,    92,     0,     0,   183,     0,     0,     0,
       0,     0,     0,     0,     0,   188,   189,     0,     0,     0,
       0,     0,     0,     0,   133,     0,   131,   143,   150,     0,
       0,     0,     0,     0,     0,   165,     0,     0,   185,     0,
     179,   201,     0,     0,     0,     0,   136,     0,   118,     0,
       0,   206,     0,   476,   477,     7,   473,   486,     7,     0,
     425,   386,   387,     0,   498,   531,   527,   525,     0,     0,
       0,     0,     0,     0,    62,     0,    64,    65,     0,    67,
      71,     0,     0,     0,     0,    94,     0,   111,     0,   204,
       0,     0,   148,     0,     0,     0,     0,   175,     0,   184,
       0,   202,     0,     0,     0,     0,    80,   226,     4,   481,
     394,   274,     7,   520,   521,   519,   581,     0,   578,     0,
     564,     0,     0,     0,   124,     0,     0,   100,     0,   205,
     128,   151,   174,   169,     0,     0,   186,     0,     0,   104,
     137,   119,   452,   451,   450,     0,   528,     0,     0,     0,
       0,    66,     0,   187,   109,     0,   168,   199,     0,   484,
     483,   487,   526,   582,   579,   160,     0,     0,     0,     0,
     488,   482,   529,     0,   120,     0,   190,     0,     0,   170,
       0,   121,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1168, -1168,  -114, -1168, -1168,   881, -1168, -1168, -1168, -1168,
   -1168, -1168,  1882,  -142, -1168, -1168,  -332,   -15, -1168,  1891,
    1538, -1168, -1168,  1502,  -430,  2793, -1168,  1334,   -28,    -5,
   -1168,    60,    71,   -53, -1168, -1168,   892, -1168, -1168, -1168,
   -1168, -1168, -1168, -1168, -1168,  1049, -1168,  1045, -1168,   214,
   -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168,
   -1168,   414, -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168,
   -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168, -1168,
   -1168, -1168, -1168, -1168, -1168, -1168,    32, -1168, -1168, -1168,
   -1167, -1168, -1168, -1168,  1344, -1168, -1168,   767,  1357, -1168,
   -1168, -1168, -1168, -1168,   194, -1168,    41, -1168, -1168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    91,    92,   409,  1039,    93,   231,   232,   872,   873,
     254,   589,    94,   596,    95,    96,   721,   224,   225,    97,
     262,   875,   874,   755,   756,   263,   227,   271,   228,   118,
     260,   229,   230,   414,   415,   737,   738,   100,   733,  1302,
    1805,  1894,  1042,   101,   561,   562,   565,   566,  1622,  1623,
     102,   113,  1044,  1808,  1895,  1911,  1727,  1921,   103,   246,
     896,   572,  1164,  1527,  1742,  1375,  1650,   104,   247,   899,
     105,   114,  1305,  1627,   106,   115,   744,   107,   574,  1165,
    1530,  1818,  1865,   108,   575,  1746,  1652,  1862,  1912,  1816,
    1182,  1540,  1183,   266,   267,   273,   584,   907,   587,  1177,
    1178,  1537,  1751,   588,   915,   253,   279,  1152,  1154
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     241,   420,   758,   244,   119,   120,   272,   594,   109,   579,
    1384,  1385,   580,   256,   911,   585,   111,   912,   451,   594,
     274,   277,   594,   594,     1,     2,   439,   287,   554,   242,
     275,   121,   295,   297,   594,   124,   268,   470,   346,   318,
     121,   433,   325,  1909,   124,   926,   249,   604,   442,   250,
     251,   380,   288,   289,   366,   742,  1625,   371,   373,   417,
      98,   553,   554,   382,   397,   456,   395,   396,   722,   723,
     543,    99,   121,  1910,   404,  1125,   124,  1126,   280,   281,
    1892,   743,   245,   398,  1626,   546,   547,   290,   347,   548,
     549,   550,   551,   552,   553,   554,   416,   906,   243,  1893,
     459,   285,   291,   537,   538,   539,   540,   541,   542,   452,
     546,   547,   286,   381,   548,   549,   550,   551,   552,   553,
     554,   543,   116,   435,   436,   117,  1139,   440,  1140,   445,
     405,   897,   441,   573,   898,   537,   538,   539,   540,   541,
     542,   537,   538,   539,   540,   541,   542,   434,   447,   443,
     255,   471,   612,   448,   444,   537,   538,   539,   540,   541,
     542,   292,   110,   623,   473,   369,   457,   474,   453,   629,
     112,   458,   475,   399,   634,    98,   454,   407,   557,   558,
     638,  1142,   640,  1143,   258,   259,    99,   586,   646,   568,
     569,   649,   853,   651,   855,   423,   424,   655,    84,    85,
      86,   460,   543,   663,   400,   532,   461,  1169,   535,  1170,
     555,   556,   557,   558,   543,   675,   554,   543,   252,  1482,
     543,  1483,   682,   543,   595,   567,   401,   613,  1509,   581,
    1510,   570,   477,   693,   913,   695,   595,   478,   582,   715,
    1017,   600,   601,   555,   556,   557,   558,   269,   270,   543,
     543,   595,   716,   717,   863,  1034,   269,   270,   543,   402,
     537,   538,   539,   540,   541,   542,   264,   265,   555,   556,
     557,   558,   543,   543,   608,   609,   408,   610,  1512,   615,
    1513,   614,   543,   616,   559,   560,   619,  1112,   621,   622,
     543,   624,   625,   626,   627,   628,   543,   630,   631,   632,
     633,  1052,   543,  1053,   635,   636,   637,    98,   639,   641,
     543,   642,   643,   644,   645,   863,   647,   648,    99,   650,
     403,   652,   653,   654,   543,   656,   406,   658,   659,  1113,
     410,   664,   665,   666,   411,   668,   669,   670,   671,   672,
     673,   674,   543,   676,   677,   678,   679,   680,   681,   684,
     683,   543,   685,   543,   687,   688,  1514,   690,  1515,   692,
     689,   694,   412,   696,   555,   556,   557,   558,   745,   746,
    1660,   706,   543,  1663,   710,   419,   543,   863,   714,  1535,
    -515,  1123,   718,   719,   543,   543,   543,   858,   726,  1128,
    1866,   729,  1867,   691,   543,   418,   732,   546,   547,  1129,
     735,   548,   549,   550,   551,   552,   553,   554,   110,   543,
     543,   543,   112,   543,   750,   543,   702,   760,   761,   759,
     770,   421,   727,   763,   764,   765,   766,   767,   768,   769,
     422,   771,   772,   773,   774,   775,   425,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   426,   788,
     789,   790,   428,   792,   793,   794,   795,   796,   437,   799,
     800,   901,   803,   804,   543,   932,  1145,   429,  1146,  1130,
     751,   752,   537,   538,   539,   540,   541,   542,   552,   553,
     554,   823,   824,   825,   826,   827,   551,   552,   553,   554,
    1517,   834,  1518,   836,   430,   838,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   849,   543,   543,   852,  1520,
     854,  1521,   856,   933,   937,   859,   861,   431,   862,   976,
     908,   909,   865,   866,   867,   868,   869,   870,   871,  1726,
     815,   537,   538,   539,   540,   541,   542,   917,   918,   543,
    1724,   432,  1725,   438,   923,   924,   939,   537,   538,   539,
     540,   541,   542,   446,   543,   555,   556,   557,   558,  1131,
     848,  1012,  1475,   904,   543,   543,  1018,   462,   543,   543,
    1021,   942,   944,   543,   272,   946,   947,   543,  1132,   546,
     547,   449,  1135,   548,   549,   550,   551,   552,   553,   554,
     930,   543,   543,   463,   543,   543,  1136,   543,   936,   948,
     938,   950,   951,   941,   952,   943,   563,   564,   116,   123,
     543,   117,   125,   546,   547,  1149,   450,   548,   549,   550,
     551,   552,   553,   554,   455,   543,   960,   543,   555,   556,
     557,   558,   954,   127,   974,    98,   543,   555,   556,   557,
     558,   543,   973,   955,   543,   543,    99,   977,   956,   543,
    1319,   958,   982,   464,  1481,  1870,  1087,   537,   538,   539,
     540,   541,   542,   543,   753,   754,   543,   919,   920,   996,
     961,   998,  1815,   962,  1000,   548,   549,   550,   551,   552,
     553,   554,  1008,   535,   469,   535,   543,  1011,   465,   546,
     547,  1137,   466,   548,   549,   550,   551,   552,   553,   554,
    1024,   140,   543,   543,   141,   233,   234,   468,  1516,  1015,
     144,  1361,  1035,  1037,  1363,   235,   543,   543,   543,   928,
     929,   543,   543,   963,   966,   968,   236,   237,   969,   970,
     472,   153,   154,  1040,  1041,   543,   543,   555,   556,   557,
     558,   158,   972,   979,   476,  1063,  1064,  1065,   479,   543,
     480,   238,   543,   543,   543,  1068,   980,   165,   543,   981,
     983,   984,   239,  1519,   481,   537,   538,   539,   540,   541,
     542,   555,   556,   557,   558,   543,  1082,   482,   543,   543,
    1522,   483,   186,   187,   188,   985,   986,   191,   192,   193,
     484,   195,   543,   197,   198,   199,   200,   201,   202,   987,
     543,   205,   485,   543,   208,  1523,   209,   210,   543,   212,
     989,   214,   543,   216,   543,   990,   218,   543,   219,  1088,
     221,   991,   544,   545,   992,   486,   543,   487,   240,   555,
     556,   557,   558,   993,  1157,  1158,   543,  1160,  1161,   543,
    1180,  1181,   488,   995,   543,   567,   997,   555,   556,   557,
     558,   999,   543,   543,   543,   543,   543,   543,   531,  1001,
    1003,  1005,  1007,  1023,  1027,   546,   547,  1151,  1153,   548,
     549,   550,   551,   552,   553,   554,   546,   547,  1373,  1374,
     548,   549,   550,   551,   552,   553,   554,   543,   543,  1620,
    1621,  1173,  1534,  1728,  1174,   537,   538,   539,   540,   541,
     542,   489,  1653,  1654,   490,   491,   543,   537,   538,   539,
     540,   541,   542,  1028,   543,   492,   543,   543,  1196,  1197,
     543,  1062,  1200,  1066,  1067,  1204,   543,  1402,   493,  1208,
     543,  1211,  1213,  1069,   533,  1217,   494,  1070,   543,  1221,
    1222,  1223,   543,  1226,   495,  1071,  1229,  1230,  1231,  1073,
     496,  1234,   497,  1236,   543,   543,   543,  1240,   440,  1242,
    1243,  1074,  1075,  1076,  1246,  1247,   543,   498,  1250,  1251,
     543,  1254,  1255,  1077,  1257,  1736,  1297,  1260,   543,   499,
     543,   500,  1264,   543,  1266,  1078,  1268,  1079,  1270,   501,
    1080,   537,   538,   539,   540,   541,   542,   502,  1280,   543,
    1282,  1284,  1285,   443,  1287,   503,  1081,   504,  1291,   505,
     546,   547,  1295,  1296,   548,   549,   550,   551,   552,   553,
     554,   506,   543,   555,   556,   557,   558,   543,   735,  1083,
     507,   447,  1739,   508,   555,   556,   557,   558,  1310,  1311,
    1098,   543,  1099,   509,   543,   543,   543,  1316,  1084,  1740,
     543,  1376,  1085,  1091,  1323,  1325,  1326,  1408,  1328,  1329,
    1330,  1331,   543,  1333,   543,  1335,  1336,   543,  1338,  1415,
    1340,  1092,  1750,  1343,  1344,   543,  1346,  1347,   510,   546,
     547,   511,  1114,   548,   549,   550,   551,   552,   553,   554,
     543,   537,   538,   539,   540,   541,   542,  1115,   543,    98,
     512,  1863,   543,  1913,   513,  1356,  1864,   546,   547,  1116,
      99,   548,   549,   550,   551,   552,   553,   554,  1358,  1359,
     543,   514,   543,   543,   457,  1360,   543,  1133,  1362,  1134,
    1141,  1364,  1365,  1390,  1391,   546,   547,   515,   516,   548,
     549,   550,   551,   552,   553,   554,   543,   543,   517,   543,
     460,   543,   543,  1417,  1144,  1380,  1147,  1381,  1193,  1199,
     543,   537,   538,   539,   540,   541,   542,  1202,   555,   556,
     557,   558,   518,  1392,  1101,   543,  1102,   519,  1395,  1396,
     520,   543,  1205,  1400,  1401,   474,   543,  1404,  1207,   543,
    1406,  1476,  1407,  1241,   521,  1409,  1249,   543,   522,   543,
     543,  1411,   543,  1499,  1265,  1412,  1267,  1275,   543,  1278,
    1416,   523,   543,  1419,   543,  1292,   543,  1422,  1423,  1317,
    1425,  1318,   543,  1322,  1426,    98,  1428,   524,   543,  1337,
    1432,   525,  1393,  1394,  1436,  1398,    99,   555,   556,   557,
     558,  1439,   543,  1119,   543,  1120,   543,  1443,   543,  1399,
    1445,  1405,  1447,  1430,  1449,  1413,  1451,   543,  1452,   526,
    1453,   477,   543,  1454,  1414,   555,   556,   557,   558,  1420,
     577,  1472,   543,  1473,   543,   543,   543,  1465,  1466,  1421,
     543,  1424,  1427,  1429,   543,   543,   527,  1433,   592,   720,
     543,  1434,  1437,   555,   556,   557,   558,  1440,   599,  1505,
     528,  1506,  1486,  1487,   546,   547,   530,  1488,   548,   549,
     550,   551,   552,   553,   554,   576,   543,   578,   590,   591,
     730,   597,  1494,  1438,   537,   538,   539,   540,   541,   542,
     598,   602,   546,   547,  1538,  1539,   548,   549,   550,   551,
     552,   553,   554,   605,   606,   543,   618,   620,   657,   546,
     547,  1524,  1442,   548,   549,   550,   551,   552,   553,   554,
     543,   543,  1525,  1526,   543,    98,   543,  1446,  1448,   662,
     667,  1450,   686,  1459,   543,   549,    99,   551,   552,   553,
     554,  1461,  1543,  1544,  1546,   543,   697,  1548,  1549,   543,
    1551,   728,  1468,  1554,   543,  1556,  1489,   543,  1559,   740,
     543,  1491,  1563,   543,  1492,  1566,  1568,  1497,   762,  1572,
    1498,   543,   734,   543,  1577,  1578,  1579,   543,  1547,  1582,
    1550,   739,  1585,  1587,  1552,   791,   850,   851,   546,   547,
     857,  1595,   548,   549,   550,   551,   552,   553,   554,   887,
    1603,  1604,  1605,   888,  1607,  1608,  1609,   889,  1611,   890,
     546,   547,   891,  1615,   548,   549,   550,   551,   552,   553,
     554,   892,   555,   556,   557,   558,   543,   893,  1628,   894,
     593,   543,   895,  1553,  1631,  1633,  1634,   543,  1555,   543,
    1637,  1638,  1639,  1640,  1557,   900,  1457,   543,   903,   543,
     555,   556,   557,   558,  1558,  1643,  1562,   543,   975,   910,
     934,   940,   914,  1646,  1565,  1013,  1647,   555,   556,   557,
     558,  1163,   570,  1014,  1019,  1016,  1020,   546,   547,  1022,
    1658,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,  1667,  1030,   543,  1669,  1743,   543,   543,   543,
    1673,  1570,  1031,  1675,  1571,  1573,  1574,  1677,   543,   226,
    1680,  1029,  1032,   543,  1046,  1576,  1683,   543,  1684,  1685,
    1580,  1687,   248,   543,  1588,  1689,   257,  1043,  1054,   261,
    1592,   543,  1047,   543,   278,   278,   278,   282,  1594,  1701,
    1597,  1048,  1704,   543,   543,   543,   555,   556,   557,   558,
    1600,  1601,  1602,   543,  1049,  1055,  1056,   543,  1715,  1716,
    1613,  1718,  1719,  1720,  1614,   543,   383,  1057,   555,   556,
     557,   558,  1629,  1058,  1729,  1730,  1050,   537,   538,   539,
     540,   541,   542,   543,  1059,   543,  1105,   278,  1814,  1060,
    1630,  1817,  1648,  1741,   537,   538,   539,   540,   541,   542,
    1061,   543,  1089,   543,   384,   385,   554,   413,  1664,  1752,
    1666,  1754,   543,  1756,   543,  1757,   543,   543,  1138,  1668,
     543,  1670,  1166,  1678,  1688,   386,  1186,  1711,  1184,   427,
    1185,  1187,   387,  1774,   543,   555,   556,   557,   558,   543,
    1188,  1712,   543,  1051,  1191,   543,  1717,  1787,  1788,  1731,
    1192,  1858,  1732,   543,  1859,  1198,  1796,  1797,  1798,   543,
    1733,   543,  1801,   388,   389,   390,  1755,   391,  1760,  1189,
      98,   392,   543,   543,  1190,   543,  1810,  1811,  1812,  1762,
    1764,    99,  1767,  1210,   543,  1216,  1220,  1225,  1228,   546,
     547,  1770,  1819,   548,   549,   550,   551,   552,   553,   554,
    1824,  1232,   543,  1826,  1827,  1828,  1829,  1830,  1896,  1771,
     543,  1233,  1833,  1235,  1835,   543,  1837,  1773,  1839,   543,
     534,   536,  1786,   543,  1239,  1842,  1789,  1245,   543,  1846,
    1800,  1847,   543,   543,  1849,  1809,   543,  1256,  1851,  1693,
    1823,   543,  1312,  1825,   571,  1856,   543,  1857,  1848,   543,
     543,   583,   543,  1854,  1860,  1262,  1702,  1873,  1271,  1876,
     543,  1273,    98,  1293,   543,    98,  1313,  1885,  1871,   754,
    1872,  1899,   543,    99,   603,  1366,    99,   546,   547,  1900,
    1367,   548,   549,   550,   551,   552,   553,   554,   543,  1883,
     543,  1368,  1369,  1886,  1370,  1923,  1387,  1928,  1889,  1890,
    1891,   546,   547,  1371,  1372,   548,   549,   550,   551,   552,
     553,   554,  1897,  1379,  1388,  1389,  1397,  1528,  1901,  1431,
    1455,  1903,  1460,  1904,  1463,    98,  1464,  1469,    98,  1474,
    1906,  1496,  1907,  1529,    -4,  1533,    99,  1541,  1542,    99,
    1616,   660,  1617,  1618,  1915,  1916,  1651,   555,   556,   557,
     558,  1657,  1661,  1714,  1662,  1072,   549,   550,   551,   552,
     553,   554,  1924,  1722,  1926,  1723,  1745,  1747,  1749,  1802,
    1929,  1803,  1804,  1931,  -501,  1932,  1855,  1920,   699,   701,
    1301,   546,    98,   283,   707,   548,   549,   550,   551,   552,
     553,   554,   284,    99,   757,  1303,   927,  1162,  1159,  1806,
     725,  1649,  1382,   925,  1922,  1822,   916,     0,   731,     0,
       0,     0,     0,   736,     0,     0,     0,   741,     0,     0,
       0,     0,     0,   747,   748,     0,   749,   278,   278,     0,
       0,     0,     0,     0,     0,   555,   556,   557,   558,     0,
       0,     0,     0,  1086,     0,     0,     0,   546,   547,   776,
       0,   548,   549,   550,   551,   552,   553,   554,     0,   555,
     556,   557,   558,     0,     0,     0,     0,  1090,     0,     0,
       0,   797,     0,     0,   802,     0,     0,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   278,   816,   817,
     818,   819,   820,   822,     0,     0,     0,     0,     0,   828,
     829,   830,   832,   833,     0,   835,     0,   837,     0,   555,
     556,   557,   558,     0,   546,   547,     0,   278,   548,   549,
     550,   551,   552,   553,   554,     0,     0,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,     0,   555,
     556,   557,   558,     0,     0,     0,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   902,     0,     0,     0,     0,   905,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   921,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   931,   555,   556,   557,   558,   121,
     122,   123,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,   555,   556,   557,   558,     0,     0,     0,     0,
    1110,   133,     0,     0,   134,   555,   556,   557,   558,  1002,
       0,   135,   136,  1117,   137,     0,  1009,     0,  1010,   138,
       0,     0,   139,   140,     0,     0,   141,   142,   143,     0,
       0,     0,   144,   145,     0,  1026,     0,   146,     0,   147,
       0,   148,     0,   149,     0,  1036,  1038,   150,   151,   152,
       0,     0,     0,   153,   154,     0,     0,     0,   155,     0,
       0,   156,   157,   158,   159,     0,   160,   161,   162,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,     0,
     219,   220,   221,     0,     0,   222,     0,     0,     0,     0,
     223,     0,     0,     0,   276,     0,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,     0,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,     0,
       0,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,  1155,  1156,     0,     0,     0,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1168,     0,     0,     0,     0,     0,  1175,  1176,     0,
       0,  1179,     0,   546,   547,     0,     0,   548,   549,   550,
     551,   552,   553,   554,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1201,     0,  1203,     0,     0,
    1206,     0,  1209,     0,  1212,  1214,  1215,     0,     0,  1218,
    1219,     0,     0,     0,  1224,     0,  1227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1237,  1238,     0,
       0,     0,     0,   921,     0,     0,     0,     0,     0,  1248,
       0,     0,  1252,  1253,     0,     0,     0,     0,  1258,  1259,
       0,  1261,     0,  1263,   555,   556,   557,   558,     0,     0,
       0,     0,  1118,  1272,     0,  1274,   555,   556,   557,   558,
       0,     0,  1281,  1283,  1167,     0,     0,     0,  1288,   555,
     556,   557,   558,     0,     0,     0,     0,  1194,  1298,  1299,
    1300,   123,     0,     0,   125,   555,   556,   557,   558,     0,
       0,   736,  1304,  1269,  1306,     0,     0,  1307,  1308,  1309,
       0,     0,     0,     0,     0,   127,     0,     0,  1314,  1315,
       0,     0,     0,     0,  1320,  1321,     0,  1324,     0,     0,
    1327,   555,   556,   557,   558,  1332,     0,  1334,     0,  1294,
       0,     0,  1339,     0,  1341,     0,   546,   547,  1345,     0,
     548,   549,   550,   551,   552,   553,   554,  1348,     0,     0,
    1349,     0,     0,     0,     0,     0,     0,     0,  1350,     0,
       0,     0,  1351,  1352,  1353,  1354,  1355,     0,     0,     0,
       0,     0,     0,   140,  1357,     0,   141,   233,   234,     0,
       0,     0,   144,     0,     0,   546,   547,   235,     0,   548,
     549,   550,   551,   552,   553,   554,     0,     0,   236,   237,
       0,     0,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,  1377,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   239,     0,     0,   546,   547,   278,
     278,   548,   549,   550,   551,   552,   553,   554,     0,     0,
       0,     0,     0,     0,   186,   187,   188,     0,     0,   191,
     192,   193,     0,   195,     0,   197,   198,   199,   200,   201,
     202,     0,     0,   205,     0,     0,   208,     0,   209,   210,
       0,   212,     0,   214,     0,   216,     0,     0,   218,     0,
     219,     0,   221,     0,   555,   556,   557,   558,     0,     0,
     240,  1150,  1378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   546,   547,     0,     0,   548,   549,   550,   551,
     552,   553,   554,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1467,   555,   556,   557,   558,     0,     0,   294,
       0,  1383,   300,   302,   305,   311,   316,     0,   322,   324,
       0,   330,   333,   335,   339,   341,   344,   345,     0,   349,
     357,   364,     0,   368,     0,     0,     0,   375,   377,   379,
       0,     0,     0,   394,   546,   547,     0,     0,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,     0,
       0,     0,     0,  1403,     0,     0,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1532,     0,   546,   547,
       0,  1536,   548,   549,   550,   551,   552,   553,   554,     0,
       0,     0,     0,     0,     0,     0,  1545,     0,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,     0,
       0,   467,  1560,  1561,     0,     0,  1564,     0,  1567,  1569,
     555,   556,   557,   558,     0,  1575,     0,     0,  1410,     0,
       0,  1581,  1583,  1584,     0,  1586,     0,     0,  1589,  1590,
    1591,     0,  1593,     0,  1596,     0,  1598,     0,  1599,     0,
       0,     0,     0,     0,     0,     0,  1606,   546,   547,     0,
    1610,   548,   549,   550,   551,   552,   553,   554,     0,     0,
     529,  1619,     0,  1624,  -336,  -336,     0,     0,  -336,  -336,
    -336,  -336,  -336,  -336,  -336,     0,     0,  1632,     0,     0,
    1635,  1636,   555,   556,   557,   558,     0,  1641,     0,     0,
    1418,     0,     0,     0,  1642,     0,     0,     0,     0,     0,
       0,  1644,     0,  1645,   555,   556,   557,   558,     0,     0,
       0,     0,  1435,     0,     0,   571,     0,     0,     0,     0,
       0,  1656,     0,     0,     0,     0,   555,   556,   557,   558,
       0,   607,     0,     0,  1441,     0,   611,     0,     0,     0,
    1671,  1672,   617,     0,     0,  1674,   555,   556,   557,   558,
       0,     0,     0,     0,  1444,     0,     0,     0,  1682,     0,
       0,     0,     0,     0,     0,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,  1695,     0,     0,     0,
    1699,     0,     0,     0,     0,     0,   661,     0,  1707,  1708,
    1709,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   555,   556,   557,   558,     0,
     546,   547,     0,  1456,   548,   549,   550,   551,   552,   553,
     554,     0,  -336,  -336,  -336,  -336,   703,   704,   705,     0,
     708,   709,     0,   711,   712,   713,   546,   547,     0,  1744,
     548,   549,   550,   551,   552,   553,   554,     0,     0,     0,
     546,   547,     0,  1753,   548,   549,   550,   551,   552,   553,
     554,     0,     0,     0,  1763,     0,  1765,  1766,     0,  1768,
       0,     0,     0,     0,  1772,     0,     0,     0,  1775,  1776,
    1777,  1778,  1779,     0,  1781,  1782,  1783,     0,  1785,     0,
       0,     0,     0,  1790,  1791,     0,     0,     0,  1795,     0,
       0,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,     0,     0,  1807,     0,   798,     0,   801,     0,
       0,     0,  1813,   555,   556,   557,   558,     0,     0,     0,
       0,  1458,     0,     0,     0,     0,  1820,  1821,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1832,     0,     0,   546,   547,     0,  1836,   548,
     549,   550,   551,   552,   553,   554,     0,     0,   555,   556,
     557,   558,     0,     0,     0,     0,  1462,     0,     0,     0,
    1850,     0,  1852,   546,   547,     0,     0,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,     0,     0,
       0,     0,  1490,     0,     0,     0,     0,     0,   555,   556,
     557,   558,     0,     0,     0,     0,  1493,     0,     0,  1874,
       0,     0,  1877,     0,     0,     0,  1879,     0,  1880,  1881,
       0,  1882,     0,  1884,     0,     0,     0,     0,     0,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   935,     0,  1898,     0,   555,
     556,   557,   558,  1902,     0,     0,   945,  1495,     0,     0,
       0,     0,   949,     0,     0,     0,  1908,   953,     0,     0,
       0,   957,     0,   959,     0,     0,     0,     0,     0,   964,
       0,     0,   965,  1918,   967,     0,     0,     0,   971,     0,
       0,     0,     0,   121,   122,   123,   978,   124,   125,     0,
       0,  1927,     0,   555,   556,   557,   558,     0,   988,     0,
       0,  1665,     0,     0,     0,   994,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,  1004,     0,  1006,     0,
       0,   555,   556,   557,   558,     0,     0,     0,     0,  1676,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1025,
       0,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,     0,
       0,     0,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,     0,     0,     0,   144,   145,     0,     0,
       0,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,     0,     0,   153,   154,     0,
       0,     0,   155,     0,     0,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,  1148,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,     0,   222,
       0,     0,     0,     0,   223,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   546,   547,     0,     0,   548,   549,
     550,   551,   552,   553,   554,  1195,     0,   121,   122,   123,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,  1279,     0,     0,     0,   135,
     136,  1286,   137,     0,  1289,  1290,     0,   138,     0,     0,
     139,   140,     0,     0,   141,   142,   143,     0,     0,     0,
     144,   145,     0,     0,     0,   146,     0,   147,     0,   148,
       0,   149,     0,     0,     0,   150,   151,   152,     0,     0,
       0,   153,   154,     0,     0,     0,   155,     0,     0,   156,
     157,   158,   159,     0,   160,   161,   162,     0,     0,     0,
     163,   164,   555,   556,   557,   558,     0,   165,   864,     0,
    1342,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,   222,     0,     0,     0,     0,   223,   821,
     121,   122,   123,     0,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,     0,   134,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,     0,     0,     0,     0,
     138,     0,     0,   139,   140,     0,     0,   141,   142,   143,
       0,     0,     0,   144,   145,     0,     0,     0,   146,     0,
     147,     0,   148,     0,   149,     0,     0,     0,   150,   151,
     152,     0,     0,     0,   153,   154,     0,     0,     0,   155,
       0,     0,   156,   157,   158,   159,     0,   160,   161,   162,
       0,     0,     0,   163,   164,     0,     0,     0,     0,     0,
     165,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,     0,   209,
     210,   211,   212,   213,   214,   215,   216,     0,   217,   218,
       0,   219,   220,   221,     0,     0,   222,     0,     0,     0,
       0,   223,   831,   121,   122,   123,     0,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,  1612,   137,     0,
       0,   350,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,   351,   352,     0,   144,   145,     0,     0,
       0,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,   353,     0,   153,   154,     0,
       0,   354,   155,   355,   356,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,     0,   222,
       0,   121,   122,   123,   223,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   358,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,   134,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,     0,     0,   359,
       0,   138,     0,     0,   139,   140,     0,     0,   141,   142,
     143,   360,   361,     0,   144,   145,     0,     0,     0,   146,
       0,   147,     0,   148,     0,   149,     0,  1799,     0,   150,
     151,   152,   362,     0,     0,   153,   154,     0,     0,   363,
     155,     0,     0,   156,   157,   158,   159,     0,   160,   161,
     162,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,     0,   219,   220,   221,     0,     0,   222,     0,   121,
     122,   123,   223,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,   134,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,     0,     0,   306,     0,   138,
       0,     0,   139,   140,     0,     0,   141,   142,   143,   307,
     308,     0,   144,   145,     0,     0,     0,   146,     0,   147,
       0,   148,     0,   149,     0,     0,     0,   150,   151,   152,
       0,   309,     0,   153,   154,     0,     0,   310,   155,     0,
       0,   156,   157,   158,   159,     0,   160,   161,   162,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,     0,
     219,   220,   221,     0,     0,   222,     0,   121,   122,   123,
     223,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,     0,     0,   312,     0,   138,     0,     0,
     139,   140,     0,     0,   141,   142,   143,   313,   314,     0,
     144,   145,     0,     0,     0,   146,     0,   147,     0,   148,
       0,   149,     0,     0,     0,   150,   151,   152,     0,     0,
       0,   153,   154,     0,     0,   315,   155,     0,     0,   156,
     157,   158,   159,     0,   160,   161,   162,     0,     0,     0,
     163,   164,     0,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,   222,     0,   121,   122,   123,   223,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,   129,   130,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,     0,     0,   327,     0,   138,     0,     0,   139,   140,
       0,     0,   141,   142,   143,   328,     0,     0,   144,   145,
       0,     0,   329,   146,     0,   147,     0,   148,     0,   149,
       0,     0,     0,   150,   151,   152,     0,     0,     0,   153,
     154,     0,     0,     0,   155,     0,     0,   156,   157,   158,
     159,     0,   160,   161,   162,     0,     0,     0,   163,   164,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,     0,   219,   220,   221,     0,
       0,   222,     0,   121,   122,   123,   223,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     320,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,     0,
       0,     0,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,     0,     0,     0,   144,   145,     0,     0,
     321,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,     0,     0,   153,   154,     0,
       0,     0,   155,     0,     0,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,     0,   222,
       0,   121,   122,   123,   223,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,   134,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,     0,     0,     0,
       0,   138,     0,     0,   139,   140,     0,     0,   141,   142,
     143,   336,   337,     0,   144,   145,     0,     0,   338,   146,
       0,   147,     0,   148,     0,   149,     0,     0,     0,   150,
     151,   152,     0,     0,     0,   153,   154,     0,     0,     0,
     155,     0,     0,   156,   157,   158,   159,     0,   160,   161,
     162,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,     0,   219,   220,   221,     0,     0,   222,     0,   121,
     122,   123,   223,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,   134,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,     0,     0,     0,     0,   138,
       0,     0,   139,   140,     0,     0,   141,   142,   143,     0,
       0,     0,   144,   145,     0,     0,   298,   146,     0,   147,
       0,   148,     0,   149,     0,     0,     0,   150,   151,   152,
       0,     0,     0,   153,   154,     0,     0,     0,   155,     0,
       0,   156,   157,   158,   159,     0,   160,   161,   162,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,   210,
     211,   212,   213,   214,   215,   216,   299,   217,   218,     0,
     219,   220,   221,     0,     0,   222,     0,   121,   122,   123,
     223,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,     0,     0,   303,     0,   138,     0,     0,
     139,   140,     0,     0,   141,   142,   143,     0,     0,     0,
     144,   145,     0,     0,   304,   146,     0,   147,     0,   148,
       0,   149,     0,     0,     0,   150,   151,   152,     0,     0,
       0,   153,   154,     0,     0,     0,   155,     0,     0,   156,
     157,   158,   159,     0,   160,   161,   162,     0,     0,     0,
     163,   164,     0,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,   222,     0,   121,   122,   123,   223,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,     0,     0,     0,     0,   138,     0,     0,   139,   140,
       0,     0,   141,   142,   143,     0,   331,     0,   144,   145,
       0,     0,     0,   146,     0,   147,     0,   148,     0,   149,
       0,     0,   332,   150,   151,   152,     0,     0,     0,   153,
     154,     0,     0,     0,   155,     0,     0,   156,   157,   158,
     159,     0,   160,   161,   162,     0,     0,     0,   163,   164,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,     0,   219,   220,   221,     0,
       0,   222,     0,   121,   122,   123,   223,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,     0,
       0,     0,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,     0,   342,     0,   144,   145,     0,     0,
       0,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,     0,     0,   153,   154,     0,
       0,     0,   155,     0,     0,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,   343,   222,
       0,   121,   122,   123,   223,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,   134,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,     0,     0,     0,
       0,   138,     0,     0,   139,   140,     0,     0,   141,   142,
     143,     0,     0,     0,   144,   145,     0,     0,     0,   146,
       0,   147,     0,   148,     0,   149,     0,     0,     0,   150,
     151,   152,     0,     0,     0,   153,   154,     0,     0,     0,
     155,     0,     0,   156,   157,   158,   159,     0,   160,   161,
     162,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,     0,   219,   220,   221,     0,     0,   222,     0,   121,
     122,   123,   223,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,   134,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,     0,     0,     0,     0,   138,
       0,     0,   139,   140,     0,     0,   141,   142,   143,     0,
       0,     0,   144,   145,     0,     0,     0,   146,     0,   147,
       0,   148,     0,   149,     0,     0,     0,   150,   151,   152,
       0,     0,     0,   153,   154,     0,     0,     0,   155,     0,
       0,   156,   157,   158,   159,     0,   160,   161,   162,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,   210,
     211,   212,   213,   214,   215,   216,   293,   217,   218,     0,
     219,   220,   221,     0,     0,   222,     0,   121,   122,   123,
     223,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,     0,     0,     0,     0,   138,     0,     0,
     139,   140,     0,     0,   141,   142,   143,     0,     0,     0,
     144,   145,     0,     0,   301,   146,     0,   147,     0,   148,
       0,   149,     0,     0,     0,   150,   151,   152,     0,     0,
       0,   153,   154,     0,     0,     0,   155,     0,     0,   156,
     157,   158,   159,     0,   160,   161,   162,     0,     0,     0,
     163,   164,     0,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,   222,     0,   121,   122,   123,   223,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,     0,     0,     0,     0,   138,     0,     0,   139,   140,
       0,     0,   141,   142,   143,     0,     0,     0,   144,   145,
       0,     0,   323,   146,     0,   147,     0,   148,     0,   149,
       0,     0,     0,   150,   151,   152,     0,     0,     0,   153,
     154,     0,     0,     0,   155,     0,     0,   156,   157,   158,
     159,     0,   160,   161,   162,     0,     0,     0,   163,   164,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,     0,   219,   220,   221,     0,
       0,   222,     0,   121,   122,   123,   223,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,     0,
       0,     0,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,     0,     0,     0,   144,   145,     0,     0,
     334,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,     0,     0,   153,   154,     0,
       0,     0,   155,     0,     0,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,     0,   222,
       0,   121,   122,   123,   223,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   340,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,   134,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,     0,     0,     0,
       0,   138,     0,     0,   139,   140,     0,     0,   141,   142,
     143,     0,     0,     0,   144,   145,     0,     0,     0,   146,
       0,   147,     0,   148,     0,   149,     0,     0,     0,   150,
     151,   152,     0,     0,     0,   153,   154,     0,     0,     0,
     155,     0,     0,   156,   157,   158,   159,     0,   160,   161,
     162,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,     0,   219,   220,   221,     0,     0,   222,     0,   121,
     122,   123,   223,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,   134,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,     0,     0,     0,     0,   138,
       0,     0,   139,   140,     0,     0,   141,   142,   143,     0,
       0,     0,   144,   145,     0,     0,   348,   146,     0,   147,
       0,   148,     0,   149,     0,     0,     0,   150,   151,   152,
       0,     0,     0,   153,   154,     0,     0,     0,   155,     0,
       0,   156,   157,   158,   159,     0,   160,   161,   162,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,     0,
     219,   220,   221,     0,     0,   222,     0,   121,   122,   123,
     223,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,     0,     0,     0,     0,   138,     0,     0,
     139,   140,     0,     0,   141,   142,   143,     0,     0,     0,
     144,   145,     0,     0,   367,   146,     0,   147,     0,   148,
       0,   149,     0,     0,     0,   150,   151,   152,     0,     0,
       0,   153,   154,     0,     0,     0,   155,     0,     0,   156,
     157,   158,   159,     0,   160,   161,   162,     0,     0,     0,
     163,   164,     0,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,   222,     0,   121,   122,   123,   223,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,     0,     0,     0,     0,   138,     0,     0,   139,   140,
       0,     0,   141,   142,   143,     0,     0,     0,   144,   145,
       0,     0,   374,   146,     0,   147,     0,   148,     0,   149,
       0,     0,     0,   150,   151,   152,     0,     0,     0,   153,
     154,     0,     0,     0,   155,     0,     0,   156,   157,   158,
     159,     0,   160,   161,   162,     0,     0,     0,   163,   164,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,     0,   219,   220,   221,     0,
       0,   222,     0,   121,   122,   123,   223,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,     0,
       0,     0,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,     0,     0,     0,   144,   145,     0,     0,
     376,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,     0,     0,   153,   154,     0,
       0,     0,   155,     0,     0,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,     0,   222,
       0,   121,   122,   123,   223,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,   134,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,     0,     0,     0,
       0,   138,     0,     0,   139,   140,     0,     0,   141,   142,
     143,     0,     0,     0,   144,   145,     0,     0,   378,   146,
       0,   147,     0,   148,     0,   149,     0,     0,     0,   150,
     151,   152,     0,     0,     0,   153,   154,     0,     0,     0,
     155,     0,     0,   156,   157,   158,   159,     0,   160,   161,
     162,     0,     0,     0,   163,   164,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,     0,
     209,   210,   211,   212,   213,   214,   215,   216,     0,   217,
     218,     0,   219,   220,   221,     0,     0,   222,     0,   121,
     122,   123,   223,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,   134,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,     0,     0,     0,     0,   138,
       0,     0,   139,   140,     0,     0,   141,   142,   143,     0,
       0,     0,   144,   145,     0,     0,   393,   146,     0,   147,
       0,   148,     0,   149,     0,     0,     0,   150,   151,   152,
       0,     0,     0,   153,   154,     0,     0,     0,   155,     0,
       0,   156,   157,   158,   159,     0,   160,   161,   162,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,   209,   210,
     211,   212,   213,   214,   215,   216,     0,   217,   218,     0,
     219,   220,   221,     0,     0,   222,     0,   121,   122,   123,
     223,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,   134,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,     0,     0,     0,     0,   138,     0,     0,
     139,   140,     0,     0,   141,   142,   143,     0,     0,     0,
     144,   145,     0,     0,     0,   146,     0,   147,     0,   148,
       0,   149,     0,     0,     0,   150,   151,   152,     0,     0,
       0,   153,   154,     0,     0,     0,   155,     0,     0,   156,
     157,   158,   159,     0,   160,   161,   162,     0,     0,     0,
     163,   164,     0,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,     0,   209,   210,   211,   212,
     213,   214,   215,   216,     0,   217,   218,     0,   219,   220,
     221,     0,     0,   222,     0,   121,   122,   123,   223,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,     0,     0,     0,     0,   138,     0,     0,   139,   140,
       0,     0,   141,   142,   143,     0,     0,     0,   144,   145,
       0,     0,     0,   146,     0,   147,     0,   148,     0,   149,
       0,     0,     0,   150,   151,   152,     0,     0,     0,   153,
     154,     0,     0,     0,   155,     0,     0,   156,   157,   158,
     159,     0,   160,   161,   162,     0,     0,     0,   163,   164,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,     0,   209,   210,   211,   212,   213,   214,
     215,   216,     0,   217,   218,     0,   219,   220,   221,     0,
       0,   222,     0,   121,   122,   123,   698,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   134,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,     0,
       0,     0,     0,   138,     0,     0,   139,   140,     0,     0,
     141,   142,   143,     0,     0,     0,   144,   145,     0,     0,
       0,   146,     0,   147,     0,   148,     0,   149,     0,     0,
       0,   150,   151,   152,     0,     0,   123,   153,   154,   125,
       0,     0,   155,     0,     0,   156,   157,   158,   159,     0,
     160,   161,   162,     0,     0,     0,   163,   164,     0,     0,
     127,     0,     0,   165,     0,     0,     0,     0,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,     0,   209,   210,   211,   212,   213,   214,   215,   216,
       0,   217,   218,     0,   219,   220,   221,     0,   140,   222,
       0,   141,   233,   234,   700,     0,     0,   144,     0,     0,
       0,   296,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,   237,     0,     0,   123,   153,   154,
     125,     0,     0,     0,     0,   546,   547,     0,   158,   548,
     549,   550,   551,   552,   553,   554,     0,     0,   238,     0,
       0,   127,     0,     0,   165,     0,     0,     0,     0,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
     187,   188,     0,     0,   191,   192,   193,     0,   195,     0,
     197,   198,   199,   200,   201,   202,     0,     0,   205,     0,
       0,   208,     0,   209,   210,     0,   212,     0,   214,     0,
     216,     0,     0,   218,     0,   219,     0,   221,     0,   140,
       0,     0,   141,   233,   234,   240,     0,     0,   144,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   237,     0,     0,   123,   153,
     154,   125,     0,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,     0,     0,   317,     0,     0,   238,
       0,     0,   127,     0,     0,   165,     0,     0,     0,     0,
     239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   555,   556,   557,   558,     0,     0,  1033,
     186,   187,   188,   365,     0,   191,   192,   193,     0,   195,
       0,   197,   198,   199,   200,   201,   202,     0,     0,   205,
       0,     0,   208,     0,   209,   210,     0,   212,     0,   214,
       0,   216,     0,     0,   218,     0,   219,     0,   221,     0,
     140,     0,     0,   141,   233,   234,   240,     0,     0,   144,
       0,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   236,   237,     0,     0,   123,
     153,   154,   125,     0,     0,     0,     0,   546,   547,     0,
     158,   548,   549,   550,   551,   552,   553,   554,     0,     0,
     238,     0,     0,   127,     0,     0,   165,     0,     0,     0,
       0,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   186,   187,   188,     0,     0,   191,   192,   193,     0,
     195,     0,   197,   198,   199,   200,   201,   202,     0,     0,
     205,     0,     0,   208,     0,   209,   210,     0,   212,     0,
     214,     0,   216,     0,     0,   218,     0,   219,     0,   221,
       0,   140,     0,     0,   141,   233,   234,   240,     0,     0,
     144,     0,     0,     0,   370,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   237,     0,     0,
     123,   153,   154,   125,     0,     0,     0,     0,   546,   547,
       0,   158,   548,   549,   550,   551,   552,   553,   554,     0,
       0,   238,     0,     0,   127,     0,     0,   165,     0,     0,
       0,     0,   239,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   555,   556,   557,   558,     0,
       0,  1045,   186,   187,   188,     0,     0,   191,   192,   193,
       0,   195,     0,   197,   198,   199,   200,   201,   202,     0,
       0,   205,     0,     0,   208,     0,   209,   210,     0,   212,
       0,   214,     0,   216,     0,     0,   218,     0,   219,     0,
     221,     0,   140,     0,     0,   141,   233,   234,   240,     0,
       0,   144,     0,     0,     0,   372,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,   237,     0,
       0,   123,   153,   154,   125,     0,     0,     0,     0,   546,
     547,     0,   158,   548,   549,   550,   551,   552,   553,   554,
       0,     0,   238,     0,     0,   127,     0,     0,   165,     0,
       0,     0,     0,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   555,   556,   557,   558,
       0,     0,  1093,   186,   187,   188,     0,     0,   191,   192,
     193,     0,   195,     0,   197,   198,   199,   200,   201,   202,
       0,     0,   205,     0,     0,   208,     0,   209,   210,     0,
     212,     0,   214,     0,   216,     0,     0,   218,     0,   219,
       0,   221,     0,   140,     0,     0,   141,   233,   234,   240,
       0,     0,   144,     0,     0,     0,     0,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,   237,
       0,     0,   123,   153,   154,   125,     0,     0,     0,     0,
     546,   547,     0,   158,   548,   549,   550,   551,   552,   553,
     554,     0,     0,   238,     0,     0,   127,     0,     0,   165,
       0,     0,     0,     0,   239,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   555,   556,   557,
     558,     0,     0,  1094,   186,   187,   188,     0,     0,   191,
     192,   193,     0,   195,     0,   197,   198,   199,   200,   201,
     202,     0,     0,   205,     0,     0,   208,     0,   209,   210,
       0,   212,     0,   214,     0,   216,     0,     0,   218,     0,
     219,     0,   221,     0,   140,     0,     0,   141,   233,   234,
     240,     0,     0,   144,     0,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     237,     0,     0,   123,   153,   154,   125,     0,     0,     0,
       0,   546,   547,     0,   158,   548,   549,   550,   551,   552,
     553,   554,     0,     0,   238,     0,     0,   127,     0,     0,
     165,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   555,   556,
     557,   558,     0,     0,  1095,   186,   187,   188,     0,     0,
     191,   192,   193,     0,   195,     0,   197,   198,   199,   200,
     201,   202,     0,     0,   205,     0,     0,   208,     0,   209,
     210,     0,   212,     0,   214,     0,   216,     0,     0,   218,
       0,   219,     0,   221,     0,   140,     0,     0,   141,   233,
     234,   860,     0,     0,   144,     0,     0,     0,     0,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,   237,     0,     0,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,   239,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   555,
     556,   557,   558,     0,     0,  1096,   186,   187,   188,     0,
       0,   191,   192,   193,     0,   195,     0,   197,   198,   199,
     200,   201,   202,     0,     0,   205,     0,     0,   208,     0,
     209,   210,     0,   212,     0,   214,     0,   216,     0,     0,
     218,     0,   219,     0,   221,     1,     2,     3,     0,     0,
       4,     0,  1172,     0,     5,     0,     6,     0,     7,     8,
       9,    10,    11,  -455,     0,    12,    13,    14,    15,    16,
      17,    18,    19,     0,    20,    21,    22,     0,     0,     0,
       0,    23,     0,     0,    24,     0,     0,     0,     0,     0,
      25,    26,    27,    28,    29,    30,    31,     0,     0,    32,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,     0,     0,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,    39,    40,    41,     0,     0,    42,    43,
       0,     0,    44,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,    55,    56,
      57,     0,    58,     0,    59,    60,    61,    62,    63,    64,
      65,     0,    66,    67,    68,     0,     0,    69,    70,    71,
       0,    72,     0,    73,     0,     0,    74,    75,     0,    76,
       0,     0,     0,    77,     0,     0,    78,     0,    79,    80,
       0,     0,     0,     0,     0,    81,   546,   547,    82,    83,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,     0,    84,
      85,    86,   546,   547,     0,    87,   548,   549,   550,   551,
     552,   553,   554,     0,     0,     0,     0,     0,     0,    88,
     546,   547,    89,     0,   548,   549,   550,   551,   552,   553,
     554,     0,     0,     0,     0,    90,     0,     0,   555,   556,
     557,   558,     0,   546,   547,     0,  1679,   548,   549,   550,
     551,   552,   553,   554,   546,   547,     0,     0,   548,   549,
     550,   551,   552,   553,   554,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,     0,     0,     0,   555,   556,   557,   558,     0,     0,
       0,     0,  1681,     0,     0,   555,   556,   557,   558,     0,
       0,     0,     0,  1686,     0,     0,     0,     0,     0,     0,
     555,   556,   557,   558,     0,   546,   547,     0,  1690,   548,
     549,   550,   551,   552,   553,   554,     0,     0,   555,   556,
     557,   558,     0,   546,   547,     0,  1691,   548,   549,   550,
     551,   552,   553,   554,     0,     0,     0,     0,     0,     0,
       0,   555,   556,   557,   558,     0,     0,     0,     0,  1692,
       0,     0,   555,   556,   557,   558,     0,     0,     0,     0,
    1694,     0,     0,   555,   556,   557,   558,     0,     0,     0,
       0,  1696,     0,     0,   555,   556,   557,   558,     0,     0,
       0,     0,  1697,     0,     0,   555,   556,   557,   558,     0,
       0,     0,     0,  1698,     0,     0,   555,   556,   557,   558,
       0,     0,     0,     0,  1700,     0,     0,   555,   556,   557,
     558,     0,     0,     0,     0,  1703,     0,     0,   555,   556,
     557,   558,     0,   546,   547,     0,  1705,   548,   549,   550,
     551,   552,   553,   554,   546,   547,     0,     0,   548,   549,
     550,   551,   552,   553,   554,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,     0,     0,     0,     0,
       0,     0,     0,   555,   556,   557,   558,     0,   546,   547,
       0,  1706,   548,   549,   550,   551,   552,   553,   554,     0,
       0,   555,   556,   557,   558,     0,   546,   547,     0,  1710,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,   546,   547,     0,     0,   548,   549,   550,   551,
     552,   553,   554,   546,   547,     0,     0,   548,   549,   550,
     551,   552,   553,   554,     0,     0,     0,     0,     0,     0,
       0,   555,   556,   557,   558,     0,     0,     0,     0,  1713,
       0,     0,   555,   556,   557,   558,     0,     0,     0,     0,
    1734,     0,     0,   555,   556,   557,   558,     0,   546,   547,
       0,  1748,   548,   549,   550,   551,   552,   553,   554,     0,
       0,     0,     0,     0,     0,     0,   555,   556,   557,   558,
       0,   546,   547,     0,  1758,   548,   549,   550,   551,   552,
     553,   554,     0,     0,   555,   556,   557,   558,     0,     0,
       0,     0,  1759,     0,     0,   555,   556,   557,   558,     0,
       0,     0,     0,  1761,     0,     0,   555,   556,   557,   558,
       0,     0,     0,     0,  1769,     0,     0,   555,   556,   557,
     558,     0,     0,     0,     0,  1780,     0,     0,   555,   556,
     557,   558,     0,     0,     0,     0,  1784,     0,     0,   555,
     556,   557,   558,     0,     0,     0,     0,  1792,     0,     0,
     555,   556,   557,   558,     0,     0,     0,     0,  1793,     0,
       0,   555,   556,   557,   558,     0,   546,   547,     0,  1794,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,     0,
       0,     0,     0,     0,     0,     0,   555,   556,   557,   558,
       0,   546,   547,     0,  1831,   548,   549,   550,   551,   552,
     553,   554,     0,     0,     0,     0,     0,     0,     0,   555,
     556,   557,   558,     0,   546,   547,     0,  1834,   548,   549,
     550,   551,   552,   553,   554,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,     0,     0,   555,   556,   557,   558,     0,     0,
       0,     0,  1838,     0,     0,   555,   556,   557,   558,     0,
       0,     0,     0,  1840,     0,     0,   555,   556,   557,   558,
       0,   546,   547,     0,  1841,   548,   549,   550,   551,   552,
     553,   554,     0,     0,     0,     0,     0,     0,     0,   555,
     556,   557,   558,     0,   546,   547,     0,  1843,   548,   549,
     550,   551,   552,   553,   554,     0,     0,     0,     0,     0,
       0,     0,   555,   556,   557,   558,     0,     0,     0,     0,
    1844,     0,     0,   555,   556,   557,   558,     0,     0,     0,
       0,  1845,     0,     0,   555,   556,   557,   558,     0,     0,
       0,     0,  1853,     0,     0,   555,   556,   557,   558,     0,
       0,     0,     0,  1869,     0,     0,   555,   556,   557,   558,
       0,     0,     0,     0,  1875,     0,     0,   555,   556,   557,
     558,     0,     0,     0,     0,  1878,     0,     0,   555,   556,
     557,   558,     0,     0,     0,     0,  1887,     0,     0,   555,
     556,   557,   558,     0,   546,   547,     0,  1888,   548,   549,
     550,   551,   552,   553,   554,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,     0,     0,   555,
     556,   557,   558,     0,   546,   547,     0,  1905,   548,   549,
     550,   551,   552,   553,   554,     0,     0,     0,     0,     0,
       0,     0,   555,   556,   557,   558,     0,   546,   547,     0,
    1917,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,   546,   547,     0,     0,   548,   549,   550,   551,
     552,   553,   554,   546,   547,     0,     0,   548,   549,   550,
     551,   552,   553,   554,   546,   547,     0,     0,   548,   549,
     550,   551,   552,   553,   554,     0,     0,     0,     0,     0,
       0,     0,   555,   556,   557,   558,     0,     0,     0,     0,
    1919,     0,     0,   555,   556,   557,   558,     0,     0,     0,
       0,  1925,     0,     0,   555,   556,   557,   558,     0,   546,
     547,     0,  1930,   548,   549,   550,   551,   552,   553,   554,
       0,     0,   555,   556,   557,   558,   546,   547,  1097,     0,
     548,   549,   550,   551,   552,   553,   554,     0,     0,     0,
       0,     0,     0,     0,     0,   555,   556,   557,   558,     0,
       0,  1100,     0,     0,     0,     0,   555,   556,   557,   558,
       0,     0,  1103,     0,     0,     0,     0,   555,   556,   557,
     558,     0,     0,  1104,     0,     0,     0,     0,   555,   556,
     557,   558,     0,     0,  1106,     0,     0,     0,     0,   555,
     556,   557,   558,     0,     0,  1107,     0,     0,     0,     0,
     555,   556,   557,   558,     0,     0,  1108,     0,     0,     0,
       0,   555,   556,   557,   558,     0,     0,  1109,     0,     0,
       0,     0,   555,   556,   557,   558,   546,   547,  1111,     0,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,     0,
       0,     0,     0,     0,     0,     0,     0,   555,   556,   557,
     558,   546,   547,  1121,     0,   548,   549,   550,   551,   552,
     553,   554,     0,     0,   555,   556,   557,   558,   546,   547,
    1122,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,   546,   547,     0,     0,   548,   549,   550,   551,
     552,   553,   554,   546,   547,     0,     0,   548,   549,   550,
     551,   552,   553,   554,   546,   547,     0,     0,   548,   549,
     550,   551,   552,   553,   554,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,     0,     0,     0,     0,
       0,     0,     0,     0,   555,   556,   557,   558,     0,     0,
    1124,     0,     0,     0,     0,   555,   556,   557,   558,     0,
       0,  1127,     0,     0,     0,     0,   555,   556,   557,   558,
     546,   547,  1171,     0,   548,   549,   550,   551,   552,   553,
     554,     0,     0,     0,     0,     0,     0,     0,     0,   555,
     556,   557,   558,   546,   547,  1276,     0,   548,   549,   550,
     551,   552,   553,   554,     0,     0,   555,   556,   557,   558,
       0,     0,  1277,     0,     0,     0,     0,   555,   556,   557,
     558,     0,     0,  1386,     0,     0,     0,     0,   555,   556,
     557,   558,     0,     0,  1470,     0,     0,     0,     0,   555,
     556,   557,   558,     0,     0,  1471,     0,     0,     0,     0,
     555,   556,   557,   558,     0,     0,  1477,     0,     0,     0,
       0,   555,   556,   557,   558,     0,     0,  1478,     0,     0,
       0,     0,   555,   556,   557,   558,     0,     0,  1479,     0,
       0,     0,     0,   555,   556,   557,   558,   546,   547,  1480,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
       0,     0,     0,     0,     0,     0,     0,     0,   555,   556,
     557,   558,   546,   547,  1484,     0,   548,   549,   550,   551,
     552,   553,   554,     0,     0,     0,     0,     0,     0,     0,
       0,   555,   556,   557,   558,   546,   547,  1485,     0,   548,
     549,   550,   551,   552,   553,   554,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,   546,   547,     0,
       0,   548,   549,   550,   551,   552,   553,   554,   546,   547,
       0,     0,   548,   549,   550,   551,   552,   553,   554,   546,
     547,     0,     0,   548,   549,   550,   551,   552,   553,   554,
     546,   547,     0,     0,   548,   549,   550,   551,   552,   553,
     554,   546,   547,     0,     0,   548,   549,   550,   551,   552,
     553,   554,   546,   547,     0,     0,   548,   549,   550,   551,
     552,   553,   554,     0,     0,   555,   556,   557,   558,     0,
       0,  1500,     0,     0,     0,     0,   555,   556,   557,   558,
       0,     0,  1501,     0,     0,     0,     0,   555,   556,   557,
     558,   546,   547,  1502,     0,   548,   549,   550,   551,   552,
     553,   554,     0,     0,     0,     0,     0,     0,     0,     0,
     555,   556,   557,   558,   546,   547,  1503,     0,   548,   549,
     550,   551,   552,   553,   554,     0,     0,     0,     0,     0,
       0,     0,     0,   555,   556,   557,   558,     0,     0,  1504,
       0,     0,     0,     0,   555,   556,   557,   558,     0,     0,
    1507,     0,     0,     0,     0,   555,   556,   557,   558,     0,
       0,  1508,     0,     0,     0,     0,   555,   556,   557,   558,
       0,     0,  1511,     0,     0,     0,     0,   555,   556,   557,
     558,     0,     0,  1531,     0,     0,     0,     0,   555,   556,
     557,   558,     0,     0,  1655,     0,     0,     0,     0,   555,
     556,   557,   558,     0,     0,  1659,     0,     0,     0,     0,
     555,   556,   557,   558,   546,   547,  1721,     0,   548,   549,
     550,   551,   552,   553,   554,   546,   547,     0,     0,   548,
     549,   550,   551,   552,   553,   554,   546,   547,     0,     0,
     548,   549,   550,   551,   552,   553,   554,     0,     0,   555,
     556,   557,   558,   546,   547,  1735,     0,   548,   549,   550,
     551,   552,   553,   554,     0,     0,     0,     0,     0,     0,
       0,     0,   555,   556,   557,   558,     0,     0,  1737,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   555,   556,   557,   558,     0,     0,  1738,     0,
       0,     0,     0,   555,   556,   557,   558,     0,     0,  1861,
       0,     0,     0,     0,   555,   556,   557,   558,     0,     0,
    1868,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   555,   556,   557,   558,     0,     0,  1914
};

static const yytype_int16 yycheck[] =
{
      15,   115,   432,    18,     9,    10,    34,    10,    70,     4,
    1177,  1178,     7,    28,     4,    56,    70,     7,    60,    10,
      35,    36,    10,    10,     4,     5,   112,    42,    71,   224,
      35,     3,    47,    48,    10,     7,     8,   104,    60,    54,
       3,   112,    57,    12,     7,     8,    56,     9,   112,    59,
      60,    82,    75,    76,    69,    16,    14,    72,    73,   112,
       0,    70,    71,    78,    91,   112,    81,    82,   400,   401,
     220,     0,     3,    42,    89,   225,     7,   227,    37,    38,
      23,    42,    26,   110,    42,    61,    62,   110,   110,    65,
      66,    67,    68,    69,    70,    71,   111,    48,   224,    42,
     112,    41,    57,    65,    66,    67,    68,    69,    70,   151,
      61,    62,    41,   144,    65,    66,    67,    68,    69,    70,
      71,   220,     4,   138,   139,     7,   225,   213,   227,   144,
      89,    39,   218,   247,    42,    65,    66,    67,    68,    69,
      70,    65,    66,    67,    68,    69,    70,   218,   213,   213,
      50,   218,   294,   218,   218,    65,    66,    67,    68,    69,
      70,    94,   224,   305,   210,   129,   213,   213,   210,   311,
     224,   218,   218,   224,   316,   115,   218,     0,   221,   222,
     322,   225,   324,   227,     4,     5,   115,   228,   330,   242,
     243,   333,   524,   335,   526,    33,    34,   339,   178,   179,
     180,   213,   220,   345,   224,   220,   218,   225,   223,   227,
     219,   220,   221,   222,   220,   357,    71,   220,   228,   225,
     220,   227,   364,   220,   227,   240,   224,   227,   225,   224,
     227,   246,   213,   375,   224,   377,   227,   218,   253,   227,
     227,   269,   270,   219,   220,   221,   222,   219,   220,   220,
     220,   227,   394,   395,   225,   225,   219,   220,   220,   224,
      65,    66,    67,    68,    69,    70,     4,     5,   219,   220,
     221,   222,   220,   220,   289,   290,    42,   292,   225,   227,
     227,   296,   220,   298,     4,     5,   301,   225,   303,   304,
     220,   306,   307,   308,   309,   310,   220,   312,   313,   314,
     315,   225,   220,   227,   319,   320,   321,   247,   323,   227,
     220,   326,   327,   328,   329,   225,   331,   332,   247,   334,
     224,   336,   337,   338,   220,   340,   110,   342,   343,   225,
      70,   346,   347,   348,    70,   350,   351,   352,   353,   354,
     355,   356,   220,   358,   359,   360,   361,   362,   363,   227,
     365,   220,   367,   220,   369,   370,   225,   372,   227,   374,
     227,   376,    22,   378,   219,   220,   221,   222,   421,   422,
    1537,   386,   220,  1540,   389,   224,   220,   225,   393,   227,
      44,   225,   397,   398,   220,   220,   220,   529,   403,   225,
     225,   406,   227,   227,   220,     4,   411,    61,    62,   225,
     415,    65,    66,    67,    68,    69,    70,    71,   224,   220,
     220,   220,   224,   220,   429,   220,   227,   227,   227,   434,
     227,   224,   227,   438,   439,   440,   441,   442,   443,   444,
     224,   446,   447,   448,   449,   450,   224,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   224,   464,
     465,   466,   224,   468,   469,   470,   471,   472,   212,   474,
     475,   575,   477,   478,   220,   607,   225,   224,   227,   225,
     429,   430,    65,    66,    67,    68,    69,    70,    69,    70,
      71,   496,   497,   498,   499,   500,    68,    69,    70,    71,
     225,   506,   227,   508,   224,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   220,   220,   523,   225,
     525,   227,   527,   227,   227,   530,   531,   224,   533,   661,
     226,   227,   537,   538,   539,   540,   541,   542,   543,    11,
     489,    65,    66,    67,    68,    69,    70,   590,   591,   220,
     225,   224,   227,   213,   597,   598,   227,    65,    66,    67,
      68,    69,    70,   218,   220,   219,   220,   221,   222,   225,
     519,   703,    10,   578,   220,   220,   708,   213,   220,   220,
     712,   227,   227,   220,   602,   227,   227,   220,   225,    61,
      62,   218,   225,    65,    66,    67,    68,    69,    70,    71,
     605,   220,   220,   217,   220,   220,   225,   220,   613,   227,
     615,   227,   227,   618,   227,   620,     4,     5,     4,     5,
     220,     7,     8,    61,    62,   225,   218,    65,    66,    67,
      68,    69,    70,    71,   218,   220,   641,   220,   219,   220,
     221,   222,   227,    29,   227,   575,   220,   219,   220,   221,
     222,   220,   657,   227,   220,   220,   575,   662,   227,   220,
     225,   227,   667,   218,   225,  1822,   798,    65,    66,    67,
      68,    69,    70,   220,     4,     5,   220,     4,     5,   684,
     227,   686,    44,   227,   689,    65,    66,    67,    68,    69,
      70,    71,   697,   698,   139,   700,   220,   702,   218,    61,
      62,   225,   218,    65,    66,    67,    68,    69,    70,    71,
     715,    97,   220,   220,   100,   101,   102,   218,   225,   227,
     106,  1141,   727,   728,  1144,   111,   220,   220,   220,    80,
      81,   220,   220,   227,   227,   227,   122,   123,   227,   227,
     143,   127,   128,     4,     5,   220,   220,   219,   220,   221,
     222,   137,   227,   227,   224,   760,   761,   762,   224,   220,
     224,   147,   220,   220,   220,   770,   227,   153,   220,   227,
     227,   227,   158,   225,   224,    65,    66,    67,    68,    69,
      70,   219,   220,   221,   222,   220,   791,   224,   220,   220,
     225,   224,   178,   179,   180,   227,   227,   183,   184,   185,
     224,   187,   220,   189,   190,   191,   192,   193,   194,   227,
     220,   197,   224,   220,   200,   225,   202,   203,   220,   205,
     227,   207,   220,   209,   220,   227,   212,   220,   214,   227,
     216,   227,    18,    19,   227,   224,   220,   224,   224,   219,
     220,   221,   222,   227,   887,   888,   220,   890,   891,   220,
       4,     5,   224,   227,   220,   860,   227,   219,   220,   221,
     222,   227,   220,   220,   220,   220,   220,   220,   209,   227,
     227,   227,   227,   227,   227,    61,    62,   872,   873,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    37,    38,
      65,    66,    67,    68,    69,    70,    71,   220,   220,     4,
       5,   906,   225,   225,   909,    65,    66,    67,    68,    69,
      70,   224,    59,    60,   224,   224,   220,    65,    66,    67,
      68,    69,    70,   227,   220,   224,   220,   220,   933,   934,
     220,   227,   937,   227,   227,   940,   220,   227,   224,   944,
     220,   946,   947,   227,   209,   950,   224,   227,   220,   954,
     955,   956,   220,   958,   224,   227,   961,   962,   963,   227,
     224,   966,   224,   968,   220,   220,   220,   972,   213,   974,
     975,   227,   227,   227,   979,   980,   220,   224,   983,   984,
     220,   986,   987,   227,   989,   225,  1029,   992,   220,   224,
     220,   224,   997,   220,   999,   227,  1001,   227,  1003,   224,
     227,    65,    66,    67,    68,    69,    70,   224,  1013,   220,
    1015,  1016,  1017,   213,  1019,   224,   227,   224,  1023,   224,
      61,    62,  1027,  1028,    65,    66,    67,    68,    69,    70,
      71,   224,   220,   219,   220,   221,   222,   220,  1043,   227,
     224,   213,   225,   224,   219,   220,   221,   222,  1053,  1054,
     225,   220,   227,   224,   220,   220,   220,  1062,   227,   225,
     220,  1165,   227,   227,  1069,  1070,  1071,   227,  1073,  1074,
    1075,  1076,   220,  1078,   220,  1080,  1081,   220,  1083,   227,
    1085,   227,   225,  1088,  1089,   220,  1091,  1092,   224,    61,
      62,   224,   227,    65,    66,    67,    68,    69,    70,    71,
     220,    65,    66,    67,    68,    69,    70,   227,   220,  1039,
     224,    42,   220,   225,   224,  1120,    47,    61,    62,   227,
    1039,    65,    66,    67,    68,    69,    70,    71,  1133,  1134,
     220,   224,   220,   220,   213,  1140,   220,   227,  1143,   227,
     227,  1146,  1147,  1186,  1187,    61,    62,   224,   224,    65,
      66,    67,    68,    69,    70,    71,   220,   220,   224,   220,
     213,   220,   220,   227,   227,  1170,   227,  1172,   227,   227,
     220,    65,    66,    67,    68,    69,    70,   227,   219,   220,
     221,   222,   224,  1188,   225,   220,   227,   224,  1193,  1194,
     224,   220,   227,  1198,  1199,   213,   220,  1202,   227,   220,
    1205,  1305,  1207,   227,   224,  1210,   227,   220,   224,   220,
     220,  1216,   220,  1345,   227,  1220,   227,   227,   220,   227,
    1225,   224,   220,  1228,   220,   227,   220,  1232,  1233,   227,
    1235,   227,   220,   227,  1239,  1165,  1241,   224,   220,   227,
    1245,   224,  1191,  1192,  1249,   227,  1165,   219,   220,   221,
     222,  1256,   220,   225,   220,   227,   220,  1262,   220,   227,
    1265,   227,  1267,   227,  1269,   227,  1271,   220,  1273,   224,
    1275,   213,   220,  1278,   227,   219,   220,   221,   222,   227,
      56,   225,   220,   227,   220,   220,   220,  1292,  1293,   227,
     220,   227,   227,   227,   220,   220,   224,   227,   227,     5,
     220,   227,   227,   219,   220,   221,   222,   227,   227,   225,
     224,   227,  1317,  1318,    61,    62,   224,  1322,    65,    66,
      67,    68,    69,    70,    71,   224,   220,   224,   224,   224,
      41,   224,  1337,   227,    65,    66,    67,    68,    69,    70,
     224,   227,    61,    62,  1387,  1388,    65,    66,    67,    68,
      69,    70,    71,   227,   227,   220,   227,   227,   227,    61,
      62,  1366,   227,    65,    66,    67,    68,    69,    70,    71,
     220,   220,  1367,  1368,   220,  1305,   220,   227,   227,   227,
     227,   227,   227,   227,   220,    66,  1305,    68,    69,    70,
      71,   227,  1397,  1398,  1399,   220,   227,  1402,  1403,   220,
    1405,   227,   227,  1408,   220,  1410,   227,   220,  1413,    70,
     220,   227,  1417,   220,   227,  1420,  1421,   227,   224,  1424,
     227,   220,   225,   220,  1429,  1430,  1431,   220,   227,  1434,
     227,   225,  1437,  1438,   227,   227,   225,   225,    61,    62,
     225,  1446,    65,    66,    67,    68,    69,    70,    71,   224,
    1455,  1456,  1457,   224,  1459,  1460,  1461,   227,  1463,   224,
      61,    62,   224,  1468,    65,    66,    67,    68,    69,    70,
      71,   227,   219,   220,   221,   222,   220,   225,  1483,   225,
     227,   220,    41,   227,  1489,  1490,  1491,   220,   227,   220,
    1495,  1496,  1497,  1498,   227,    44,   227,   220,   224,   220,
     219,   220,   221,   222,   227,  1510,   227,   220,   227,   224,
     227,   227,     8,  1518,   227,   227,  1521,   219,   220,   221,
     222,    41,  1527,   227,   227,   227,   227,    61,    62,   227,
    1535,    65,    66,    67,    68,    69,    70,    71,   219,   220,
     221,   222,  1547,   227,   220,  1550,  1650,   220,   220,   220,
    1555,   227,   227,  1558,   227,   227,   227,  1562,   220,    11,
    1565,   224,   227,   220,   224,   227,  1571,   220,  1573,  1574,
     227,  1576,    24,   220,   227,  1580,    28,   227,   227,    31,
     227,   220,   225,   220,    36,    37,    38,    39,   227,  1594,
     227,   225,  1597,   220,   220,   220,   219,   220,   221,   222,
     227,   227,   227,   220,   227,   225,   224,   220,  1613,  1614,
     227,  1616,  1617,  1618,   227,   220,    51,   224,   219,   220,
     221,   222,   227,   225,  1629,  1630,   227,    65,    66,    67,
      68,    69,    70,   220,   225,   220,   225,    89,  1742,   227,
     227,  1745,   227,  1648,    65,    66,    67,    68,    69,    70,
     227,   220,   227,   220,    89,    90,    71,   109,   227,  1664,
     227,  1666,   220,  1668,   220,  1670,   220,   220,   225,   227,
     220,   227,    47,   227,   227,   110,   224,   227,   225,   131,
     225,   224,   117,  1688,   220,   219,   220,   221,   222,   220,
     227,   227,   220,   227,    79,   220,   227,  1702,  1703,   227,
      79,  1805,   227,   220,  1808,   227,  1711,  1712,  1713,   220,
     227,   220,  1717,   148,   149,   150,   227,   152,   227,   225,
    1650,   156,   220,   220,   225,   220,  1731,  1732,  1733,   227,
     227,  1650,   227,   227,   220,   227,   227,   227,   227,    61,
      62,   227,  1747,    65,    66,    67,    68,    69,    70,    71,
    1755,   227,   220,  1758,  1759,  1760,  1761,  1762,  1862,   227,
     220,   227,  1767,   227,  1769,   220,  1771,   227,  1773,   220,
     222,   223,   227,   220,   227,  1780,   227,   227,   220,  1784,
     227,  1786,   220,   220,  1789,   227,   220,   227,  1793,   227,
     227,   220,   225,   227,   246,  1800,   220,  1802,   227,   220,
     220,   253,   220,   227,  1809,   227,   227,   227,   227,   227,
     220,   227,  1742,   227,   220,  1745,   225,   227,  1823,     5,
    1825,   227,   220,  1742,   276,   227,  1745,    61,    62,   227,
     227,    65,    66,    67,    68,    69,    70,    71,   220,  1844,
     220,   227,   225,  1848,   225,   227,   224,   227,  1853,  1854,
    1855,    61,    62,   225,   225,    65,    66,    67,    68,    69,
      70,    71,  1867,    56,   224,   227,   227,    41,  1873,   227,
     227,  1876,   227,  1878,   227,  1805,   227,   225,  1808,   224,
    1885,   227,  1887,    36,    41,   224,  1805,   225,   225,  1808,
      70,   343,    70,    70,  1899,  1900,    46,   219,   220,   221,
     222,    56,   225,   227,   225,   227,    66,    67,    68,    69,
      70,    71,  1917,   224,  1919,   224,    45,   224,   224,    70,
    1925,   225,   225,  1928,    36,  1930,   227,     4,   380,   381,
    1039,    61,  1862,    41,   386,    65,    66,    67,    68,    69,
      70,    71,    41,  1862,   432,  1043,   602,   892,   889,  1725,
     402,  1527,  1175,   599,  1912,  1751,   589,    -1,   410,    -1,
      -1,    -1,    -1,   415,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,   425,   426,    -1,   428,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    61,    62,   451,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,   473,    -1,    -1,   476,    -1,    -1,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,    -1,    -1,    -1,    -1,    -1,   501,
     502,   503,   504,   505,    -1,   507,    -1,   509,    -1,   219,
     220,   221,   222,    -1,    61,    62,    -1,   519,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,   219,
     220,   221,   222,    -1,    -1,    -1,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   576,    -1,    -1,    -1,    -1,   581,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   593,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   606,   219,   220,   221,   222,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
     227,    75,    -1,    -1,    78,   219,   220,   221,   222,   691,
      -1,    85,    86,   227,    88,    -1,   698,    -1,   700,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,    -1,   717,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,   727,   728,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   219,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,   228,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,   874,   875,    -1,    -1,    -1,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   903,    -1,    -1,    -1,    -1,    -1,   909,   910,    -1,
      -1,   913,    -1,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   937,    -1,   939,    -1,    -1,
     942,    -1,   944,    -1,   946,   947,   948,    -1,    -1,   951,
     952,    -1,    -1,    -1,   956,    -1,   958,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   969,   970,    -1,
      -1,    -1,    -1,   975,    -1,    -1,    -1,    -1,    -1,   981,
      -1,    -1,   984,   985,    -1,    -1,    -1,    -1,   990,   991,
      -1,   993,    -1,   995,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,  1005,    -1,  1007,   219,   220,   221,   222,
      -1,    -1,  1014,  1015,   227,    -1,    -1,    -1,  1020,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,   227,  1030,  1031,
    1032,     5,    -1,    -1,     8,   219,   220,   221,   222,    -1,
      -1,  1043,  1044,   227,  1046,    -1,    -1,  1049,  1050,  1051,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,  1060,  1061,
      -1,    -1,    -1,    -1,  1066,  1067,    -1,  1069,    -1,    -1,
    1072,   219,   220,   221,   222,  1077,    -1,  1079,    -1,   227,
      -1,    -1,  1084,    -1,  1086,    -1,    61,    62,  1090,    -1,
      65,    66,    67,    68,    69,    70,    71,  1099,    -1,    -1,
    1102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1110,    -1,
      -1,    -1,  1114,  1115,  1116,  1117,  1118,    -1,    -1,    -1,
      -1,    -1,    -1,    97,  1126,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,    -1,    -1,    61,    62,   111,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,  1167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    61,    62,  1191,
    1192,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,   178,   179,   180,    -1,    -1,   183,
     184,   185,    -1,   187,    -1,   189,   190,   191,   192,   193,
     194,    -1,    -1,   197,    -1,    -1,   200,    -1,   202,   203,
      -1,   205,    -1,   207,    -1,   209,    -1,    -1,   212,    -1,
     214,    -1,   216,    -1,   219,   220,   221,   222,    -1,    -1,
     224,   225,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1294,   219,   220,   221,   222,    -1,    -1,    46,
      -1,   227,    49,    50,    51,    52,    53,    -1,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    -1,    70,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    -1,    80,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1378,    -1,    61,    62,
      -1,  1383,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1398,    -1,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,   158,  1414,  1415,    -1,    -1,  1418,    -1,  1420,  1421,
     219,   220,   221,   222,    -1,  1427,    -1,    -1,   227,    -1,
      -1,  1433,  1434,  1435,    -1,  1437,    -1,    -1,  1440,  1441,
    1442,    -1,  1444,    -1,  1446,    -1,  1448,    -1,  1450,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1458,    61,    62,    -1,
    1462,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
     217,  1473,    -1,  1475,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,  1489,    -1,    -1,
    1492,  1493,   219,   220,   221,   222,    -1,  1499,    -1,    -1,
     227,    -1,    -1,    -1,  1506,    -1,    -1,    -1,    -1,    -1,
      -1,  1513,    -1,  1515,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,  1527,    -1,    -1,    -1,    -1,
      -1,  1533,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,   288,    -1,    -1,   227,    -1,   293,    -1,    -1,    -1,
    1552,  1553,   299,    -1,    -1,  1557,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,  1570,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,  1588,    -1,    -1,    -1,
    1592,    -1,    -1,    -1,    -1,    -1,   343,    -1,  1600,  1601,
    1602,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,
      61,    62,    -1,   227,    65,    66,    67,    68,    69,    70,
      71,    -1,   219,   220,   221,   222,   383,   384,   385,    -1,
     387,   388,    -1,   390,   391,   392,    61,    62,    -1,  1651,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      61,    62,    -1,  1665,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,  1676,    -1,  1678,  1679,    -1,  1681,
      -1,    -1,    -1,    -1,  1686,    -1,    -1,    -1,  1690,  1691,
    1692,  1693,  1694,    -1,  1696,  1697,  1698,    -1,  1700,    -1,
      -1,    -1,    -1,  1705,  1706,    -1,    -1,    -1,  1710,    -1,
      -1,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,  1726,    -1,   473,    -1,   475,    -1,
      -1,    -1,  1734,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,  1748,  1749,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1764,    -1,    -1,    61,    62,    -1,  1770,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
    1792,    -1,  1794,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,  1831,
      -1,    -1,  1834,    -1,    -1,    -1,  1838,    -1,  1840,  1841,
      -1,  1843,    -1,  1845,    -1,    -1,    -1,    -1,    -1,   596,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   612,    -1,  1869,    -1,   219,
     220,   221,   222,  1875,    -1,    -1,   623,   227,    -1,    -1,
      -1,    -1,   629,    -1,    -1,    -1,  1888,   634,    -1,    -1,
      -1,   638,    -1,   640,    -1,    -1,    -1,    -1,    -1,   646,
      -1,    -1,   649,  1905,   651,    -1,    -1,    -1,   655,    -1,
      -1,    -1,    -1,     3,     4,     5,   663,     7,     8,    -1,
      -1,  1923,    -1,   219,   220,   221,   222,    -1,   675,    -1,
      -1,   227,    -1,    -1,    -1,   682,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   693,    -1,   695,    -1,
      -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   716,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   858,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,    -1,   219,
      -1,    -1,    -1,    -1,   224,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,   932,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   976,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,  1012,    -1,    -1,    -1,    85,
      86,  1018,    88,    -1,  1021,  1022,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,   219,   220,   221,   222,    -1,   153,   225,    -1,
    1087,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,    -1,   214,   215,
     216,    -1,    -1,   219,    -1,    -1,    -1,    -1,   224,   225,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,
     113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,
      -1,    -1,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,   211,   212,
      -1,   214,   215,   216,    -1,    -1,   219,    -1,    -1,    -1,
      -1,   224,   225,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,  1464,    88,    -1,
      -1,    91,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,   103,   104,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,   125,    -1,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,    -1,   219,
      -1,     3,     4,     5,   224,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,  1714,    -1,   121,
     122,   123,   124,    -1,    -1,   127,   128,    -1,    -1,   131,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,    -1,   214,   215,   216,    -1,    -1,   219,    -1,     3,
       4,     5,   224,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,   103,
     104,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,   125,    -1,   127,   128,    -1,    -1,   131,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   219,    -1,     3,     4,     5,
     224,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,   103,   104,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,   131,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,    -1,   214,   215,
     216,    -1,    -1,   219,    -1,     3,     4,     5,   224,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,    97,
      -1,    -1,   100,   101,   102,   103,    -1,    -1,   106,   107,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,    -1,   214,   215,   216,    -1,
      -1,   219,    -1,     3,     4,     5,   224,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,    -1,   219,
      -1,     3,     4,     5,   224,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,    -1,   214,   215,   216,    -1,    -1,   219,    -1,     3,
       4,     5,   224,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,    -1,    -1,   110,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   219,    -1,     3,     4,     5,
     224,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,    -1,   214,   215,
     216,    -1,    -1,   219,    -1,     3,     4,     5,   224,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,
      -1,    -1,   100,   101,   102,    -1,   104,    -1,   106,   107,
      -1,    -1,    -1,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,   120,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,    -1,   214,   215,   216,    -1,
      -1,   219,    -1,     3,     4,     5,   224,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,   104,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,   218,   219,
      -1,     3,     4,     5,   224,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,    -1,   214,   215,   216,    -1,    -1,   219,    -1,     3,
       4,     5,   224,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   219,    -1,     3,     4,     5,
     224,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,    -1,   214,   215,
     216,    -1,    -1,   219,    -1,     3,     4,     5,   224,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,    -1,   214,   215,   216,    -1,
      -1,   219,    -1,     3,     4,     5,   224,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,    -1,   219,
      -1,     3,     4,     5,   224,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,    -1,   214,   215,   216,    -1,    -1,   219,    -1,     3,
       4,     5,   224,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,    -1,    -1,   110,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   219,    -1,     3,     4,     5,
     224,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,    -1,   214,   215,
     216,    -1,    -1,   219,    -1,     3,     4,     5,   224,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,    -1,   214,   215,   216,    -1,
      -1,   219,    -1,     3,     4,     5,   224,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,    -1,   219,
      -1,     3,     4,     5,   224,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,   211,
     212,    -1,   214,   215,   216,    -1,    -1,   219,    -1,     3,
       4,     5,   224,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,    -1,    -1,   110,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,   211,   212,    -1,
     214,   215,   216,    -1,    -1,   219,    -1,     3,     4,     5,
     224,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,   211,   212,    -1,   214,   215,
     216,    -1,    -1,   219,    -1,     3,     4,     5,   224,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,
      -1,    -1,    -1,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,   211,   212,    -1,   214,   215,   216,    -1,
      -1,   219,    -1,     3,     4,     5,   224,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,     5,   127,   128,     8,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      29,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,   211,   212,    -1,   214,   215,   216,    -1,    97,   219,
      -1,   100,   101,   102,   224,    -1,    -1,   106,    -1,    -1,
      -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,    -1,    -1,     5,   127,   128,
       8,    -1,    -1,    -1,    -1,    61,    62,    -1,   137,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,   147,    -1,
      -1,    29,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
     179,   180,    -1,    -1,   183,   184,   185,    -1,   187,    -1,
     189,   190,   191,   192,   193,   194,    -1,    -1,   197,    -1,
      -1,   200,    -1,   202,   203,    -1,   205,    -1,   207,    -1,
     209,    -1,    -1,   212,    -1,   214,    -1,   216,    -1,    97,
      -1,    -1,   100,   101,   102,   224,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,     5,   127,
     128,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,   147,
      -1,    -1,    29,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,   225,
     178,   179,   180,    60,    -1,   183,   184,   185,    -1,   187,
      -1,   189,   190,   191,   192,   193,   194,    -1,    -1,   197,
      -1,    -1,   200,    -1,   202,   203,    -1,   205,    -1,   207,
      -1,   209,    -1,    -1,   212,    -1,   214,    -1,   216,    -1,
      97,    -1,    -1,   100,   101,   102,   224,    -1,    -1,   106,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,     5,
     127,   128,     8,    -1,    -1,    -1,    -1,    61,    62,    -1,
     137,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
     147,    -1,    -1,    29,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   178,   179,   180,    -1,    -1,   183,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,   193,   194,    -1,    -1,
     197,    -1,    -1,   200,    -1,   202,   203,    -1,   205,    -1,
     207,    -1,   209,    -1,    -1,   212,    -1,   214,    -1,   216,
      -1,    97,    -1,    -1,   100,   101,   102,   224,    -1,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,
       5,   127,   128,     8,    -1,    -1,    -1,    -1,    61,    62,
      -1,   137,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,   147,    -1,    -1,    29,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,   225,   178,   179,   180,    -1,    -1,   183,   184,   185,
      -1,   187,    -1,   189,   190,   191,   192,   193,   194,    -1,
      -1,   197,    -1,    -1,   200,    -1,   202,   203,    -1,   205,
      -1,   207,    -1,   209,    -1,    -1,   212,    -1,   214,    -1,
     216,    -1,    97,    -1,    -1,   100,   101,   102,   224,    -1,
      -1,   106,    -1,    -1,    -1,   110,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    -1,
      -1,     5,   127,   128,     8,    -1,    -1,    -1,    -1,    61,
      62,    -1,   137,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,   147,    -1,    -1,    29,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,   225,   178,   179,   180,    -1,    -1,   183,   184,
     185,    -1,   187,    -1,   189,   190,   191,   192,   193,   194,
      -1,    -1,   197,    -1,    -1,   200,    -1,   202,   203,    -1,
     205,    -1,   207,    -1,   209,    -1,    -1,   212,    -1,   214,
      -1,   216,    -1,    97,    -1,    -1,   100,   101,   102,   224,
      -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,     5,   127,   128,     8,    -1,    -1,    -1,    -1,
      61,    62,    -1,   137,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,   147,    -1,    -1,    29,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,   225,   178,   179,   180,    -1,    -1,   183,
     184,   185,    -1,   187,    -1,   189,   190,   191,   192,   193,
     194,    -1,    -1,   197,    -1,    -1,   200,    -1,   202,   203,
      -1,   205,    -1,   207,    -1,   209,    -1,    -1,   212,    -1,
     214,    -1,   216,    -1,    97,    -1,    -1,   100,   101,   102,
     224,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,    -1,    -1,     5,   127,   128,     8,    -1,    -1,    -1,
      -1,    61,    62,    -1,   137,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,   147,    -1,    -1,    29,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,   225,   178,   179,   180,    -1,    -1,
     183,   184,   185,    -1,   187,    -1,   189,   190,   191,   192,
     193,   194,    -1,    -1,   197,    -1,    -1,   200,    -1,   202,
     203,    -1,   205,    -1,   207,    -1,   209,    -1,    -1,   212,
      -1,   214,    -1,   216,    -1,    97,    -1,    -1,   100,   101,
     102,   224,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    -1,    -1,   225,   178,   179,   180,    -1,
      -1,   183,   184,   185,    -1,   187,    -1,   189,   190,   191,
     192,   193,   194,    -1,    -1,   197,    -1,    -1,   200,    -1,
     202,   203,    -1,   205,    -1,   207,    -1,   209,    -1,    -1,
     212,    -1,   214,    -1,   216,     4,     5,     6,    -1,    -1,
       9,    -1,   224,    -1,    13,    -1,    15,    -1,    17,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    91,    -1,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,   105,    -1,   107,   108,
     109,    -1,   111,    -1,   113,   114,   115,   116,   117,   118,
     119,    -1,   121,   122,   123,    -1,    -1,   126,   127,   128,
      -1,   130,    -1,   132,    -1,    -1,   135,   136,    -1,   138,
      -1,    -1,    -1,   142,    -1,    -1,   145,    -1,   147,   148,
      -1,    -1,    -1,    -1,    -1,   154,    61,    62,   157,   158,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,   178,
     179,   180,    61,    62,    -1,   184,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,   198,
      61,    62,   201,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,   214,    -1,    -1,   219,   220,
     221,   222,    -1,    61,    62,    -1,   227,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,   221,   222,    -1,    61,    62,    -1,   227,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,   219,   220,
     221,   222,    -1,    61,    62,    -1,   227,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,   227,    -1,    -1,   219,   220,
     221,   222,    -1,    61,    62,    -1,   227,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,   221,   222,    -1,    61,    62,
      -1,   227,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,   219,   220,   221,   222,    -1,    61,    62,    -1,   227,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   219,   220,   221,   222,    -1,    61,    62,
      -1,   227,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,    61,    62,    -1,   227,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,   227,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,   227,    -1,
      -1,   219,   220,   221,   222,    -1,    61,    62,    -1,   227,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,    61,    62,    -1,   227,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    -1,    61,    62,    -1,   227,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,
      -1,    61,    62,    -1,   227,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    -1,    61,    62,    -1,   227,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,   227,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,   227,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,   219,
     220,   221,   222,    -1,    61,    62,    -1,   227,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,   219,
     220,   221,   222,    -1,    61,    62,    -1,   227,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,    61,    62,    -1,
     227,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
     227,    -1,    -1,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   219,   220,   221,   222,    -1,    61,
      62,    -1,   227,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,   219,   220,   221,   222,    61,    62,   225,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,
     219,   220,   221,   222,    -1,    -1,   225,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,    -1,    -1,   225,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    61,    62,   225,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,    61,    62,   225,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,   219,   220,   221,   222,    61,    62,
     225,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
     225,    -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      61,    62,   225,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    61,    62,   225,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,
     219,   220,   221,   222,    -1,    -1,   225,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,    -1,    -1,   225,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,   225,    -1,
      -1,    -1,    -1,   219,   220,   221,   222,    61,    62,   225,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    61,    62,   225,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,    61,    62,   225,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,    61,    62,   225,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,   220,   221,   222,    61,    62,   225,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,   225,
      -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
     225,    -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,
      -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,   222,
      -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,    -1,    -1,   225,    -1,    -1,    -1,    -1,   219,   220,
     221,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,   219,
     220,   221,   222,    -1,    -1,   225,    -1,    -1,    -1,    -1,
     219,   220,   221,   222,    61,    62,   225,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,   219,
     220,   221,   222,    61,    62,   225,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,    -1,   225,    -1,
      -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,   225,
      -1,    -1,    -1,    -1,   219,   220,   221,   222,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,    -1,    -1,   225
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     9,    13,    15,    17,    18,    19,
      20,    21,    24,    25,    26,    27,    28,    29,    30,    31,
      33,    34,    35,    40,    43,    49,    50,    51,    52,    53,
      54,    55,    58,    72,    73,    74,    75,    76,    77,    82,
      83,    84,    87,    88,    91,    93,    95,    96,    97,    98,
      99,   100,   101,   102,   105,   107,   108,   109,   111,   113,
     114,   115,   116,   117,   118,   119,   121,   122,   123,   126,
     127,   128,   130,   132,   135,   136,   138,   142,   145,   147,
     148,   154,   157,   158,   178,   179,   180,   184,   198,   201,
     214,   230,   231,   234,   241,   243,   244,   248,   260,   261,
     266,   272,   279,   287,   296,   299,   303,   306,   312,    70,
     224,    70,   224,   280,   300,   304,     4,     7,   258,   258,
     258,     3,     4,     5,     7,     8,    28,    29,    32,    61,
      62,    63,    64,    75,    78,    85,    86,    88,    93,    96,
      97,   100,   101,   102,   106,   107,   111,   113,   115,   117,
     121,   122,   123,   127,   128,   132,   135,   136,   137,   138,
     140,   141,   142,   146,   147,   153,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   202,
     203,   204,   205,   206,   207,   208,   209,   211,   212,   214,
     215,   216,   219,   224,   246,   247,   249,   255,   257,   260,
     261,   235,   236,   101,   102,   111,   122,   123,   147,   158,
     224,   246,   224,   224,   246,    26,   288,   297,   249,    56,
      59,    60,   228,   334,   239,    50,   246,   249,     4,     5,
     259,   249,   249,   254,     4,     5,   322,   323,     8,   219,
     220,   256,   257,   324,   246,   258,   228,   246,   249,   335,
     335,   335,   249,   241,   248,   260,   261,   246,    75,    76,
     110,    57,    94,   210,   254,   246,   110,   246,   110,   210,
     254,   110,   254,    91,   110,   254,    91,   103,   104,   125,
     131,   254,    91,   103,   104,   131,   254,   144,   246,    20,
      60,   110,   254,   110,   254,   246,    60,    91,   103,   110,
     254,   104,   120,   254,   110,   254,   103,   104,   110,   254,
      60,   254,   104,   218,   254,   254,    60,   110,   110,   254,
      91,   103,   104,   125,   131,   133,   134,   254,    60,    91,
     103,   104,   124,   131,   254,    60,   246,   110,   254,   129,
     110,   246,   110,   246,   110,   254,   110,   254,   110,   254,
      82,   144,   246,    51,    89,    90,   110,   117,   148,   149,
     150,   152,   156,   110,   254,   246,   246,    91,   110,   224,
     224,   224,   224,   224,   246,   335,   110,     0,    42,   232,
      70,    70,    22,   249,   262,   263,   246,   262,     4,   224,
     231,   224,   224,    33,    34,   224,   224,   249,   224,   224,
     224,   224,   224,   112,   218,   246,   246,   212,   213,   112,
     213,   218,   112,   213,   218,   246,   218,   213,   218,   218,
     218,    60,   151,   210,   218,   218,   112,   213,   218,   112,
     213,   218,   213,   217,   218,   218,   218,   254,   218,   139,
     104,   218,   143,   210,   213,   218,   224,   213,   218,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   254,
     224,   209,   246,   209,   249,   246,   249,    65,    66,    67,
      68,    69,    70,   220,    18,    19,    61,    62,    65,    66,
      67,    68,    69,    70,    71,   219,   220,   221,   222,     4,
       5,   273,   274,     4,     5,   275,   276,   246,   262,   262,
     246,   249,   290,   231,   307,   313,   224,    56,   224,     4,
       7,   224,   246,   249,   325,    56,   228,   327,   332,   240,
     224,   224,   227,   227,    10,   227,   242,   224,   224,   227,
     257,   257,   227,   249,     9,   227,   227,   254,   246,   246,
     246,   254,   242,   227,   246,   227,   246,   254,   227,   246,
     227,   246,   246,   242,   246,   246,   246,   246,   246,   242,
     246,   246,   246,   246,   242,   246,   246,   246,   242,   246,
     242,   227,   246,   246,   246,   246,   242,   246,   246,   242,
     246,   242,   246,   246,   246,   242,   246,   227,   246,   246,
     249,   254,   227,   242,   246,   246,   246,   227,   246,   246,
     246,   246,   246,   246,   246,   242,   246,   246,   246,   246,
     246,   246,   242,   246,   227,   246,   227,   246,   246,   227,
     246,   227,   246,   242,   246,   242,   246,   227,   224,   249,
     224,   249,   227,   254,   254,   254,   246,   249,   254,   254,
     246,   254,   254,   254,   246,   227,   242,   242,   246,   246,
       5,   245,   245,   245,   225,   249,   246,   227,   227,   246,
      41,   249,   246,   267,   225,   246,   249,   264,   265,   225,
      70,   249,    16,    42,   305,   262,   262,   249,   249,   249,
     246,   335,   335,     4,     5,   252,   253,   252,   253,   246,
     227,   227,   224,   246,   246,   246,   246,   246,   246,   246,
     227,   246,   246,   246,   246,   246,   249,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   227,   246,   246,   246,   246,   246,   249,   254,   246,
     246,   254,   249,   246,   246,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   335,   249,   249,   249,   249,
     249,   225,   249,   246,   246,   246,   246,   246,   249,   249,
     249,   225,   249,   249,   246,   249,   246,   249,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   335,   246,
     225,   225,   246,   245,   246,   245,   246,   225,   242,   246,
     224,   246,   246,   225,   225,   246,   246,   246,   246,   246,
     246,   246,   237,   238,   251,   250,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   224,   224,   227,
     224,   224,   227,   225,   225,    41,   289,    39,    42,   298,
      44,   231,   249,   224,   246,   249,    48,   326,   226,   227,
     224,     4,     7,   224,     8,   333,   327,   262,   262,     4,
       5,   249,   254,   262,   262,   323,     8,   256,    80,    81,
     246,   249,   242,   227,   227,   254,   246,   227,   246,   227,
     227,   246,   227,   246,   227,   254,   227,   227,   227,   254,
     227,   227,   227,   254,   227,   227,   227,   254,   227,   254,
     246,   227,   227,   227,   254,   254,   227,   254,   227,   227,
     227,   254,   227,   246,   227,   227,   242,   246,   254,   227,
     227,   227,   246,   227,   227,   227,   227,   227,   254,   227,
     227,   227,   227,   227,   254,   227,   246,   227,   246,   227,
     246,   227,   249,   227,   254,   227,   254,   227,   246,   249,
     249,   246,   242,   227,   227,   227,   227,   227,   242,   227,
     227,   242,   227,   227,   246,   254,   249,   227,   227,   224,
     227,   227,   227,   225,   225,   246,   249,   246,   249,   233,
       4,     5,   271,   227,   281,   225,   224,   225,   225,   227,
     227,   227,   225,   227,   227,   225,   224,   224,   225,   225,
     227,   227,   227,   246,   246,   246,   227,   227,   246,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   246,   227,   227,   227,   227,   242,   227,   227,
     227,   227,   227,   225,   225,   225,   225,   225,   225,   227,
     225,   225,   227,   225,   225,   225,   225,   225,   225,   225,
     227,   225,   225,   225,   227,   227,   227,   227,   227,   225,
     227,   225,   225,   225,   225,   225,   227,   225,   225,   225,
     225,   225,   225,   227,   227,   225,   225,   225,   225,   225,
     227,   227,   225,   227,   227,   225,   227,   227,   254,   225,
     225,   258,   336,   258,   337,   249,   249,   262,   262,   274,
     262,   262,   276,    41,   291,   308,    47,   227,   249,   225,
     227,   225,   224,   246,   246,   249,   249,   328,   329,   249,
       4,     5,   319,   321,   225,   225,   224,   224,   227,   225,
     225,    79,    79,   227,   227,   254,   246,   246,   227,   227,
     246,   249,   227,   249,   246,   227,   249,   227,   246,   249,
     227,   246,   249,   246,   249,   249,   227,   246,   249,   249,
     227,   246,   246,   246,   249,   227,   246,   249,   227,   246,
     246,   246,   227,   227,   246,   227,   246,   249,   249,   227,
     246,   227,   246,   246,   254,   227,   246,   246,   249,   227,
     246,   246,   249,   249,   246,   246,   227,   246,   249,   249,
     246,   249,   227,   249,   246,   227,   246,   227,   246,   227,
     246,   227,   249,   227,   249,   227,   225,   225,   227,   254,
     246,   249,   246,   249,   246,   246,   254,   246,   249,   254,
     254,   246,   227,   227,   227,   246,   246,   262,   249,   249,
     249,   234,   268,   265,   249,   301,   249,   249,   249,   249,
     246,   246,   225,   225,   249,   249,   246,   227,   227,   225,
     249,   249,   227,   246,   249,   246,   246,   249,   246,   246,
     246,   246,   249,   246,   249,   246,   246,   227,   246,   249,
     246,   249,   254,   246,   246,   249,   246,   246,   249,   249,
     249,   249,   249,   249,   249,   249,   246,   249,   246,   246,
     246,   253,   246,   253,   246,   246,   227,   227,   227,   225,
     225,   225,   225,    37,    38,   294,   231,   249,   227,    56,
     246,   246,   326,   227,   319,   319,   225,   224,   224,   227,
     262,   262,   246,   335,   335,   246,   246,   227,   227,   227,
     246,   246,   227,   227,   246,   227,   246,   246,   227,   246,
     227,   246,   246,   227,   227,   227,   246,   227,   227,   246,
     227,   227,   246,   246,   227,   246,   246,   227,   246,   227,
     227,   227,   246,   227,   227,   227,   246,   227,   227,   246,
     227,   227,   227,   246,   227,   246,   227,   246,   227,   246,
     227,   246,   246,   246,   246,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   246,   246,   249,   227,   225,
     225,   225,   225,   227,   224,    10,   231,   225,   225,   225,
     225,   225,   225,   227,   225,   225,   246,   246,   246,   227,
     227,   227,   227,   227,   246,   227,   227,   227,   227,   242,
     225,   225,   225,   225,   225,   225,   227,   225,   225,   225,
     227,   225,   225,   227,   225,   227,   225,   225,   227,   225,
     225,   227,   225,   225,   246,   258,   258,   292,    41,    36,
     309,   225,   249,   224,   225,   227,   249,   330,   262,   262,
     320,   225,   225,   246,   246,   249,   246,   227,   246,   246,
     227,   246,   227,   227,   246,   227,   246,   227,   227,   246,
     249,   249,   227,   246,   249,   227,   246,   249,   246,   249,
     227,   227,   246,   227,   227,   249,   227,   246,   246,   246,
     227,   249,   246,   249,   249,   246,   249,   246,   227,   249,
     249,   249,   227,   249,   227,   246,   249,   227,   249,   249,
     227,   227,   227,   246,   246,   246,   249,   246,   246,   246,
     249,   246,   254,   227,   227,   246,    70,    70,    70,   249,
       4,     5,   277,   278,   249,    14,    42,   302,   246,   227,
     227,   246,   249,   246,   246,   249,   249,   246,   246,   246,
     246,   249,   249,   246,   249,   249,   246,   246,   227,   290,
     295,    46,   315,    59,    60,   225,   249,    56,   246,   225,
     319,   225,   225,   319,   227,   227,   227,   246,   227,   246,
     227,   249,   249,   246,   249,   246,   227,   246,   227,   227,
     246,   227,   249,   246,   246,   246,   227,   246,   227,   246,
     227,   227,   227,   227,   227,   249,   227,   227,   227,   249,
     227,   246,   227,   227,   246,   227,   227,   249,   249,   249,
     227,   227,   227,   227,   227,   246,   246,   227,   246,   246,
     246,   225,   224,   224,   225,   227,    11,   285,   225,   246,
     246,   227,   227,   227,   227,   225,   225,   225,   225,   225,
     225,   246,   293,   231,   249,    45,   314,   224,   227,   224,
     225,   331,   246,   249,   246,   227,   246,   246,   227,   227,
     227,   227,   227,   249,   227,   249,   249,   227,   249,   227,
     227,   227,   249,   227,   246,   249,   249,   249,   249,   249,
     227,   249,   249,   249,   227,   249,   227,   246,   246,   227,
     249,   249,   227,   227,   227,   249,   246,   246,   246,   254,
     227,   246,    70,   225,   225,   269,   278,   249,   282,   227,
     246,   246,   246,   249,   231,    44,   318,   231,   310,   246,
     249,   249,   333,   227,   246,   227,   246,   246,   246,   246,
     246,   227,   249,   246,   227,   246,   249,   246,   227,   246,
     227,   227,   246,   227,   227,   227,   246,   246,   227,   246,
     249,   246,   249,   227,   227,   227,   246,   246,   231,   231,
     246,   225,   316,    42,    47,   311,   225,   227,   225,   227,
     319,   246,   246,   227,   249,   227,   227,   249,   227,   249,
     249,   249,   249,   246,   249,   227,   246,   227,   227,   246,
     246,   246,    23,    42,   270,   283,   231,   246,   249,   227,
     227,   246,   249,   246,   246,   227,   246,   246,   249,    12,
      42,   284,   317,   225,   225,   246,   246,   227,   249,   227,
       4,   286,   315,   227,   246,   227,   246,   249,   227,   246,
     227,   246,   246
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   229,   230,   231,   232,   233,   231,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   235,   234,   236,   234,   234,   234,
     234,   234,   234,   234,   237,   234,   238,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   239,   234,
     240,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   241,   241,   241,   241,   241,
     241,   242,   242,   243,   243,   243,   243,   244,   244,   245,
     245,   246,   246,   246,   246,   246,   246,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   248,   248,   250,   249,   251,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   252,   253,   254,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   256,   256,   256,
     257,   257,   258,   258,   259,   259,   259,   259,   260,   261,
     263,   262,   264,   264,   264,   265,   265,   267,   268,   269,
     266,   270,   270,   271,   271,   272,   272,   272,   272,   273,
     273,   274,   274,   274,   274,   275,   275,   276,   276,   276,
     276,   277,   277,   277,   278,   278,   278,   278,   280,   281,
     282,   283,   279,   284,   284,   285,   285,   286,   286,   288,
     287,   289,   289,   290,   290,   291,   292,   293,   291,   294,
     295,   294,   297,   296,   298,   298,   300,   301,   299,   302,
     302,   304,   303,   305,   305,   307,   308,   309,   310,   306,
     311,   311,   313,   312,   314,   314,   315,   316,   317,   315,
     318,   318,   319,   320,   319,   321,   321,   321,   321,   322,
     322,   323,   323,   323,   323,   324,   324,   324,   324,   325,
     325,   325,   325,   325,   326,   326,   326,   328,   327,   329,
     327,   330,   327,   331,   327,   332,   327,   333,   333,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   335,   335,   336,   336,   337,   337
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     0,     5,     0,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       2,     2,     3,     3,     0,     5,     0,     5,     2,     1,
       2,     1,     2,     4,     4,     3,     4,     4,     0,     3,
       0,     4,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     9,    10,     8,    10,    10,    12,    10,     3,     5,
       7,    10,     5,     3,     5,     5,     5,     5,     6,     8,
      10,     5,     1,     2,     2,     7,     7,     3,     3,     4,
       5,     7,     9,     6,    10,     5,     5,     7,     7,     7,
      11,     3,     5,     5,    11,     5,     7,     8,     3,    12,
       7,    10,     5,     5,     5,     5,     7,     7,     9,    11,
      14,    16,     7,     7,    11,     5,     2,     7,    11,     5,
       7,     9,     4,     9,     7,     7,     9,    11,     3,     6,
       8,     3,     6,     9,     5,     5,     7,     3,    10,     5,
       9,    11,     7,     3,     5,     5,     5,     7,     5,     5,
      13,    17,     5,     5,     4,     9,     3,     3,    12,    11,
      15,     3,     5,     5,    11,    10,     5,     6,     7,     9,
       5,     5,     7,     9,    10,     9,    11,    12,     9,     9,
      14,     5,     3,     3,     3,     3,     5,     3,     5,    12,
       7,     9,    10,     5,    10,    11,     9,     5,     6,     2,
       2,     1,     1,     3,     4,     4,     4,     4,     4,     4,
       1,     1,     2,     1,     2,     3,    10,     8,     8,     8,
       3,     1,     1,     6,     4,     6,     6,     4,     6,     1,
       4,     1,     1,     1,     1,     3,     3,     6,     6,     8,
       6,     4,     6,     8,     1,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     3,     1,     3,     4,     6,
       6,     4,     6,     4,    10,     4,     4,     4,     1,     3,
       2,     4,     4,     5,     3,     5,     5,     3,     6,     8,
       3,     3,     2,     7,     3,     5,     5,     6,     5,     3,
       5,     3,     3,     0,     4,     0,     4,     2,     3,     3,
       3,     3,     3,     3,     4,     6,     1,     4,     4,     6,
       6,     1,     1,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     6,
       4,     4,     4,     4,     4,     4,     6,     4,     3,     6,
       6,     4,     4,     4,     4,     6,     6,     8,     6,     8,
       4,     4,     4,     6,     6,     6,     4,     8,     6,     8,
       6,     4,     4,     6,     6,     8,     9,     9,     8,     2,
       2,     3,     5,     5,    10,     3,     3,     5,     5,     3,
       3,     3,     3,     3,     5,     5,     7,     7,     7,     5,
       7,     5,     5,     5,     6,     3,     1,     3,     3,     3,
       3,     7,     7,     5,     5,     9,     5,     1,     2,     2,
       1,     1,     1,     1,     4,     6,     4,     6,     4,     4,
       0,     2,     0,     1,     3,     1,     1,     0,     0,     0,
      11,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       3,     1,     1,     4,     4,     1,     3,     1,     1,     4,
       4,     0,     1,     3,     1,     1,     3,     3,     0,     0,
       0,     0,    14,     1,     1,     0,     2,     0,     1,     0,
       7,     1,     2,     1,     1,     0,     0,     0,     6,     0,
       0,     4,     0,     4,     1,     1,     0,     0,     8,     1,
       1,     0,     4,     1,     4,     0,     0,     0,     0,    11,
       1,     1,     0,     5,     0,     2,     0,     0,     0,     7,
       0,     1,     1,     0,     4,     1,     4,     1,     4,     1,
       3,     1,     4,     1,     4,     1,     1,     3,     3,     0,
       2,     4,     1,     3,     0,     2,     6,     0,     4,     0,
       4,     0,     6,     0,     9,     0,     3,     0,     1,     0,
       2,     2,     4,     1,     4,     6,     6,     7,    10,    12,
       7,    10,    12,     2,     1,     1,     3,     1,     3
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
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
    default: /* Avoid compiler warnings. */
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

    {YYACCEPT;}

    break;

  case 4:

    {if (errorlevel<=ERROR) {YYABORT;}}

    break;

  case 5:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep); else switchlib();}

    break;

  case 12:

    {report_missing(ERROR,"do not import a library in a loop or an if-statement");switchlib();}

    break;

  case 13:

    {add_command(cERROR,NULL);}

    break;

  case 19:

    {add_command(cBREAK,NULL);if (!in_loop) error(ERROR,"break outside loop");}

    break;

  case 20:

    {add_command(cCONTINUE,NULL);if (!in_loop) error(ERROR,"continue outside loop");}

    break;

  case 22:

    {create_call((yyvsp[0].symbol));add_command(cPOP,NULL);}

    break;

  case 23:

    {create_call((yyvsp[0].symbol));add_command(cPOP,NULL);}

    break;

  case 24:

    {if (function_type==ftNONE) error(ERROR,"no use for 'local' outside functions");}

    break;

  case 26:

    {if (function_type==ftNONE) error(ERROR,"no use for 'static' outside functions");}

    break;

  case 30:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));}

    break;

  case 31:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));}

    break;

  case 32:

    {create_exception(TRUE);}

    break;

  case 33:

    {create_exception(FALSE);}

    break;

  case 34:

    {add_command(cSKIPPER,NULL);}

    break;

  case 35:

    {add_command(cNOP,NULL);}

    break;

  case 36:

    {add_command(cSKIPPER,NULL);}

    break;

  case 37:

    {add_command(cNOP,NULL);}

    break;

  case 38:

    {create_label((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol),cLABEL);}

    break;

  case 39:

    {add_command(cCHECKOPEN,NULL);}

    break;

  case 40:

    {add_command(cCLOSE,NULL);}

    break;

  case 41:

    {add_command(cCHECKSEEK,NULL);}

    break;

  case 42:

    {add_command(cCOMPILE,NULL);}

    break;

  case 43:

    {create_execute(0);add_command(cPOP,NULL);add_command(cPOP,NULL);}

    break;

  case 44:

    {create_execute(1);add_command(cPOP,NULL);add_command(cPOP,NULL);}

    break;

  case 45:

    {create_colour(0);create_print('n');create_pps(cPOPSTREAM,0);}

    break;

  case 46:

    {create_colour(0);create_pps(cPOPSTREAM,0);}

    break;

  case 47:

    {create_colour(0);create_print('t');create_pps(cPOPSTREAM,0);}

    break;

  case 48:

    {tileol=FALSE;}

    break;

  case 50:

    {tileol=TRUE;}

    break;

  case 54:

    {create_restore("");}

    break;

  case 55:

    {create_restore((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));}

    break;

  case 56:

    {add_command(cRESTORE2, NULL);}

    break;

  case 57:

    {if (get_switch_id()) create_clean_switch_mark(0,TRUE);
             if (function_type!=ftNONE) {
	       add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;
	       add_command(cPOPSYMLIST,NULL);
               create_retval(ftNONE,function_type);
               add_command(cRET_FROM_FUN,NULL);
            } else {
               add_command(cRETURN,NULL);
            }}

    break;

  case 58:

    {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNUMBER,function_type);add_command(cRET_FROM_FUN,NULL);}

    break;

  case 59:

    {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftSTRING,function_type);add_command(cRET_FROM_FUN,NULL);}

    break;

  case 61:

    {create_openwin(TRUE);}

    break;

  case 62:

    {add_command(cBUTTON,NULL);}

    break;

  case 63:

    {add_command(cMENU,NULL);}

    break;

  case 64:

    {add_command(cCHECKBOX,NULL);}

    break;

  case 65:

    {add_command(cRADIOBUTTON,NULL);}

    break;

  case 66:

    {add_command(cTEXTCONTROL,NULL);}

    break;

  case 67:

    {add_command(cLISTBOX,NULL);}

    break;

  case 68:

    {add_command(cITEMCLEAR, NULL);}

    break;

  case 69:

    {add_command(cLISTBOXADD1, NULL);}

    break;

  case 70:

    {add_command(cLISTBOXADD2, NULL);}

    break;

  case 71:

    {add_command(cDROPBOX,NULL);}

    break;

  case 72:

    {add_command(cITEMADD,NULL);}

    break;

  case 73:

    {add_command(cDROPBOXCLEAR,NULL);}

    break;

  case 74:

    {add_command(cDROPBOXREMOVE,NULL);}

    break;

  case 75:

    {add_command(cITEMDEL,NULL);}

    break;

  case 76:

    {add_command(cLISTBOXDEL2,NULL);}

    break;

  case 77:

    {add_command(cLISTBOXSELECT,NULL);}

    break;

  case 78:

    {add_command(cALERT,NULL);}

    break;

  case 79:

    {add_command(cTEXT,NULL);}

    break;

  case 80:

    {add_command(cTEXT2, NULL);}

    break;

  case 81:

    {add_command(cTEXTALIGN,NULL);}

    break;

  case 82:

    {add_command(cLOCALIZE,NULL);}

    break;

  case 83:

    {add_command(cLOCALIZE2,NULL);}

    break;

  case 84:

    {add_command(cLOCALIZESTOP, NULL);}

    break;

  case 85:

    {add_command(cDRAWTEXT,NULL);}

    break;

  case 86:

    {add_command(cDRAWRECT,NULL);}

    break;

  case 87:

    {add_command(cDRAWCLEAR,NULL);}

    break;

  case 88:

    {add_command(cCLOSEWIN,NULL);}

    break;

  case 89:

    {add_command(cLAYOUT,NULL);}

    break;

  case 90:

    {add_command(cWINSET4,NULL);}

    break;

  case 91:

    {add_command(cWINSET1,NULL);}

    break;

  case 92:

    {add_command(cWINSET3,NULL);}

    break;

  case 93:

    {add_command(cSHORTCUT,NULL);}

    break;

  case 94:

    {add_command(cTEXTEDIT,NULL);}

    break;

  case 95:

    {add_command(cTEXTADD,NULL);}

    break;

  case 96:

    {add_command(cTEXTSET,NULL);}

    break;

  case 97:

    {add_command(cTEXTSET2,NULL);}

    break;

  case 98:

    {add_command(cTEXTSET3,NULL);}

    break;

  case 99:

    {add_command(cTEXTCOLOR1,NULL);}

    break;

  case 100:

    {add_command(cTEXTCOLOR2,NULL);}

    break;

  case 101:

    {add_command(cTEXTCLEAR,NULL);}

    break;

  case 102:

    {add_command(cDRAWSET1,NULL);}

    break;

  case 103:

    {add_command(cDRAWSET2,NULL);}

    break;

  case 104:

    {add_command(cWINSET2,NULL);}

    break;

  case 105:

    {add_command(cDRAWSET3,NULL);}

    break;

  case 106:

    {add_command(cDRAWSET4,NULL);}

    break;

  case 107:

    {add_command(cVIEW,NULL);}

    break;

  case 108:

    {add_command(cWINCLEAR,NULL);}

    break;

  case 109:

    {add_command(cBOXVIEW,NULL);}

    break;

  case 110:

    {add_command(cBOXVIEWSET,NULL);}

    break;

  case 111:

    {add_command(cTAB,NULL);}

    break;

  case 112:

    {add_command(cTABSET,NULL);}

    break;

  case 113:

    {add_command(cTABADD, NULL);}

    break;

  case 114:

    {add_command(cTABDEL, NULL);}

    break;

  case 115:

    {add_command(cDOT,NULL);}

    break;

  case 116:

    {add_command(cLINE,NULL);}

    break;

  case 117:

    {add_command(cCIRCLE,NULL);}

    break;

  case 118:

    {add_command(cELLIPSE,NULL);}

    break;

  case 119:

    {add_command(cCURVE,NULL);}

    break;

  case 120:

    {add_command(cSLIDER1,NULL);}

    break;

  case 121:

    {add_command(cSLIDER2,NULL);}

    break;

  case 122:

    {add_command(cSLIDER3,NULL);}

    break;

  case 123:

    {add_command(cSLIDER4,NULL);}

    break;

  case 124:

    {add_command(cSLIDER5,NULL);}

    break;

  case 125:

    {add_command(cSLIDER6,NULL);}

    break;

  case 126:

    {add_command(cLAUNCH,NULL);}

    break;

  case 127:

    {add_command(cOPTION1,NULL);}

    break;

  case 128:

    {add_command(cOPTION2,NULL);}

    break;

  case 129:

    {add_command(cOPTION4,NULL);}

    break;

  case 130:

    {add_command(cOPTION5,NULL);}

    break;

  case 131:

    {add_command(cOPTION3,NULL);}

    break;

  case 132:

    {add_command(cBITMAP,NULL);}

    break;

  case 133:

    {add_command(cBITMAPGET, NULL);}

    break;

  case 134:

    {add_command(cBITMAPGET2, NULL);}

    break;

  case 135:

    {add_command(cBITMAPGETICON, NULL);}

    break;

  case 136:

    {add_command(cBITMAPDRAW,NULL);}

    break;

  case 137:

    {add_command(cBITMAPDRAW2,NULL);}

    break;

  case 138:

    {add_command(cBITMAPREMOVE,NULL);}

    break;

  case 139:

    {add_command(cSCREENSHOT,NULL);}

    break;

  case 140:

    {add_command(cCANVAS,NULL);}

    break;

  case 141:

    {add_command(cDROPZONE,NULL);}

    break;

  case 142:

    {add_command(cCOLORCONTROL1,NULL);}

    break;

  case 143:

    {add_command(cCOLORCONTROL2,NULL);}

    break;

  case 144:

    {add_command(cTEXTCONTROL2,NULL);}

    break;

  case 145:

    {add_command(cTEXTCONTROL3,NULL);}

    break;

  case 146:

    {add_command(cTEXTCONTROL4,NULL);}

    break;

  case 147:

    {add_command(cTEXTCONTROL5,NULL);}

    break;

  case 148:

    {add_command(cTREEBOX1,NULL);}

    break;

  case 149:

    {add_command(cTREEBOX2,NULL);}

    break;

  case 150:

    {add_command(cTREEBOX3,NULL);}

    break;

  case 151:

    {add_command(cTREEBOX13,NULL);}

    break;

  case 152:

    {add_command(cTREEBOX12,NULL);}

    break;

  case 153:

    {add_command(cTREEBOX4,NULL);}

    break;

  case 154:

    {add_command(cTREEBOX5,NULL);}

    break;

  case 155:

    {add_command(cTREEBOX7,NULL);}

    break;

  case 156:

    {add_command(cTREEBOX8,NULL);}

    break;

  case 157:

    {add_command(cTREEBOX9,NULL);}

    break;

  case 158:

    {add_command(cTREEBOX10,NULL);}

    break;

  case 159:

    {add_command(cTREEBOX11,NULL);}

    break;

  case 160:

    {add_command(cBUTTONIMAGE,NULL);}

    break;

  case 161:

    {add_command(cCHECKBOXIMAGE,NULL);}

    break;

  case 162:

    {add_command(cCHECKBOXSET,NULL);}

    break;

  case 163:

    {add_command(cRADIOSET,NULL);}

    break;

  case 164:

    {add_command(cTOOLTIP,NULL);}

    break;

  case 165:

    {add_command(cTOOLTIPCOLOR,NULL);}

    break;

  case 166:

    {add_command(cLISTSORT,NULL);}

    break;

  case 167:

    {add_command(cTREESORT,NULL);}

    break;

  case 168:

    {add_command(cFILEBOX,NULL);}

    break;

  case 169:

    {add_command(cCOLUMNBOXADD,NULL);}

    break;

  case 170:

    {add_command(cFILEBOXADD2,NULL);}

    break;

  case 171:

    {add_command(cFILEBOXCLEAR,NULL);}

    break;

  case 172:

    {add_command(cCOLUMNBOXREMOVE,NULL);}

    break;

  case 173:

    {add_command(cCOLUMNBOXSELECT,NULL);}

    break;

  case 174:

    {add_command(cCOLUMNBOXCOLOR,NULL);}

    break;

  case 175:

    {add_command(cCALENDAR,NULL);}

    break;

  case 176:

    {add_command(cCALENDARSET,NULL);}

    break;

  case 177:

    {add_command(cSCROLLBAR,NULL);}

    break;

  case 178:

    {add_command(cSCROLLBARSET1,NULL);}

    break;

  case 179:

    {add_command(cSCROLLBARSET2,NULL);}

    break;

  case 180:

    {add_command(cSCROLLBARSET3,NULL);}

    break;

  case 181:

    {add_command(cDROPBOXSELECT,NULL);}

    break;

  case 182:

    {add_command(cMENU2,NULL);}

    break;

  case 183:

    {add_command(cMENU3,NULL);}

    break;

  case 184:

    {add_command(cSUBMENU1,NULL);}

    break;

  case 185:

    {add_command(cSUBMENU2,NULL);}

    break;

  case 186:

    {add_command(cSUBMENU3,NULL);}

    break;

  case 187:

    {add_command(cSTATUSBAR,NULL);}

    break;

  case 188:

    {add_command(cSTATUSBARSET,NULL);}

    break;

  case 189:

    {add_command(cSTATUSBARSET3,NULL);}

    break;

  case 190:

    {add_command(cSPINCONTROL1,NULL);}

    break;

  case 191:

    {add_command(cSPINCONTROL2,NULL);}

    break;

  case 192:

    {add_command(cCLIPBOARDCOPY,NULL);}

    break;

  case 193:

    {add_command(cPRINTERCONFIG,NULL);}

    break;

  case 194:

    {add_command(cMOUSESET,NULL);}

    break;

  case 195:

    {add_command(cSOUNDSTOP,NULL);}

    break;

  case 196:

    {add_command(cSOUNDSTOP,NULL);}

    break;

  case 197:

    {add_command(cSOUNDWAIT,NULL);}

    break;

  case 198:

    {add_command(cSOUNDWAIT,NULL);}

    break;

  case 199:

    {add_command(cSPLITVIEW1,NULL);}

    break;

  case 200:

    {add_command(cSPLITVIEW2,NULL);}

    break;

  case 201:

    {add_command(cSPLITVIEW3,NULL);}

    break;

  case 202:

    {add_command(cSTACKVIEW1,NULL);}

    break;

  case 203:

    {add_command(cSTACKVIEW2,NULL);}

    break;

  case 204:

    {add_command(cTEXTURL1, NULL);}

    break;

  case 205:

    {add_command(cTEXTURL2, NULL);}

    break;

  case 206:

    {add_command(cATTRIBUTE1, NULL);}

    break;

  case 207:

    {add_command(cATTRIBUTECLEAR, NULL);}

    break;

  case 208:

    {add_command(cPUTCHAR,NULL);}

    break;

  case 209:

    {add_command(cCLEARSCR,NULL);}

    break;

  case 210:

    {add_command(cWAIT,NULL);}

    break;

  case 211:

    {add_command(cBELL,NULL);}

    break;

  case 212:

    {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);}

    break;

  case 213:

    {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);}

    break;

  case 214:

    {create_function(fINKEY);add_command(cPOP,NULL);}

    break;

  case 215:

    {create_function(fSYSTEM2);
	add_command(cPOP,NULL);}

    break;

  case 216:

    {create_poke('s');}

    break;

  case 217:

    {create_poke('d');}

    break;

  case 218:

    {create_poke('S');}

    break;

  case 219:

    {create_poke('D');}

    break;

  case 220:

    {add_command(cEND,NULL);}

    break;

  case 221:

    {create_pushdbl(0);add_command(cEXIT,NULL);}

    break;

  case 222:

    {add_command(cEXIT,NULL);}

    break;

  case 223:

    {create_docu((yyvsp[0].symbol));}

    break;

  case 224:

    {add_command(cBIND,NULL);}

    break;

  case 225:

    {add_command(cPOPSTRSYM,dotify((yyvsp[-2].symbol),FALSE));}

    break;

  case 226:

    {create_changestring(fMID);}

    break;

  case 227:

    {create_changestring(fMID2);}

    break;

  case 228:

    {create_changestring(fLEFT);}

    break;

  case 229:

    {create_changestring(fRIGHT);}

    break;

  case 230:

    {create_doarray(dotify((yyvsp[-2].symbol),FALSE),ASSIGNSTRINGARRAY);}

    break;

  case 233:

    {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 234:

    {create_myopen(OPEN_HAS_STREAM);}

    break;

  case 235:

    {add_command(cSWAP,NULL);create_pushstr("r");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 236:

    {add_command(cSWAP,NULL);create_pushstr("w");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 237:

    {add_command(cSEEK,NULL);}

    break;

  case 238:

    {add_command(cSEEK2,NULL);}

    break;

  case 239:

    {add_command(cPUSHSTRPTR,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 240:

    {create_doarray(dotify((yyvsp[-3].symbol),FALSE),GETSTRINGPOINTER);}

    break;

  case 241:

    {add_command(cPUSHSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 243:

    {add_command(cSTRINGFUNCTION_OR_ARRAY,(yyvsp[0].symbol));}

    break;

  case 244:

    {if ((yyvsp[0].string)==NULL) {error(ERROR,"String not terminated");create_pushstr("");} else {create_pushstr((yyvsp[0].string));}}

    break;

  case 245:

    {add_command(cCONCAT,NULL);}

    break;

  case 247:

    {create_function(fLEFT);}

    break;

  case 248:

    {create_function(fRIGHT);}

    break;

  case 249:

    {create_function(fMID);}

    break;

  case 250:

    {create_function(fMID2);}

    break;

  case 251:

    {create_function(fSTR);}

    break;

  case 252:

    {create_function(fSTR2);}

    break;

  case 253:

    {create_function(fSTR3);}

    break;

  case 254:

    {create_pushdbl(-1);create_function(fINKEY);}

    break;

  case 255:

    {create_pushdbl(-1);create_function(fINKEY);}

    break;

  case 256:

    {create_function(fINKEY);}

    break;

  case 257:

    {create_function(fCHR);}

    break;

  case 258:

    {create_function(fUPPER);}

    break;

  case 259:

    {create_function(fLOWER);}

    break;

  case 260:

    {create_function(fLTRIM);}

    break;

  case 261:

    {create_function(fRTRIM);}

    break;

  case 262:

    {create_function(fTRIM);}

    break;

  case 263:

    {create_function(fSYSTEM);}

    break;

  case 264:

    {create_function(fDATE);}

    break;

  case 265:

    {create_function(fDATE);}

    break;

  case 266:

    {create_function(fTIME);}

    break;

  case 267:

    {create_function(fTIME);}

    break;

  case 268:

    {create_function(fPEEK2);}

    break;

  case 269:

    {create_function(fPEEK3);}

    break;

  case 270:

    {add_command(cTOKENALT2,NULL);}

    break;

  case 271:

    {add_command(cTOKENALT,NULL);}

    break;

  case 272:

    {add_command(cSPLITALT2,NULL);}

    break;

  case 273:

    {add_command(cSPLITALT,NULL);}

    break;

  case 274:

    {create_function(fGETCHAR);}

    break;

  case 275:

    {create_function(fHEX);}

    break;

  case 276:

    {create_function(fBIN);}

    break;

  case 277:

    {create_execute(1);add_command(cSWAP,NULL);add_command(cPOP,NULL);}

    break;

  case 278:

    {create_function(fMESSAGE);}

    break;

  case 279:

    {create_function(fMESSAGE);}

    break;

  case 280:

    {create_function(fMOUSEMOVE);}

    break;

  case 281:

    {create_function(fMOUSEMOVE);}

    break;

  case 282:

    {create_function(fTRANSLATE);}

    break;

  case 283:

    {create_function(fMENUTRANSLATE);}

    break;

  case 284:

    {create_function(fTEXTGET);}

    break;

  case 285:

    {create_function(fTEXTGET3);}

    break;

  case 286:

    {create_function(fTEXTGET6);}

    break;

  case 287:

    {create_function(fTEXTCONTROLGET);}

    break;

  case 288:

    {create_function(fLOAD);}

    break;

  case 289:

    {create_function(fSAVE);}

    break;

  case 290:

    {create_function(fMOUSE);}

    break;

  case 291:

    {create_function(fKEYBOARD);}

    break;

  case 292:

    {create_function(fCLIPBOARDPASTE);}

    break;

  case 293:

    {create_function(fCOLUMNBOXGET);}

    break;

  case 294:

    {create_function(fCALENDAR);}

    break;

  case 295:

    {create_function(fLISTBOXGET);}

    break;

  case 296:

    {create_function(fTREEBOXGET);}

    break;

  case 297:

    {create_function(fPOPUPMENU);}

    break;

  case 298:

    {create_function(fDROPBOXGET);}

    break;

  case 299:

    {create_function(fDRAWGET3);}

    break;

  case 300:

    {create_function(fATTRIBUTEGET1);}

    break;

  case 301:

    {add_command(cPOPDBLSYM,dotify((yyvsp[-2].symbol),FALSE));}

    break;

  case 302:

    {create_doarray((yyvsp[-2].symbol),ASSIGNARRAY);}

    break;

  case 303:

    {add_command(cORSHORT,NULL);pushlabel();}

    break;

  case 304:

    {poplabel();create_boole('|');}

    break;

  case 305:

    {add_command(cANDSHORT,NULL);pushlabel();}

    break;

  case 306:

    {poplabel();create_boole('&');}

    break;

  case 307:

    {create_boole('!');}

    break;

  case 308:

    {create_dblrelop('=');}

    break;

  case 309:

    {create_dblrelop('!');}

    break;

  case 310:

    {create_dblrelop('<');}

    break;

  case 311:

    {create_dblrelop('{');}

    break;

  case 312:

    {create_dblrelop('>');}

    break;

  case 313:

    {create_dblrelop('}');}

    break;

  case 314:

    {add_command(cTESTEOF,NULL);}

    break;

  case 315:

    {add_command(cGLOB,NULL);}

    break;

  case 316:

    {create_pushdbl((yyvsp[0].fnum));}

    break;

  case 317:

    {add_command(cARDIM,"");}

    break;

  case 318:

    {add_command(cARDIM,"");}

    break;

  case 319:

    {add_command(cARSIZE,"");}

    break;

  case 320:

    {add_command(cARSIZE,"");}

    break;

  case 321:

    {add_command(cFUNCTION_OR_ARRAY,(yyvsp[0].symbol));}

    break;

  case 322:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 323:

    {create_dblbin('+');}

    break;

  case 324:

    {create_dblbin('-');}

    break;

  case 325:

    {create_dblbin('*');}

    break;

  case 326:

    {create_dblbin('/');}

    break;

  case 327:

    {create_dblbin('^');}

    break;

  case 328:

    {add_command(cNEGATE,NULL);}

    break;

  case 329:

    {create_strrelop('=');}

    break;

  case 330:

    {create_strrelop('!');}

    break;

  case 331:

    {create_strrelop('<');}

    break;

  case 332:

    {create_strrelop('{');}

    break;

  case 333:

    {create_strrelop('>');}

    break;

  case 334:

    {create_strrelop('}');}

    break;

  case 337:

    {create_pusharrayref(dotify((yyvsp[-2].symbol),FALSE),stNUMBERARRAYREF);}

    break;

  case 338:

    {create_pusharrayref(dotify((yyvsp[-2].symbol),FALSE),stSTRINGARRAYREF);}

    break;

  case 340:

    {create_function(fSIN);}

    break;

  case 341:

    {create_function(fASIN);}

    break;

  case 342:

    {create_function(fCOS);}

    break;

  case 343:

    {create_function(fACOS);}

    break;

  case 344:

    {create_function(fTAN);}

    break;

  case 345:

    {create_function(fATAN);}

    break;

  case 346:

    {create_function(fATAN2);}

    break;

  case 347:

    {create_function(fEXP);}

    break;

  case 348:

    {create_function(fLOG);}

    break;

  case 349:

    {create_function(fLOG2);}

    break;

  case 350:

    {create_function(fSQRT);}

    break;

  case 351:

    {create_function(fSQR);}

    break;

  case 352:

    {create_function(fINT);}

    break;

  case 353:

    {create_function(fFRAC);}

    break;

  case 354:

    {create_function(fABS);}

    break;

  case 355:

    {create_function(fSIG);}

    break;

  case 356:

    {create_function(fMOD);}

    break;

  case 357:

    {create_function(fRAN);}

    break;

  case 358:

    {create_function(fRAN2);}

    break;

  case 359:

    {create_function(fMIN);}

    break;

  case 360:

    {create_function(fMAX);}

    break;

  case 361:

    {create_function(fLEN);}

    break;

  case 362:

    {create_function(fVAL);}

    break;

  case 363:

    {create_function(fASC);}

    break;

  case 364:

    {create_function(fDEC);}

    break;

  case 365:

    {create_function(fDEC2);}

    break;

  case 366:

    {if (check_compat) error(WARNING,"instr() has changed in version 2.712"); create_function(fINSTR);}

    break;

  case 367:

    {create_function(fINSTR2);}

    break;

  case 368:

    {create_function(fRINSTR);}

    break;

  case 369:

    {create_function(fRINSTR2);}

    break;

  case 370:

    {create_function(fSYSTEM2);}

    break;

  case 371:

    {create_function(fPEEK4);}

    break;

  case 372:

    {create_function(fPEEK);}

    break;

  case 373:

    {create_function(fAND);}

    break;

  case 374:

    {create_function(fOR);}

    break;

  case 375:

    {create_function(fEOR);}

    break;

  case 376:

    {create_function(fTELL);}

    break;

  case 377:

    {add_command(cTOKEN2,NULL);}

    break;

  case 378:

    {add_command(cTOKEN,NULL);}

    break;

  case 379:

    {add_command(cSPLIT2,NULL);}

    break;

  case 380:

    {add_command(cSPLIT,NULL);}

    break;

  case 381:

    {create_execute(0);add_command(cSWAP,NULL);add_command(cPOP,NULL);}

    break;

  case 382:

    {create_myopen(0);}

    break;

  case 383:

    {create_myopen(OPEN_HAS_MODE);}

    break;

  case 384:

    {create_myopen(OPEN_HAS_STREAM);}

    break;

  case 385:

    {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 386:

    {create_function(fDRAWIMAGE);}

    break;

  case 387:

    {create_function(fDRAWIMAGE2);}

    break;

  case 388:

    {create_function(fDRAWSVG);}

    break;

  case 389:

    {create_function(fNUMWINDOWS);}

    break;

  case 390:

    {create_function(fISMOUSEIN);}

    break;

  case 391:

    {create_function(fCOLUMNBOXCOUNT);}

    break;

  case 392:

    {create_function(fWINDOWGET);}

    break;

  case 393:

    {create_function(fVIEWGET);}

    break;

  case 394:

    {create_function(fALERT);}

    break;

  case 395:

    {create_function(fLISTBOXCOUNT);}

    break;

  case 396:

    {create_function(fTREEBOXCOUNT);}

    break;

  case 397:

    {create_function(fSCROLLBARGET);}

    break;

  case 398:

    {create_function(fSPLITVIEWGET);}

    break;

  case 399:

    {create_function(fSTACKVIEWGET);}

    break;

  case 400:

    {create_function(fTABVIEWGET);}

    break;

  case 401:

    {create_function(fSPINCONTROLGET);}

    break;

  case 402:

    {create_function(fDROPBOXCOUNT);}

    break;

  case 403:

    {create_function(fSLIDERGET);}

    break;

  case 404:

    {create_function(fCOLORCONTROLGET);}

    break;

  case 405:

    {create_function(fTEXTGET2);}

    break;

  case 406:

    {create_function(fTEXTGET4);}

    break;

  case 407:

    {create_function(fTEXTGET5);}

    break;

  case 408:

    {create_function(fDRAWGET1);}

    break;

  case 409:

    {create_function(fDRAWGET2);}

    break;

  case 410:

    {create_function(fDRAWGET4);}

    break;

  case 411:

    {create_function(fMESSAGESEND);}

    break;

  case 412:

    {create_function(fTHREADKILL);}

    break;

  case 413:

    {create_function(fTHREADGET);}

    break;

  case 414:

    {create_function(fPRINTER);}

    break;

  case 415:

    {create_function(fSOUND);}

    break;

  case 416:

    {create_function(fISCOMPUTERON);}

    break;

  case 417:

    {create_function(fLISTBOXGETNUM);}

    break;

  case 418:

    {create_function(fDROPBOXGETNUM);}

    break;

  case 419:

    {create_function(fTREEBOXGETNUM);}

    break;

  case 420:

    {create_function(fCOLUMNBOXGETNUM);}

    break;

  case 421:

    {create_function(fTREEBOXGETOPT);}

    break;

  case 422:

    {create_function(fBITMAPSAVE);}

    break;

  case 423:

    {create_function(fBITMAPLOAD);}

    break;

  case 424:

    {create_function(fBITMAPGET);}

    break;

  case 425:

    {create_function(fBITMAPCOLOR);}

    break;

  case 426:

    {create_function(fATTRIBUTEGET2);}

    break;

  case 427:

    {(yyval.fnum)=(yyvsp[0].fnum);}

    break;

  case 428:

    {(yyval.fnum)=(yyvsp[0].fnum);}

    break;

  case 429:

    {(yyval.fnum)=-(yyvsp[0].fnum);}

    break;

  case 430:

    {(yyval.fnum)=(yyvsp[0].fnum);}

    break;

  case 431:

    {(yyval.fnum)=strtod((yyvsp[0].digits),NULL);}

    break;

  case 432:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[0].digits),FALSE));}

    break;

  case 433:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 434:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'D');}

    break;

  case 435:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'D');}

    break;

  case 436:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'S');}

    break;

  case 437:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'S');}

    break;

  case 438:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[-3].symbol),FALSE));}

    break;

  case 439:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[-3].symbol),FALSE));}

    break;

  case 440:

    {add_command(cPUSHFREE,NULL);}

    break;

  case 447:

    {missing_endsub++;missing_endsub_line=mylineno;pushlabel();report_missing(WARNING,"do not define a function in a loop or an if-statement");if (function_type!=ftNONE) {error(ERROR,"nested functions not allowed");YYABORT;}}

    break;

  case 448:

    {if (exported) create_sublink((yyvsp[0].symbol)); create_label((yyvsp[0].symbol),cUSER_FUNCTION);
	               add_command(cPUSHSYMLIST,NULL);add_command(cCLEARREFS,NULL);firstref=lastref=lastcmd;
		       create_numparam();}

    break;

  case 449:

    {create_require(stFREE);add_command(cPOP,NULL);}

    break;

  case 450:

    {add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNONE,function_type);function_type=ftNONE;add_command(cRET_FROM_FUN,NULL);lastref=NULL;create_endfunction();poplabel();}

    break;

  case 451:

    {if (missing_endsub) {sprintf(string,"%d end-sub(s) are missing (last at line %d)",missing_endsub,missing_endsub_line);error(ERROR,string);} YYABORT;}

    break;

  case 452:

    {missing_endsub--;}

    break;

  case 453:

    {function_type=ftNUMBER;current_function=my_strdup(dotify((yyvsp[0].symbol),FALSE));(yyval.symbol)=my_strdup(dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 454:

    {function_type=ftSTRING;current_function=my_strdup(dotify((yyvsp[0].symbol),FALSE));(yyval.symbol)=my_strdup(dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 455:

    {exported=FALSE;}

    break;

  case 456:

    {exported=TRUE;}

    break;

  case 457:

    {exported=FALSE;}

    break;

  case 458:

    {exported=TRUE;}

    break;

  case 461:

    {create_makelocal(dotify((yyvsp[0].symbol),FALSE),syNUMBER);}

    break;

  case 462:

    {create_makelocal(dotify((yyvsp[0].symbol),FALSE),sySTRING);}

    break;

  case 463:

    {create_makelocal(dotify((yyvsp[-3].symbol),FALSE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),FALSE),'d');}

    break;

  case 464:

    {create_makelocal(dotify((yyvsp[-3].symbol),FALSE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),FALSE),'s');}

    break;

  case 467:

    {create_makestatic(dotify((yyvsp[0].symbol),TRUE),syNUMBER);}

    break;

  case 468:

    {create_makestatic(dotify((yyvsp[0].symbol),TRUE),sySTRING);}

    break;

  case 469:

    {create_makestatic(dotify((yyvsp[-3].symbol),TRUE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),TRUE),'D');}

    break;

  case 470:

    {create_makestatic(dotify((yyvsp[-3].symbol),TRUE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),TRUE),'S');}

    break;

  case 474:

    {create_require(stNUMBER);create_makelocal(dotify((yyvsp[0].symbol),FALSE),syNUMBER);add_command(cPOPDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 475:

    {create_require(stSTRING);create_makelocal(dotify((yyvsp[0].symbol),FALSE),sySTRING);add_command(cPOPSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 476:

    {create_require(stNUMBERARRAYREF);create_arraylink(dotify((yyvsp[-2].symbol),FALSE),stNUMBERARRAYREF);}

    break;

  case 477:

    {create_require(stSTRINGARRAYREF);create_arraylink(dotify((yyvsp[-2].symbol),FALSE),stSTRINGARRAYREF);}

    break;

  case 478:

    {missing_next++;missing_next_line=mylineno;}

    break;

  case 479:

    {pushname(dotify((yyvsp[-1].symbol),FALSE)); /* will be used by next_symbol to check equality */
	     add_command(cRESETSKIPONCE,NULL);
	     pushgoto();add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);}

    break;

  case 480:

    { /* pushes another expression */
	     add_command(cSKIPONCE,NULL);
	     pushlabel();
	     add_command(cSTARTFOR,NULL);
	     add_command(cPOPDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     poplabel();
	     add_command(cPUSHDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     add_command(cFORINCREMENT,NULL);
	     add_command(cPOPDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     add_command(cPUSHDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     add_command(cFORCHECK,NULL);
	     add_command(cDECIDE,NULL);
             pushlabel();}

    break;

  case 481:

    {
             swap();popgoto();poplabel();}

    break;

  case 482:

    {create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 483:

    {if (missing_next) {sprintf(string,"%d next(s) are missing (last at line %d)",missing_next,missing_next_line);error(ERROR,string);} YYABORT;}

    break;

  case 484:

    {missing_next--;}

    break;

  case 485:

    {create_pushdbl(1);}

    break;

  case 487:

    {pop(stSTRING);}

    break;

  case 488:

    {if (strcmp(pop(stSTRING)->pointer,dotify((yyvsp[0].symbol),FALSE))) 
             {error(ERROR,"'for' and 'next' do not match"); YYABORT;}
           }

    break;

  case 489:

    {push_switch_id();add_command(cPUSH_SWITCH_MARK,NULL);create_break_mark(0,1);
	add_command(cCONTINUE_CORRECTION,NULL);}

    break;

  case 490:

    {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);create_clean_switch_mark(0,FALSE);pop_switch_id();}

    break;

  case 491:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep);}

    break;

  case 492:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep);}

    break;

  case 496:

    {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);}

    break;

  case 497:

    {add_command(cSWITCH_COMPARE,NULL);add_command(cDECIDE,NULL);add_command(cMINOR_BREAK,NULL);create_break_mark(1,0);}

    break;

  case 498:

    {add_command(cNEXT_CASE,NULL);}

    break;

  case 500:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep); create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);}

    break;

  case 502:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_loop++;missing_loop_line=mylineno;pushgoto();}

    break;

  case 504:

    {if (missing_loop) {sprintf(string,"%d loop(s) are missing (last at line %d)",missing_loop,missing_loop_line);error(ERROR,string);} YYABORT;}

    break;

  case 505:

    {missing_loop--;popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 506:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_wend++;missing_wend_line=mylineno;pushgoto();}

    break;

  case 507:

    {add_command(cDECIDE,NULL);
	      pushlabel();}

    break;

  case 509:

    {if (missing_wend) {sprintf(string,"%d wend(s) are missing (last at line %d)",missing_wend,missing_wend_line);error(ERROR,string);} YYABORT;}

    break;

  case 510:

    {missing_wend--;swap();popgoto();poplabel();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 511:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_until++;missing_until_line=mylineno;pushgoto();}

    break;

  case 513:

    {if (missing_until) {sprintf(string,"%d until(s) are missing (last at line %d)",missing_until,missing_until_line);error(ERROR,string);} YYABORT;}

    break;

  case 514:

    {missing_until--;add_command(cDECIDE,NULL);popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 515:

    {add_command(cDECIDE,NULL);storelabel();pushlabel();}

    break;

  case 516:

    {missing_endif++;missing_endif_line=mylineno;}

    break;

  case 517:

    {swap();matchgoto();swap();poplabel();}

    break;

  case 518:

    {poplabel();}

    break;

  case 520:

    {if (missing_endif) {sprintf(string,"%d endif(s) are missing (last at line %d)",missing_endif,missing_endif_line);error(ERROR,string);} YYABORT;}

    break;

  case 521:

    {missing_endif--;}

    break;

  case 522:

    {fi_pending++;add_command(cDECIDE,NULL);pushlabel();}

    break;

  case 523:

    {poplabel();}

    break;

  case 527:

    {add_command(cDECIDE,NULL);pushlabel();}

    break;

  case 528:

    {swap();matchgoto();swap();poplabel();}

    break;

  case 533:

    {add_command(cCHKPROMPT,NULL);}

    break;

  case 535:

    {create_myread('d',tileol);add_command(cPOPDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 536:

    {create_myread('d',tileol);create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNARRAY);}

    break;

  case 537:

    {create_myread('s',tileol);add_command(cPOPSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 538:

    {create_myread('s',tileol);create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNSTRINGARRAY);}

    break;

  case 541:

    {create_readdata('d');add_command(cPOPDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 542:

    {create_readdata('d');create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNARRAY);}

    break;

  case 543:

    {create_readdata('s');add_command(cPOPSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 544:

    {create_readdata('s');create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNSTRINGARRAY);}

    break;

  case 545:

    {create_strdata((yyvsp[0].string));}

    break;

  case 546:

    {create_dbldata((yyvsp[0].fnum));}

    break;

  case 547:

    {create_strdata((yyvsp[0].string));}

    break;

  case 548:

    {create_dbldata((yyvsp[0].fnum));}

    break;

  case 552:

    {create_print('s');}

    break;

  case 553:

    {create_print('s');}

    break;

  case 554:

    {create_print('d');}

    break;

  case 555:

    {create_print('u');}

    break;

  case 556:

    {create_print('U');}

    break;

  case 557:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[0].symbol),FALSE));create_pps(cPUSHSTREAM,1);}

    break;

  case 558:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 559:

    {create_pushdbl(atoi((yyvsp[0].digits)));create_pps(cPUSHSTREAM,1);}

    break;

  case 560:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 561:

    {create_pps(cPUSHSTREAM,1);}

    break;

  case 562:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 563:

    {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);}

    break;

  case 564:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 565:

    {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);}

    break;

  case 566:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 567:

    {create_pushstr("?");create_print('s');}

    break;

  case 568:

    {create_pushstr((yyvsp[0].string));create_print('s');}

    break;

  case 569:

    {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 570:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[0].symbol),FALSE));create_pps(cPUSHSTREAM,0);}

    break;

  case 571:

    {create_pushdbl(atoi((yyvsp[0].digits)));create_pps(cPUSHSTREAM,0);}

    break;

  case 572:

    {create_pps(cPUSHSTREAM,0);}

    break;

  case 573:

    {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 574:

    {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 575:

    {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 576:

    {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 577:

    {add_command(cMOVE,NULL);create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 578:

    {add_command(cMOVE,NULL);create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 579:

    {add_command(cMOVE,NULL);create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 580:

    {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}

    break;

  case 581:

    {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}

    break;

  case 582:

    {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}

    break;

  case 585:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;

  case 586:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;

  case 587:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;

  case 588:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;



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
