syntaxAnalyzer: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -ly -ll

lex.yy.c: y.tab.c lexical2.l
	lex lexical2.l

y.tab.c: parser.y
	yacc -dyv parser.y