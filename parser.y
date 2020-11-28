%{
#include <stdio.h>
extern int yylex();
extern int yyparse();
void yyerror(char *s);
%}

%start PARSER

%token _leftparen _rightparen _leftbrace _rightbrace _leftbracket _rightbracket _semicolon 
%token _boolean _double _int _string _class _implements _interface _void _id
%token _if _else _break _extends _for _newarray _println _readln _return _while _comma _period _intconstant _doubleconstant _stringconstant _booleanconstant 

%left _assignop _or _and _equal _notequal _less _lessequal _greater _greaterequal _plus _minus _multiplication _division _mod
%left _leftbracket _rightbracket _period
%right _not

/* expect 1 */

%%

PARSER : START {printf("[Reduce %i%s", yyn, "]");}
       ;

/* Left-Recursion */
START : EXPR1        {printf("[Reduce %i%s", yyn, "]");}
      | START EXPR1  {printf("[Reduce %i%s", yyn, "]");}
      ;

EXPR1 : VAR_DECL  {printf("[Reduce %i%s", yyn, "]");} 
      ;

VAR_DECL : VAR _semicolon {printf("[Reduce %i%s", yyn, "]");}
	 ;

VAR : TYPE _id {printf("[Reduce %i%s", yyn, "]");}
    ;

TYPE : _int         {printf("[Reduce %i%s", yyn, "]");}
     | _double      {printf("[Reduce %i%s", yyn, "]");}
     | _boolean     {printf("[Reduce %i%s", yyn, "]");}
     | _string      {printf("[Reduce %i%s", yyn, "]");}
     | _id          {printf("[Reduce %i%s", yyn, "]");}
     ;

VAR_PLUS : VAR                   {printf("[Reduce %i%s", yyn, "]");}
	 | VAR_PLUS _comma VAR   {printf("[Reduce %i%s", yyn, "]");}
         ;

FORMALS : VAR_PLUS           {printf("[Reduce %i%s", yyn, "]");}
        | /* EPSILON */      {printf("[Reduce %i%s", yyn, "]");}
        ;

LVALUE : _id                  {printf("[Reduce %i%s", yyn, "]");} 
       | LVALUE LVALUE_EXPR   {printf("[Reduce %i%s", yyn, "]");}
       ;

LVALUE_EXPR : _leftbracket EXPR _rightbracket  {printf("[Reduce %i%s", yyn, "]");}
	    | LVALUE_EXPR PRODPERIODID         {printf("[Reduce %i%s", yyn, "]");}
	    ;

CALL : _id _leftparen ACTUALS _rightparen                {printf("[Reduce %i%s", yyn, "]");}
     | _id PRODPERIODID _leftparen ACTUALS _rightparen   {printf("[Reduce %i%s", yyn, "]");}
     ;

PRODPERIODID : _period _id
	     ;

ACTUALS : EXPRS           {printf("[Reduce %i%s", yyn, "]");}
 	| /* EPSILON */   {printf("[Reduce %i%s", yyn, "]");}
 	;

CONSTANT : _intconstant      {printf("[Reduce %i%s", yyn, "]");}
         | _doubleconstant   {printf("[Reduce %i%s", yyn, "]");}
         | _stringconstant   {printf("[Reduce %i%s", yyn, "]");}
         | _booleanconstant  {printf("[Reduce %i%s", yyn, "]");}
         ;

%%

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
