#include "tokens.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int yylex();
extern int yyline;
extern int yycolumn;
extern int yylval;
extern char* yytext;

int findPos();
void printPos();

char *stringTable;

int main() {
 int flag = 0, cstartrow = 0, cstartcol = 0;
 printf("Line\tColumn\tToken\t\tIndex_In_StringTable\tyylval\n");
 stringTable = malloc(sizeof(char)*4096);
 while(1) {
    int token = yylex();
    yycolumn += strlen(yytext);
    switch(token) {
      case COMMENTSTARTnum:
	cstartrow = yyline;
	cstartcol = yycolumn;
	if(flag == 0)
	  flag = 1; 
	break;
      case COMMENTENDnum:
	if(flag == 1)
	  flag = 0; 
	break;
      case IDnum:
	if(flag == 0)
	  printf("%d\t%d\tIDnum\t\t\t%d\n",yyline,yycolumn,findPos());	
	break;
      case INTnum:
	if(flag == 0)
	  printf("%d\t%d\tINTnum\n",yyline,yycolumn);
        break;
      case PROGRAMnum:
	if(flag == 0)
	  printf("%d\t%d\tPROGRAMnum\n",yyline,yycolumn);
	break;
      case SEMInum:
	if(flag == 0)
	  printf("%d\t%d\tSEMInum\n",yyline,yycolumn);
	break;
      case CLASSnum:
	if(flag == 0)
	  printf("%d\t%d\tCLASSnum\n",yyline,yycolumn);
	break;
      case LBRACEnum:
	if(flag == 0)
	  printf("%d\t%d\tLBRACEnum\n",yyline,yycolumn);
	break;
      case RBRACEnum:
	if(flag == 0)
	  printf("%d\t%d\tRBRACEnum\n",yyline,yycolumn);
	break;
      case VOIDnum:
	if(flag == 0)
	  printf("%d\t%d\tVOIDnum\n",yyline,yycolumn);
	break;
      case METHODnum:
	if(flag == 0)
	  printf("%d\t%d\tMETHODnum\n",yyline,yycolumn);
	break;
      case LPARENnum:
	if(flag == 0)
	  printf("%d\t%d\tLPARENnum\n",yyline,yycolumn);
	break;
      case RPARENnum:
	if(flag == 0)
	  printf("%d\t%d\tRPARENnum\n",yyline,yycolumn);
	break;
      case SCONSTnum:
	if(flag == 0)
	  printf("%d\t%d\tSCONSTnum\t\t%d\n",yyline,yycolumn,findPos());
	break;
      case TIMESnum:
	if(flag == 0)
	  printf("%d\t%d\tTIMESnum\n",yyline,yycolumn);
        break;
      case ANDnum:
	if(flag == 0)
          printf("%d\t%d\tANDnum\n",yyline,yycolumn);
        break;
      case ASSGNnum:
	if(flag == 0)
          printf("%d\t%d\tASSGNnum\n",yyline,yycolumn);
        break;
      case DECLARATIONnum:
	if(flag == 0)
          printf("%d\t%d\tDECLARATIONnum\n",yyline,yycolumn);
        break;
      case DOTnum:
	if(flag == 0)
          printf("%d\t%d\tDOTnum\n",yyline,yycolumn);
        break;
      case EQUALnum:
        if(flag == 0)
          printf("%d\t%d\tEQUALnum\n",yyline,yycolumn);
        break;
      case ENDDECLARATIONSnum:
	if(flag == 0)
          printf("%d\t%d\tENDDECLARATIONSnum\n",yyline,yycolumn);
        break;
      case GTnum:
	if(flag == 0)
          printf("%d\t%d\tGTnum\n",yyline,yycolumn);
        break;
      case RBRACnum:
	if(flag == 0)
          printf("%d\t%d\tRBRACnum\n",yyline,yycolumn);
        break;
      case LBRACnum:
        if(flag == 0)
          printf("%d\t%d\tLBRACnum\n",yyline,yycolumn);
        break;
      case ORnum:
	if(flag == 0)
          printf("%d\t%d\tORnum\n",yyline,yycolumn);
        break;
      case VALnum:
	if(flag == 0)
          printf("%d\t%d\tVALnum\n",yyline,yycolumn);
        break;
      case WHILEnum:
	if(flag == 0)
          printf("%d\t%d\tWHILEnum\n",yyline,yycolumn);
        break;
      case COMMAnum:
	if(flag == 0)
          printf("%d\t%d\tCOMMAnum\n",yyline,yycolumn);
        break;
      case DIVIDEnum:
	if(flag == 0)
          printf("%d\t%d\tDIVIDEnum\n",yyline,yycolumn);
        break;
      case ELSEnum:
	if(flag == 0)
          printf("%d\t%d\tELSEnum\n",yyline,yycolumn);
        break;
      case EQnum:
	if(flag == 0)
          printf("%d\t%d\tEQnum\n",yyline,yycolumn);
        break;
      case GEnum:
	if(flag == 0)
          printf("%d\t%d\tGEnum\n",yyline,yycolumn);
        break;
      case ICONSTnum:
	if(flag == 0)
          printf("%d\t%d\tICONSTnum\t\t\t\t  %s\n",yyline,yycolumn,yytext);
        break;
      case IFnum:
	if(flag == 0)
          printf("%d\t%d\tIFnum\n",yyline,yycolumn);
        break;
      case LEnum:
        if(flag == 0)
          printf("%d\t%d\tLEnum\n",yyline,yycolumn);
        break;
      case LTnum:
        if(flag == 0)
          printf("%d\t%d\tLTnum\n",yyline,yycolumn);
        break;
      case MINUSnum:
	if(flag == 0)
          printf("%d\t%d\tMINUSnum\n",yyline,yycolumn);
        break;
      case NOTnum:
	if(flag == 0)
          printf("%d\t%d\tNOTnum\n",yyline,yycolumn);
        break;
      case PLUSnum:
	if(flag == 0)
          printf("%d\t%d\tPLUSnum\n",yyline,yycolumn);
        break;
      case RETURNnum:
	if(flag == 0)
          printf("%d\t%d\tRETURNnum\n",yyline,yycolumn);
        break;
      case SCONSTERROTnum:
	printf("Error Unmatched String Constant, at line %d column %d\n",yyline,yycolumn);
	yyline++;
	yycolumn = 0;
        break;
      case EOFnum:
	if(flag == 1)
	  printf("Error: Unmatched comment, at line %d Column %d\n",cstartrow,cstartcol);
	printf("%d\t%d\tEOF\n\n",yyline,yycolumn);
        printPos();
        exit(0); 
      case NEWLINEnum:
	if(flag == 1)
      case IDERRORnum:
	printf("Malformed Identifier : '%s', at line %d column %d\n",yytext,yyline,yycolumn);
	break;
      default:
	printf("Undefined Symbol '%s', at Line:%d,%d\n",yytext,yyline,yycolumn);
	yyline++;
 	yycolumn = 0;
	break;
    }
 }
 return 0;
}

