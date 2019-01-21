%{
 #include <stdio.h>
 #include <stdlib.h>
 #include "proj2.h"
 #include "y.tab.h"
 int yyline = 1;
 int yycolumn = 0;
 extern YYSTYPE yylval;
 extern char strg_tbl[];
%}

%%
"int" 								{ return INTnum; }
";" 								return SEMInum;
"program" 							return PROGRAMnum;
"["									return LBRACnum;
"]"									return RBRACnum;
"{" 								return LBRACEnum;
"}" 								return RBRACEnum;
"(" 								return LPARENnum;
")" 								return RPARENnum;
"method"	 						return METHODnum;
"void" 								return VOIDnum;
"class" 							return CLASSnum;
"val"								return VALnum;
"while"								return WHILEnum;
"else"								return ELSEnum;
"if"								return IFnum;
"."									return DOTnum;
","									return COMMAnum;
"="									return EQUALnum;
">"									return GTnum;
"<"									return LTnum;
"!="								return NEnum;
"!"									return NOTnum;
"=="								return EQnum;
">="								return GEnum;
"<="								return LEnum;
"+"									return PLUSnum;
"-"									return MINUSnum;
"/"									return DIVIDEnum;
"*"									return TIMESnum;
"||"								return ORnum;
\n 									{ yyline++; yycolumn = 1; }
\t									{ yycolumn += 8; }
" "									{ yycolumn++; }
<<EOF>> 							return EOFnum;
"/*"					    	    return COMMENTSTARTnum;
"*/"								return COMMENTENDnum;
"&&"								return ANDnum;
":="								return ASSGNnum;
"\\."								return DOTnum;
"\'"								;
"enddeclarations"					return ENDDECLARATIONSnum;
"declarations"						return DECLARATIONnum;
"return"							return RETURNnum;
[0-9][0-9]*							{ yycolumn += yyleng; yylval.intg = atoi(yytext); return(ICONSTnum); }
"'"[^\'^\n]*[\n]					return SCONSTERROTnum;
"'"([(\\\\)]|[^\'\n]|\\\\.)*"\'"	return SCONSTnum;
[0-9][_A-Za-z0-9]*					return IDERRORnum;
[A-Za-z][_A-Za-z0-9]* 				{ yycolumn += yyleng; yylval.intg = (int)index; return IDnum; }
[.*|\"|\\|\$|\?|\|]					return 1000;
%%

int yywrap(void) {
 return 1;
}
