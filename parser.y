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
%nonassoc IF_ONLY 
%nonassoc _else

%expect 1 

%%

PARSER : START {printf("[Reduce %i%s", yyn, "]");}
       ;

/* Left-Recursion */
START : EXPR1        {printf("[Reduce %i%s", yyn, "]");}
      | START EXPR1  {printf("[Reduce %i%s", yyn, "]");}
      ;

EXPR1 : VAR_DECL        {printf("[Reduce %i%s", yyn, "]");} 
      | FUNCTION_DECL   {printf("[Reduce %i%s", yyn, "]");}  
      | CLASS_DECL      {printf("[Reduce %i%s", yyn, "]");} 
      | INTERFACE_DECL  {printf("[Reduce %i%s", yyn, "]");} 
      ;

VAR_DECL : VAR _semicolon {printf("[Reduce %i%s", yyn, "]");}
         ;

VAR_DECLS : VAR_DECLS VAR_DECL   {printf("[Reduce %i%s", yyn, "]");}
          | /* ZERO */           {printf("[Reduce %i%s", yyn, "]");}
          ;

VAR : TYPE _id {printf("[Reduce %i%s", yyn, "]");}
    ;

TYPE : _int         {printf("[Reduce %i%s", yyn, "]");}
     | _double      {printf("[Reduce %i%s", yyn, "]");}
     | _boolean     {printf("[Reduce %i%s", yyn, "]");}
     | _string      {printf("[Reduce %i%s", yyn, "]");}
     | _id          {printf("[Reduce %i%s", yyn, "]");}
     ;
     
FUNCTION_DECL : TYPE _id _leftparen FORMALS _rightparen STMT_BLOCK   {printf("[Reduce %i%s", yyn, "]");} 
              | _void _id _leftparen FORMALS _rightparen STMT_BLOCK  {printf("[Reduce %i%s", yyn, "]");} 
              ;

VAR_PLUS : VAR                   {printf("[Reduce %i%s", yyn, "]");}
	 | VAR_PLUS _comma VAR   {printf("[Reduce %i%s", yyn, "]");}
	 ;

FORMALS : VAR_PLUS           {printf("[Reduce %i%s", yyn, "]");}
        | /* EPSILON */      {printf("[Reduce %i%s", yyn, "]");}
        ;
	
EXTEND : _extends _id    {printf("[Reduce %i%s", yyn, "]");} 
       | /* ZERO */      {printf("[Reduce %i%s", yyn, "]");} 
       ;

ID_PLUS : _id                  {printf("[Reduce %i%s", yyn, "]");} 
        | ID_PLUS _comma _id   {printf("[Reduce %i%s", yyn, "]");} 
        ;

IMPLEMENT : _implements ID_PLUS   {printf("[Reduce %i%s", yyn, "]");} 
          | /* ZERO */            {printf("[Reduce %i%s", yyn, "]");} 
          ;

CLASS_DECL : _class _id EXTEND IMPLEMENT _leftbrace FIELD_PLUS _rightbrace   {printf("[Reduce %i%s", yyn, "]");} 
           ;

FIELD : VAR_DECL        {printf("[Reduce %i%s", yyn, "]");} 
      | FUNCTION_DECL   {printf("[Reduce %i%s", yyn, "]");} 
      ;

FIELD_PLUS : FIELD_PLUS FIELD   {printf("[Reduce %i%s", yyn, "]");} 
           | /* ZERO */         {printf("[Reduce %i%s", yyn, "]");} 
           ;
	   
INTERFACE_DECL : _interface _id _leftbrace PROTOTYPE_PLUS _rightbrace  {printf("[Reduce %i%s", yyn, "]");} 
               ;
	       
PROTOTYPE : TYPE _id _leftparen FORMALS _rightparen _semicolon    {printf("[Reduce %i%s", yyn, "]");}
          | _void _id _leftparen FORMALS _rightparen _semicolon   {printf("[Reduce %i%s", yyn, "]");}
          ;

PROTOTYPE_PLUS : PROTOTYPE_PLUS PROTOTYPE   {printf("[Reduce %i%s", yyn, "]");}
               | /* ZERO */                 {printf("[Reduce %i%s", yyn, "]");} 
	       ;

