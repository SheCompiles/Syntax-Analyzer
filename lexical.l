%{
    #include "y.tab.h"
    #include <stdio.h>
    #include <string.h>
%}

hex               [0][xX][0-9A-Fa-f]+
digit             [0-9]+
doubleOne         [0-9]+\.[0-9]*([Ee][+-]?[0-9]+)?
doubleTwo         [0-9]+([Ee][+-]?[0-9]+)? 
doubleConstant    {doubleOne}|{doubleTwo} 
intConstant       {hex}|{digit}
stringConstant    \"[^"\n]*\"  
identifier        [a-zA-Z]([a-zA-Z0-9])* 

%%

"boolean"     { printf("boolean "); return (_boolean); } 
"break"       { printf("break "); return (_break); }
"class"       { printf("class "); return (_class); } 
"double"      { printf("double "); return (_double); }
"else"        { printf("else "); return (_else); } 
"extends"     { printf("extends "); return (_extends); }
"false"       { printf("booleanconstant "); return (_booleanconstant); }
"for"         { printf("for "); return (_for); } 
"if"          { printf("if "); return (_if); }
"int"         { printf("int "); return (_int); } 
"implements"  { printf("implements "); return (_implements); } 
"interface"   { printf("interface "); return (_interface); } 
"newarray"    { printf("newarray "); return (_newarray); } 
"println"     { printf("println "); return (_println); } 
"readln"      { printf("readln "); return (_readln); }
"return"      { printf("return "); return (_return); }
"string"      { printf("string "); return (_string); }
"true"        { printf("booleanconstant "); return (_booleanconstant); } 
"void"        { printf("void "); return (_void); } 
"while"       { printf("while "); return (_while); }

"+"			    {printf("+ "); return _plus;}
"-"			    {printf("- "); return _minus;}
"*"			    {printf("* "); return _multiplication;}
"/"			    {printf("/ "); return _division;}
"%"			    {printf("\n%s " , yytext); return _mod;}
"<"			    {printf("< "); return _less;}
"<="			{printf("<= "); return _lessequal;}
">"			    {printf("> "); return _greater;}
">="			{printf(">= "); return _greaterequal;}
"=="			{printf("== "); return _equal;}
"!="			{printf("!= "); return _notequal;}
"&&"			{printf("&& "); return _and;}
"||"			{printf("|| "); return _or;}
"!"			    {printf("! "); return _not;}
"="			    {printf("= "); return _assignop;}
";"			    {printf("; "); return _semicolon;}
","			    {printf(", "); return _comma;}
"."			    {printf(". "); return _period;}
"("			    {printf("( "); return _leftparen;}
")"			    {printf(") "); return _rightparen;}
"["			    {printf("[ "); return _leftbracket;}
"]"			    {printf("] "); return _rightbracket;}
"{"			    {printf("{ "); return _leftbrace;}
"}"			    {printf("} "); return _rightbrace;}

{intConstant}       {printf("intconstant "); return _intconstant;}
{doubleConstant}    {printf("doubleconstant "); return _doubleconstant;}
{stringConstant}    {printf("stringconstant "); return _stringconstant;}
{identifier}        {printf("id "); return (_id); return _id;}
.                   {; /* ignore unknown characters */ }

"/*"(([^*]|(("*"+)[^*/]))*)("*"+)"/"\n {; /* multi-line comment */ }
"//"((.)*)\n                           {; /* single-line comment */ }

\n                          {printf("\n ");} 
[ \t]					    ; 
"//".*\n				    ;
([ ])+                      ;  

%%