void printPos() {
 printf("String Table : ");
 for(int i = 0; i < yylval; i++) {
  if(stringTable[i] == '\0'){
   printf(" ");
   continue;
  }
  printf("%c",stringTable[i]);
 }
 printf("\n\n");
}

int findPos() {
 int i = 0,j = 0, emptyflag = 0;
 char temp[strlen(yytext)-1];
 strcpy(temp,yytext);
 if(temp[0]=='\''&&temp[1]=='\''){
   emptyflag=1;
 } else if(temp[0]=='\''){
  for(i = 0; i < strlen(temp)-1; i++)
    temp[i] = temp[i+1];
  temp[strlen(temp)-2]='\0';
 }
 for(i = 0; i <= yylval; i++) {
  if(emptyflag && stringTable[i]=='\0' && stringTable[i+1]=='\0' && (i+1)<=yylval){
    return i;
  }
  if(temp[i]=='\'') {
    continue;
  }
  if(stringTable[i])
  if(stringTable[i]!=temp[j])
    j = 0;
  if(stringTable[i]==temp[j])
   j++;
  if( j==strlen(temp) && stringTable[i-strlen(temp)]=='\0' && stringTable[i+1]=='\0')
   return (i-strlen(temp)+1);
 }
 if( j == strlen(yytext))
   return i;
 if(yylval != 0) yylval++;
 int preTemp = yylval;
 for(i = 0; i < strlen(yytext); i++){
  if(yytext[i]=='\\' && yytext[i+1]=='n') {
   stringTable[yylval++] = '\n';
   i++;
  } else if(yytext[i]=='\\' && yytext[i+1]=='t') {
   stringTable[yylval++] = '\t';
   i++;
  } else if(yytext[i]=='\\' && yytext[i+1]=='\'') {
    stringTable[yylval++] = '\'';
    i++;
  } else if(yytext[i]=='\\' && yytext[i+1]=='\\') {
    stringTable[yylval++] = '\\';
    i++;
  } else if(yytext[i]=='\'') {
    if(emptyflag) {yylval++;break;}
    continue;
  }else {
   stringTable[yylval++] = yytext[i];
  }
 }
 return preTemp;
}
