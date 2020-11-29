/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     _newarray = 279,
     _println = 280,
     _readln = 281,
     _return = 282,
     _while = 283,
     _comma = 284,
     _period = 285,
     _intconstant = 286,
     _doubleconstant = 287,
     _stringconstant = 288,
     _booleanconstant = 289,
     _mod = 290,
     _division = 291,
     _multiplication = 292,
     _minus = 293,
     _plus = 294,
     _greaterequal = 295,
     _greater = 296,
     _lessequal = 297,
     _less = 298,
     _notequal = 299,
     _equal = 300,
     _and = 301,
     _or = 302,
     _assignop = 303,
     _not = 304,
     IF_ONLY = 305
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
#define _newarray 279
#define _println 280
#define _readln 281
#define _return 282
#define _while 283
#define _comma 284
#define _period 285
#define _intconstant 286
#define _doubleconstant 287
#define _stringconstant 288
#define _booleanconstant 289
#define _mod 290
#define _division 291
#define _multiplication 292
#define _minus 293
#define _plus 294
#define _greaterequal 295
#define _greater 296
#define _lessequal 297
#define _less 298
#define _notequal 299
#define _equal 300
#define _and 301
#define _or 302
#define _assignop 303
#define _not 304
#define IF_ONLY 305




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

