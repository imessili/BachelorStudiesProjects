%{
	/*
	
	
	
	*/
	
#include <string.h>

int NL=1,NC=1,k,j;
int mark_aff=1,act_div=0,mark_read=0 ,mark_write=0,mark_cond=0,mark_op_arith=0;
char save_type[10];
char save_val[100];
int save_int ;
char save_affected[15];
char save_sdf[10];
char save_sdf_list[20];
char save_opp[20];
%}
%union {
int entier;
char* str;
float real;

}
%token DIFF  SUPE INFE SUP INF EG
%token  ELSE END_IF IF
%token  EXECUT While WRITE READ
%token  <str>PROCESS <str>LOOP  <str>ARRAY
%token  CONST
%token  <str>INTEGER <str>STRING  <str>CHAR <str>REAL
%token  VAR
%token  Programme
%token  deb_bib
%token  <str> andC <str> percentage <str> dz <str>dolar 
%token  pipe deux_points
%token  affec equal
%token  addr
%token  op_add op_sub  op_mult  op_div
%token  acc_o acc_c par_o par_c cro_c cro_o
%token  sep
%token   <str>idf
%token  <entier> const_int <real> const_real  <str> const_str <str>const_char
%start prog
%%


prog: 	declaratio_bib Programme idf acc_o crp acc_c{printf("\n***************programme sysntax correct*************** \n");}
		|Programme idf acc_o crp  acc_c{printf("\n***************programme sysntax correct*************** \n");}




declaratio_bib : deb_bib bib declaratio_bib  
				|deb_bib bib 
				




bib: LOOP 		{if(existe($1,1))printf("\t\t\t\terreur symentique double declaration bib a la ligne %d \n",NL-1);else set_bib($1,$1);}
	|ARRAY		{if(existe($1,1))printf("\t\t\t\terreur symentique double declaration bib a la ligne %d \n",NL-1);else set_bib($1,$1);}
	|PROCESS	{if(existe($1,1))printf("\t\t\t\terreur symentique double declaration bib a la ligne %d \n",NL-1);else set_bib($1,$1);}
	




crp :  declaration_var instructions






declaration_var: VAR declaration_type
					|


declaration_type: 	  type deux_points list_var dolar declaration_type 
					| type deux_points list_var dolar
					| CONST type deux_points list_var_const dolar declaration_type
					| CONST type deux_points list_var_const dolar



type : 	 INTEGER {strcpy(save_type,$1);}
		|REAL	{strcpy(save_type,$1);}
		|CHAR	{strcpy(save_type,$1);}
		|STRING {strcpy(save_type,$1);}




list_var : 	 IDF_dec sep list_var 
			|IDF_dec




