%{
	
	/*
	
	
	*/
#include<stdlib.h>
#include<stdio.h>
#include"syn.tab.h"
#include "ts.h"


extern YYSTYPE yylval;
extern  NL,NC;




		

%}



ident [A-Z][a-zA-Z0-9]*
val_INTEGER ((\([+-]([0-9]|[1-9][0-9]{0,3}|[12][0-9]{4}|3[01][0-9]{3}|32([0-6][0-9]{2}|7[0-5][0-9]|76[0-8]))\))|([0-9]|[1-9][0-9]{0,3}|[12][0-9]{4}|3[01][0-9]{3}|32([0-6][0-9]{2}|7[0-5][0-9]|76[0-8])))
			
			
val_REAL ((0|[1-9][0-9]*)\.[0-9]+|\([+-](0|[1-9][0-9]*)\.[0-9]+\))
val_CHAR  \'[^']?\'
val_string \"[^\"]*\"
commentaire  [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]


%%
"##" 		{NC+=strlen(yytext); 	rechercher(yytext,"sep","deb_bib","NULL","NO","NULL",2);	printf("le mot: est deb_bib \n");		return deb_bib ;}
":=" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","affec","NULL","NO","NULL",2);		printf("le mot est affec \n");			return affec ;}
"@" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","addr","NULL","NO","NULL",2);		printf("le mot est addr \n");			return addr;}
"+" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","op_add","NULL","NO","NULL",2);		printf("le mot est op_add \n");			return op_add;}
"-" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","op_sub","NULL","NO","NULL",2);		printf("le mot est op_sub \n");			return op_sub;}
"*" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","op_mult","NULL","NO","NULL",2);	printf("le mot est op_mult \n");		return op_mult;}
"/" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","op_div","NULL","NO","NULL",2);		printf("le mot est op_div \n");			return op_div;}
"{" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","acc_o","NULL","NO","NULL",2);		printf("le mot est acc_o \n");			return acc_o;}
"}" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","acc_o","NULL","NO","NULL",2);		printf("le mot est acc_c \n");			return acc_c;}
"(" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","par_o","NULL","NO","NULL",2);		printf("le mot est par_o \n");			return par_o;}
")" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","par_c","NULL","NO","NULL",2);		printf("le mot est par_c \n");			return par_c;}
"[" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","cro_o","NULL","NO","NULL",2);		printf("le mot est cro_o \n");			return cro_o;}
"]" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","cro_c","NULL","NO","NULL",2);		printf("le mot est cro_c \n");			return cro_c;}
"//" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","sep var","NULL","NO","NULL",2);	printf("le mot est sep \n");			return sep;}
"::" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","2 points","NULL","NO","NULL",2);	printf("le mot est 2 points \n");		return deux_points;}
"=" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","egale","NULL","NO","NULL",2);		printf("le mot est egale \n");			return equal;}
"|" 		{NC+=strlen(yytext);	rechercher(yytext,"sep","pipe","NULL","NO","NULL",2);		printf("le mot est pipe \n");			return pipe;}
"Programme" {NC+=strlen(yytext);	rechercher(yytext,"MC","program","NULL","NO","NULL",1);		printf("le mot est deb_program  \n");	return Programme ;}


"$"  		{NC+=strlen(yytext); yylval.str=strdup(yytext);	rechercher(yytext,"sep","dolar","NULL","NO","NULL",2);				printf("le mot est dolar \n");	return dolar ;}
"%"	 		{NC+=strlen(yytext); yylval.str=strdup(yytext);	rechercher(yytext,"sep","percentage","NO","NULL","NULL",2);			printf("le mot est % \n");		return percentage;}
"#"  		{NC+=strlen(yytext); yylval.str=strdup(yytext);	rechercher(yytext,"sep","dz","NULL","NO","NULL",2);					printf("le mot est # \n");		return dz;}
"&"  		{NC+=strlen(yytext); yylval.str=strdup(yytext);	rechercher(yytext,"sep","andC","NULL","NO","NULL",2);				printf("le mot est & \n");		return andC;}



"VAR" 		{NC+=strlen(yytext);			rechercher(yytext,"MC","var dec","NULL","NO","NULL",1);		printf("le mot est partie_declaration variable \n");	return VAR;}
"REAL" 		{NC+=strlen(yytext);	yylval.str=strdup(yytext);	rechercher(yytext,"MC","real type","NULL","NO","NULL",1);	printf("le mot est nom type real \n");	return REAL ;}
"CHAR" 		{NC+=strlen(yytext);	yylval.str=strdup(yytext);	rechercher(yytext,"MC","char type","NULL","NO","NULL",1);	printf("le mot est  nom type char \n");	return CHAR ;}
"STRING" 	{NC+=strlen(yytext);	yylval.str=strdup(yytext);	rechercher(yytext,"MC","string type","NULL","NO","NULL",1);	printf("le mot est nom type string \n");return STRING ;}
"INTEGER" 	{NC+=strlen(yytext);	yylval.str=strdup(yytext);	rechercher(yytext,"MC","int type","NULL","NO","NULL",1);	printf("le mot est nom type integer \n");return INTEGER;}
"CONST" 	{NC+=strlen(yytext);			rechercher(yytext,"MC","const MC","NULL","NO","NULL",1);	printf("le mot est  const \n");							return CONST ;}


