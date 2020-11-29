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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