IDF_dec: idf {if(existe($1,0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
													else {set_type($1,save_type);set_df_val($1);}}
	
	|idf cro_o const_val cro_c	{if (position("ARRAY",1)==-1)printf("\t\t\t\terreur symentique not declared bib ARRAY  a la ligne %d sur la colonne %d \n",NL,NC);
											else if(existe($1,0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
													else {	set_type($1,save_type); 
																if (!str_cmp(get_type(save_val),"INTEGER")){if(save_int <0)
													printf("\t\t\t\terreur symentique la taille de tab doit etre positive a la ligne %d sur la colonne %d \n",NL,NC);
																													else set_size($1,save_val);}
																	else printf("\t\t\t\terreur symentique taille not integer a la ligne %d sur la colonne %d \n",NL,NC);}}





list_var_const: idf affec const_val {if(existe($1,0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
											else {set_type($1,save_type);set_constant($1); 
																if (!str_cmp(get_type(save_val),save_type))set_val($1,save_val);
																	 else printf("\t\t\t\terreur symentique incompatible type a la ligne %d sur la colonne %d \n",NL,NC);		}}	
				 sep list_var_const 
				
				
				|idf affec const_val {if(existe($1,0))printf("\t\t\t\terreur symentique double declaration var a la ligne %d sur la colonne %d \n",NL,NC);
											else {set_type($1,save_type);set_constant($1);
														if (!str_cmp(get_type(save_val),save_type))set_val($1,save_val);
																		else printf("\t\t\t\terreur symentique incompatible type a la ligne %d sur la colonne %d \n",NL,NC);		}}	
			
			
			
			


const_val :	 const_char { str_cpy(save_val,$1);}
			|const_str	{str_cpy(save_val,$1);}
			|const_int	{save_int=$1;itoa($1,save_val,10);   }
			|const_real { gcvt($1,6,save_val);				 }





instructions: affectation  instructions
			| IO instructions
			| Boucle instructions
			| Condition_block instructions
			|




IDF: idf { if (!existe($1,0))printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",$1,NL,NC);
					else {
						if (mark_cond){if(str_cmp(get_type($1),get_type(save_opp)))
					printf("\t\t\t\terreur erreur symentique incompatible types in condition  a la ligne %d sur la colonne %d \n",NL,NC);}
							else str_cpy(save_opp,$1); 
						if (mark_read)if(str_cmp(get_type($1),get_sdf_type(save_sdf)))
						printf("\t\t\t\terreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",$1,get_sdf_type(save_sdf),NL,NC);
						  if(mark_write)if(k>j-1)printf("\t\t\t\terreur symentique  \"%s\" has not SDF     a la ligne %d sur la colonne %d \n",$1,NL,NC);
																			else {char s[2]={save_sdf_list[k],'\0'};if(str_cmp(get_type($1),get_sdf_type(s)))
						printf("\t\t\t\terreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",$1,get_sdf_type(s),NL,NC);}
							if(!mark_aff)if(str_cmp(get_type($1),get_type(save_affected)))
							 	printf("\t\t\t\terreur symentique incompatible types \"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",$1,get_type(save_affected),NL,NC);
																	if(act_div&&(!str_cmp(get_type($1),"INTEGER")||!str_cmp(get_type($1),"REAL"))&&!real_to_int((float)get_val($1)))
																				printf("\t\t\t\terreur symentique devision sur 0 types   a la ligne %d sur la colonne %d \n",NL,NC);}}
												
	
	|idf  cro_o const_val cro_c	{if (!existe($1,0))printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",$1,NL,NC);
								else if (position("ARRAY",1)==-1)printf("\t\t\t\terreur symentique not declared bib ARRAY  a la ligne %d sur la colonne %d \n",NL,NC);
										else { if ( get_size($1) && (save_int >get_size($1)))
										printf("\t\t\t\terreur symentique out of size array a la ligne %d sur la colonne %d \n",NL,NC);
																if (mark_cond){if(str_cmp(get_type($1),get_type(save_opp)))
										printf("\t\t\t\terreur erreur symentique incompatible types in condition  a la ligne %d sur la colonne %d \n",NL,NC);}
																	else  str_cpy(save_opp,$1);
																if (mark_read)if(str_cmp(get_type($1),get_sdf_type(save_sdf)))
										printf("erreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",$1,get_sdf_type(save_sdf),NL,NC);
																if(mark_write)if(k>j-1)
										printf("\t\t\t\terreur symentique  \"%s\" has not SDF     a la ligne %d sur la colonne %d \n",$1,NL,NC);
																			else {char s[2]={save_sdf_list[k],'\0'};if(str_cmp(get_type($1),get_sdf_type(s)))
										printf("\t\t\t\terreur symentique incompatible types SDF\"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",$1,get_sdf_type(s),NL,NC);}
																if(!mark_aff)if(str_cmp(get_type($1),get_type(save_affected)))
										printf("\t\t\t\terreur symentique incompatible types \"%s\" NOT %s   a la ligne %d sur la colonne %d \n",$1,get_type(save_affected),NL,NC);}}

			




affectation: idf{if (existe($1,0)){if(!constant($1))
						printf("\t\t\t\terreur symentique can not affected value to \"%s\"    is a constant  a la ligne %d sur la colonne %d \n",$1,NL,NC);
										else {strcpy(save_affected,$1);printf("affected save \n"); mark_aff=0;}}
						else 
						printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",$1,NL,NC);	} 
			affec EXP_arithmetique dolar{mark_aff=1;}
			
			
			|idf  cro_o const_val cro_c {if (existe($1,0))if (position("ARRAY",1)==-1)
							printf("\t\t\t\terreur symentique not declared bib ARRAY  a la ligne %d sur la colonne %d \n",NL,NC);
																		else {strcpy(save_affected,$1); mark_aff=0;
													if ( get_size($1) && (save_int >get_size($1)))
							printf("erreur symentique out of size array a la ligne %d sur la colonne %d \n",NL,NC);}
												else printf("\t\t\t\terreur symentique  %s not declared  a la ligne %d sur la colonne %d \n",$1,NL,NC);}  
			
			affec EXP_arithmetique dolar{mark_aff=1;act_div=0;}



EXP_arithmetique: operation_arithmetique





operation_arithmetique: operand {if (act_div)act_div=0;} operateurs_arithmetique {if (position("PROCESS",1)==-1)
											printf("\t\t\t\terreur symentique not declared bib PROCESS  a la ligne %d sur la colonne %d \n",NL,NC);
										if(mark_op_arith)mark_cond=1;} 
						operation_arithmetique
					   |operand{if(mark_op_arith)mark_cond=1;}




operand :IDF 
		|const_val {		if (mark_cond){if(str_cmp(get_type(save_val),get_type(save_opp)))
										printf("\t\t\t\terreur erreur symentique incompatible types in condition  a la ligne %d sur la colonne %d \n",NL,NC);}
							else  {str_cpy(save_opp,save_val);}
							if(!mark_aff)if(str_cmp(get_type(save_val),get_type(save_affected)))
								printf("\t\t\t\terreur symentique incompatible types \"%s\" NOT  %s   a la ligne %d sur la colonne %d \n",save_val,get_type(save_affected),NL,NC); 
										if(act_div&&(!str_cmp(get_type(save_val),"INTEGER")||!str_cmp(get_type(save_val),"REAL"))&&!real_to_int((float)get_val(save_val)))
													printf("\t\t\t\terreur symentique devision sur 0 types   a la ligne %d sur la colonne %d \n",NL,NC);}
								





operateurs_arithmetique: op_add  
						|op_sub  {if(!str_cmp(get_type(save_affected),"STRING")||!str_cmp(get_type(save_affected),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);
											if(mark_cond)if(!str_cmp(get_type(save_opp),"STRING")||!str_cmp(get_type(save_opp),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);					}
						|op_mult {if(!str_cmp(get_type(save_affected),"STRING")||!str_cmp(get_type(save_affected),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char a la ligne %d sur la colonne %d \n",NL,NC);
											if(mark_cond)if(!str_cmp(get_type(save_opp),"STRING")||!str_cmp(get_type(save_opp),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);}
						|op_div  {act_div=1;if(!str_cmp(get_type(save_affected),"STRING")||!str_cmp(get_type(save_affected),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char a la ligne %d sur la colonne %d \n",NL,NC);
														if(mark_cond)if(!str_cmp(get_type(save_opp),"STRING")||!str_cmp(get_type(save_opp),"CHAR"))
									printf("\t\t\t\terreur symentique can not mult or div or sub string or char to string or char  a la ligne %d sur la colonne %d \n",NL,NC);}




IO: read_intruction
   |write_intruction





Boucle : while_block 





while_block: While {if (position("LOOP",1)==-1)printf("\t\t\t\terreur symentique not declared bib LOOP  a la ligne %d sur la colonne %d \n",NL,NC);} 
				par_o EXP_conditionelle par_c  acc_o instructions acc_c






Condition_block: EXECUT instructions IF par_o EXP_conditionelle par_c END_IF
				|EXECUT instructions IF par_o EXP_conditionelle par_c ELSE instructions END_IF





read_intruction: READ par_o const_str {if(str_cmp($3,"\"&\"")&&str_cmp($3,"\"?\"")&&str_cmp($3,"\";\"")&&str_cmp($3,"\"%\""))
												printf("\t\t\t\tErreur symentique mark not signe de formatage a la ligne %d colonne %d\n",NL,NC);
													else{mark_read=1;strcpy(save_sdf,$3);}				}
					pipe addr IDF par_c dolar{mark_read=0;}	




write_intruction: WRITE par_o const_str{int  i=0;k=0;j=0; while($3[i]!='\0'){ if($3[i]=='&'||$3[i]==';'||$3[i]=='?'||$3[i]=='%'){save_sdf_list[j]=$3[i];j++;}i++; }
											mark_write=1;}
							list_pipe  par_c dolar{mark_write=0;}		   
				 |WRITE par_o const_str par_c dolar {mark_write=0;}


list_pipe: pipe IDF{k++;} list_pipe|pipe IDF{k++;}


EXP_conditionelle: operand_cond {mark_cond=1;} operateurs_conditionelle operand_cond {mark_cond=0;}


operand_cond : par_o {mark_op_arith=1;}operation_arithmetique par_c	{act_div=0;}
				| operand






operateurs_conditionelle: EG|INF|SUP|INFE|SUPE|DIFF




%%
main ()
{ 

init();
 
yyparse();
afficher(); 
	

}
yywrap()
{}
int yyerror(char* msg)
{
printf("\t\tErreur syntaxique a la ligne %d colonne %d\n",NL,NC);
return 0;
}