EXPR_ONE : EXPR         {printf("[Reduce %i%s", yyn, "]");}
         | /* ZERO */   {printf("[Reduce %i%s", yyn, "]");}
	 ;

STMT : EXPR_ONE _semicolon   {printf("[Reduce %i%s", yyn, "]");}
     | IF_STMT               {printf("[Reduce %i%s", yyn, "]");}
     | WHILE_STMT            {printf("[Reduce %i%s", yyn, "]");}
     | FOR_STMT              {printf("[Reduce %i%s", yyn, "]");}
     | BREAK_STMT            {printf("[Reduce %i%s", yyn, "]");}
     | RETURN_STMT           {printf("[Reduce %i%s", yyn, "]");}
     | PRINT_STMT            {printf("[Reduce %i%s", yyn, "]");}
     | STMT_BLOCK            {printf("[Reduce %i%s", yyn, "]");}
     ;

STMTS : STMTS STMT    {printf("[Reduce %i%s", yyn, "]");}
      | /* ZERO */    {printf("[Reduce %i%s", yyn, "]");}
      ;

IF_STMT : _if _leftparen EXPR _rightparen STMT IF_ONLY      {printf("[Reduce %i%s", yyn, "]");}
        | _if _leftparen EXPR _rightparen STMT _else STMT   {printf("[Reduce %i%s", yyn, "]");}
        ;

WHILE_STMT : _while _leftparen EXPR _rightparen STMT        {printf("[Reduce %i%s", yyn, "]");}
           ;

FOR_STMT : _for _leftparen EXPR_ONE _semicolon EXPR _semicolon EXPR_ONE _rightparen STMT     {printf("[Reduce %i%s", yyn, "]");}
         ;

BREAK_STMT : _break _semicolon    {printf("[Reduce %i%s", yyn, "]");}
           ;

RETURN_STMT : _return EXPR_ONE _semicolon    {printf("[Reduce %i%s", yyn, "]");}
            ;

PRINT_STMT : _println _leftparen EXPRS _rightparen _semicolon    {printf("[Reduce %i%s", yyn, "]");}
           ;

STMT_BLOCK : _leftbrace VAR_DECLS STMTS _rightbrace    {printf("[Reduce %i%s", yyn, "]");}
           ;

EXPR : LVALUE _assignop EXPR                                       {printf("[Reduce %i%s", yyn, "]");}
     | CONSTANT                                                    {printf("[Reduce %i%s", yyn, "]");} 
     | LVALUE                                                      {printf("[Reduce %i%s", yyn, "]");}
     | CALL                                                        {printf("[Reduce %i%s", yyn, "]");}
     | _leftparen EXPR _rightparen                                 {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _plus EXPR                                             {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _minus EXPR                                            {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _multiplication EXPR                                   {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _division EXPR                                         {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _mod EXPR                                              {printf("[Reduce %i%s", yyn, "]");}
     | _minus EXPR _multiplication                                 {printf("[Reduce %i%s", yyn, "]");} 
     | EXPR _less  EXPR                                            {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _lessequal EXPR                                        {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _greater EXPR                                          {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _greaterequal EXPR                                     {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _equal EXPR                                            {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _notequal EXPR                                         {printf("[Reduce %i%s", yyn, "]");}      
     | EXPR _and EXPR                                              {printf("[Reduce %i%s", yyn, "]");}
     | EXPR _or EXPR                                               {printf("[Reduce %i%s", yyn, "]");}
     | _not EXPR                                                   {printf("[Reduce %i%s", yyn, "]");}
     | _readln"()"                                                 {printf("[Reduce %i%s", yyn, "]");}
     | _newarray _leftparen _id _rightparen                        {printf("[Reduce %i%s", yyn, "]");}
     | _newarray _leftparen _intconstant _comma TYPE _rightparen   {printf("[Reduce %i%s", yyn, "]");}
     ;

EXPRS : EXPR                {printf("[Reduce %i%s", yyn, "]");}
      | EXPRS _comma EXPR   {printf("[Reduce %i%s", yyn, "]");}
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