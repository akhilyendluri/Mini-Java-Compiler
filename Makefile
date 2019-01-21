All:
	lex lexer.l
	gcc driver.c -o driver  lex.yy.c 
clean:
	rm -f driver lex.yy.c