ARRAY[ \t]*$?[ \t]*\n 	{NC=1;NL++;	yylval.str="ARRAY";		rechercher("ARRAY","MC","NULL","NULL","NO","NULL",1);	printf("le mot est bib_array \n");	return ARRAY ;}
LOOP[ \t]*$?[ \t]*\n 	{NC=1;NL++;	yylval.str="LOOP";		rechercher("LOOP","MC","NULL","NULL","NO","NULL",1);	printf("le mot est bib_loop \n");	return LOOP;}
PROCESS[ \t]*$?[ \t]*\n {NC=1;NL++;	yylval.str="PROCESS";	rechercher("PROCESS","MC","NULL","NULL","NO","NULL",1); printf("le mot est bib_process \n");return PROCESS;}



"READ" 		{NC+=strlen(yytext);	rechercher(yytext,"MC","read Mc","NULL","NO","NULL",1);		printf("le mot est read \n"); 	return READ;}
"WRITE" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","write Mc","NULL","NO","NULL",1);	printf("le mot est write \n");	return WRITE;}
"While"  	{NC+=strlen(yytext);	rechercher(yytext,"MC","While Mc","NULL","NO","NULL",1);	printf("le mot est while \n");	return While;}
"EXECUT" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","excute MC","NULL","NO","NULL",1);	printf("le mot est EXECUT \n");	return EXECUT;}
"IF" 		{NC+=strlen(yytext);	rechercher(yytext,"MC","IF MC","NULL","NO","NULL",1);		printf("le mot est IF \n");		return IF;}
"END_IF" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","End if MC","NULL","NO","NULL",1);	printf("le mot est END_IF \n");	return END_IF ;}
"ELSE" 		{NC+=strlen(yytext);	rechercher(yytext,"MC","Else MC","NULL","NO","NULL",1);		printf("le mot est ELSE \n");	return ELSE;}


"SUP" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","NULL","NULL","NO","NULL",1);	printf("le mot est SUP \n");	return SUP;}
"SUPE" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","NULL","NULL","NO","NULL",1);	printf("le mot est SUPE \n");	return SUPE;}
"EG" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","NULL","NULL","NO","NULL",1);	printf("le mot est EG \n");		return EG;}
"DIFF" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","NULL","NULL","NO","NULL",1);	printf("le mot est DIFF \n");	return DIFF;}
"INFE" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","NULL","NULL","NO","NULL",1);	printf("le mot est INFE \n");	return INFE;}
"INF" 	{NC+=strlen(yytext);	rechercher(yytext,"MC","NULL","NULL","NO","NULL",1);	printf("le mot est INF \n");	return INF;}


						
{ident} if (yyleng <=10){NC+=strlen(yytext);yylval.str=strdup(yytext);rechercher(yytext,"IDF","NULL","NULL","NO","NULL",0);	printf("le mot est IDF \n");return idf;}
			else printf("err lexical IDF  l'entité %s trop long sur la ligne %d de colonne %d\n",yytext,NL,NC);




{val_REAL} {NC+=strlen(yytext);char nb[10] ;yylval.real=str_to_real(yytext);gcvt(str_to_real(yytext),6,nb);	rechercher(nb,"const_real","REAL",nb,"YES","NULL",0);
			printf("le mot est un real  : %f \n",str_to_real(yytext));
			return const_real ;}



{val_INTEGER} {NC+=strlen(yytext); char nb[10] ;yylval.entier=str_to_int(yytext); 
									rechercher(itoa(str_to_int(yytext),nb,10),"const_int","INTEGER",itoa(str_to_int(yytext),nb,10),"YES","NULL",0);
									printf("le mot est int : %d \n",str_to_int(yytext)); return const_int;}












{val_CHAR}	 { 	NC+=strlen(yytext);  	yylval.str=strdup(yytext); rechercher(yytext,"const_char","CHAR",yytext,"YES","NULL",0);		
										printf("le mot est un char\n");return const_char ;}
{val_string} {	NC+=strlen(yytext); 	yylval.str=strdup(yytext); rechercher(yytext,"const_string","STRING",yytext,"YES","NULL",0); 	
										printf("le mot est un str\n");return const_str ;}

{commentaire} {int cmntl=0,i;
					for (i=0;i<yyleng;i++){if (yytext[i]=='\n'){cmntl++; NC=1;}}
						NL+=cmntl;}
						
[ \t] {NC+=strlen(yytext);}
\n {NL++;  NC=1;}

. printf("err lexical a l'entité %s sur la ligne %d de colonne %d\n",yytext,NL,NC);

 