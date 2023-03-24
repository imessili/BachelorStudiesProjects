
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 20 "syn.y"

int entier;
char* str;
float real;




/* Line 1676 of yacc.c  */
#line 112 "syn.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


