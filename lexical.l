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

"boolean"     { printf("\nboolean "); return (_boolean); } 
"break"       { printf("\nbreak "); return (_break); }
"class"       { printf("\nclass "); return (_class); } 
"double"      { printf("\ndouble "); return (_double); }
"else"        { printf("\nelse "); return (_else); } 
"extends"     { printf("\nextends "); return (_extends); }
"false"       { printf("\nbooleanconstant "); return (_booleanconstant); }
"for"         { printf("\nfor "); return (_for); } 
"if"          { printf("\nif "); return (_if); }
"int"         { printf("\nint "); return (_int); } 
"implements"  { printf("\nimplements "); return (_implements); } 
"interface"   { printf("\ninterface "); return (_interface); } 
"newarray"    { printf("\nnewarray "); return (_newarray); } 
"println"     { printf("\nprintln "); return (_println); } 
"readln"      { printf("\nreadln "); return (_readln); }
"return"      { printf("\nreturn "); return (_return); }
"string"      { printf("\nstring "); return (_string); }
"true"        { printf("\nbooleanconstant "); return (_booleanconstant); } 
"void"        { printf("\nvoid "); return (_void); } 
"while"       { printf("\nwhile "); return (_while); }

"+"			    {printf("\n+ "); return _plus;}
"-"			    {printf("\n- "); return _minus;}
"*"			    {printf("\n* "); return _multiplication;}
"/"			    {printf("\n/ "); return _division;}
"%"			    {printf("\n%s " , yytext); return _mod;}
"<"			    {printf("\n< "); return _less;}
"<="			{printf("\n<= "); return _lessequal;}
">"			    {printf("\n> "); return _greater;}
">="			{printf("\n>= "); return _greaterequal;}
"=="			{printf("\n== "); return _equal;}
"!="			{printf("\n!= "); return _notequal;}
"&&"			{printf("\n&& "); return _and;}
"||"			{printf("\n|| "); return _or;}
"!"			    {printf("\n! "); return _not;}
"="			    {printf("\n= "); return _assignop;}
";"			    {printf("\n; "); return _semicolon;}
","			    {printf("\n, "); return _comma;}
"."			    {printf("\n. "); return _period;}
"("			    {printf("\n( "); return _leftparen;}
")"			    {printf("\n) "); return _rightparen;}
"["			    {printf("\n[ "); return _leftbracket;}
"]"			    {printf("\n] "); return _rightbracket;}
"{"			    {printf("\n{ "); return _leftbrace;}
"}"			    {printf("\n} "); return _rightbrace;}

{intConstant}       {printf("\nintconstant "); return _intconstant;}
{doubleConstant}    {printf("\ndoubleconstant "); return _doubleconstant;}
{stringConstant}    {printf("\nstringconstant "); return _stringconstant;}
{identifier}        {printf("\nid "); return (_id); return _id;}
.                   {; /* ignore unknown characters */ }

"/*"(([^*]|(("*"+)[^*/]))*)("*"+)"/"\n {; /* multi-line comment */ }
"//"((.)*)\n                           {; /* single-line comment */ }

\n                          {printf("\n ");} 
[ \t]					    ; 
"//".*\n				    ;
([ ])+                        ;  

%%
