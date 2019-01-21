%{
#include "proj2.h" 
#include <stdio.h> 

extern int yylex();

int yyerror(char*);
void printtree(tree,int);
%}



%token <intg> PROGRAMnum IDnum SEMInum LBRACEnum RBRACEnum Data CLASSnum LBRACnum RBRACnum INTnum LPARENnum RPARENnum METHODnum VOIDnum VALnum WHILEnum ELSEnum IFnum DOTnum
%token <intg> COMMAnum EQUALnum GTnum LTnum NEnum NOTnum EQnum GEnum LEnum PLUSnum MINUSnum DIVIDEnum TIMESnum ORnum EOFnum COMMENTSTARTnum COMMENTENDnum ANDnum ASSGNnum ENDDECLARATIONSnum DECLARATIONnum RETURNnum SCONSTERROTnum ICONSTnum SCONSTnum IDERRORnum 
%type <tptr> Program ClassDecl ClassBody ClassDeclMain
%% /* yacc specification */
Program : PROGRAMnum IDnum SEMInum ClassDeclMain		{ $$ = MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2)); printtree($$, 0); }
	;
ClassDeclMain : ClassDeclMain ClassDecl 				{ $$ = MakeTree(ClassOp, $1, $2); }
	| ClassDecl 										{ $$ = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), $1); }
	;
ClassDecl :	CLASSnum IDnum ClassBody					{ $$ = MakeTree(ClassDefOp, $3, MakeLeaf(IDNode, $2)); }
	;
ClassBody : LBRACEnum RBRACEnum							{ $$ = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0)); }
	;
%%
int yycolumn, yyline;
FILE *treelst;
char strg_tbl[1000];
int main() { treelst = stdout; yyparse(); return 0;}
int yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); return 0;}
