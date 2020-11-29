syntaxAnalyzer: lex.yy.c y.tab.c
	gcc lex.yy.c y.tab.c -ly -ll

lex.yy.c: y.tab.c lexical.l
	lex lexical.l

y.tab.c: parser.y
	yacc -dyv parser.y	
	sed -i '1418i printf("[Shift]");' y.tab.c
