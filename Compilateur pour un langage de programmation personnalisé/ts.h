#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	
	
	
	*/


typedef struct
{
   int state;
   char name[40];
   char size[10];
   char type[10];
   char category[20];
   char constant[4];
   
   char val[100];
   int sub;
} element;

typedef struct
{
   int state;
   char name[20];
   char type[20];
} elt;

element tab[1000];
elt tabs[40],tabm[40];


/*initialisation de l'état des cases des tables des symbloles
0: la case est libre    1: la case est occupée*/

void init()
{
  int i;
  for (i=0;i<1000;i++)
    tab[i].state=0;

  for (i=0;i<40;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}

}

/**************************permet de copier deux  chaine de type pointeurs strcpy  */
void str_cpy(char *dst, const char *src) { while (*src != '\0') { *dst++ = *src++; } *dst = '\0'; }


/**************************convert string to real*/
double  str_to_real( char *str)
{ double  value;
  
  while(*str) {
    if (isdigit(*str) || ( (*str=='-'||*str=='+') && isdigit(*(str+1)) )) {
        value = atof(str);
		
    return value;  
    }
	str++;
	  }}

/* insertion des entititées lexicales dans les tables des symboles*/

void inserer (char *entite, char *category ,char *type,char *val,char *constant,char * size,int i,int y)
{
  switch (y)
 {
   case 0:/*insertion dans la table des IDF et CONST*/
       tab[i].state=1;
       strcpy(tab[i].name,entite);
       strcpy(tab[i].category,category);
       strcpy(tab[i].val,val);
	   strcpy(tab[i].size,size);
	   strcpy(tab[i].type,type);
	   strcpy(tab[i].constant,constant);
       break;

   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,type);
       break;

   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,type);
      break;
 }

}

/**************************chercher si l'entité existe dèja dans la table*/
void rechercher (char *entite, char *category,char *type,char  *val,char *constant,char *size ,int y)
{

int j,i=0;
switch(y)
  {
   case 0:/*verifier si la case dans la tables des IDF et CONST est libre*/
        for (i=0;((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++);
        if(i<1000&&strcmp(entite,tab[i].name)!=0)
        { inserer(entite,category,type,val,constant,size,i,0);
         }
        
        break;

   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++);
        if(i<40&&strcmp(entite,tabm[i].name)!=0)
          inserer(entite,category,type,val,constant,size,i,1);
       
        break;

   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
        for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++);
       if(i<40&&strcmp(entite,tabs[i].name)!=0)
         inserer(entite,category,type,val,constant,size,i,2);
       
        break;

  }

}
/**************************chercher la position  dans la table des symbole*/

int position(char * entite , int y ){
	int i=0;
	switch(y){
	case 0:
				while(((i<1000)&&strcmp(entite,tab[i].name))){i++;};
				if (i<(1000))return i;else return -1;
	case 1:
				while(((i<40)&&strcmp(entite,tabm[i].name))){i++;};
				if (i<(40))return i;else return -1;
	case 2:
			while(((i<40)&&strcmp(entite,tabs[i].name))){i++;};
				if (i<(40))return i;else return -1;}
}
				
/**************************inserer le type de la position  dans la table des symbole*/


int str_cmp(char *ch1,char *ch2){
	
	return strcmp(ch1,ch2);
	
	
}

void set_bib(char * entite,char *type ){
	
	strcpy(tabm[position(entite,1)].type,type);
	}


int existe(char * entite,int y ){
	
	switch(y){
	case 0: 
			if(position(entite,y)<0)return 0;
			else if (strcmp(tab[position(entite,y)].type,"NULL"))return 1;
			else return 0;
	case 1:
	if(position(entite,y)<0)return 0;
			else if (strcmp(tabm[position(entite,y)].type,"NULL"))return 1;
			else return 0;
	
}
}



/**************************  insertion de la valeur   dans la table des symbole*/

void set_val(char *entite,char *val){
	strcpy(tab[position(entite,0)].val,val);
	
}


/**************************  insertion de la valeur par default pandant la declaration des variables  dans la table des symbole*/

void set_df_val(char *entite){
	
	if (!str_cmp(tab[position(entite,0)].type,"INTEGER"))strcpy(tab[position(entite,0)].val,"0");
	else if (!str_cmp(tab[position(entite,0)].type,"REAL"))strcpy(tab[position(entite,0)].val,"0.0");
	else strcpy(tab[position(entite,0)].val,"");
	
}


/************************** inserer idf un constant   */

void set_constant (char *entite){
	
	strcpy(tab[position(entite,0)].constant,"YES");
	
	
	
	
}

/**************************  idf est un costant ?*/

int constant(char *entite){
	
	if (position(entite,0)<0) return -1;
		else if (!str_cmp(tab[position(entite,0)].constant,"YES")) return 0;
					else return 1;
	
}
/**************************  recuperer la val a partir la table des symbole*/

int get_val(char *entite){
	
return (int)atof(tab[position(entite,0)].val);

}

char *get_val_str(char *entite){
	
return (char *)tab[position(entite,0)].val;	
	
}



/**************************  determiner la taille de tableau  */

void set_size(char * entite,char* size){

strcpy(tab[position(entite,0)].size,size);
	
}

/**************************  recuperer  la taille de tableau  */
 int get_size(char * entite)
 {
	  if(str_cmp(tab[position(entite,0)].size,"NULL"))return atoi(tab[position(entite,0)].size);
	 else return 0;
	 
 }
 
 /**************************  determiner le type de idf et insertion dans la tableau des symboles  */
 
void set_type(char * entite,char *type ){
	
	strcpy(tab[position(entite,0)].type,type);
	
	}


 /**************************  recuperer le type de idf a partir la tableau des symboles  */
 
char * get_type(char *entite){
	return strdup (tab[position(entite,0)].type);
}

/**************************  covert real to int  */

int real_to_int(double f){
	int i=f;
	
	return i;	
}
/**************************  covert string to int  */

int str_to_int(char *str){
	
char *p = yytext;
while (*p) { // While there are more characters to process...
    if ( isdigit(*p) || ( (*p=='-'||*p=='+') && isdigit(*(p+1)) )) {
        // Found a number
        int val = strtol(p, &p, 10); // Read number
        return val;
		// and print it.
    } else {
        // Otherwise, move on to the next character.
        p++; }}}



/**************************  recuperer le type de signe de formatage  */

char * get_sdf_type(char *sdf){
	
	if(!str_cmp(sdf,"\";\"")|| !str_cmp(sdf,";"))return "INTEGER";
		else if(!str_cmp(sdf,"\"&\"")||!str_cmp(sdf,"&"))return "CHAR";
		       else if(!str_cmp(sdf,"\"?\"")||!str_cmp(sdf,"?"))return "STRING";
			     else if(!str_cmp(sdf,"\"%\"")||!str_cmp(sdf,"%"))return "REAL";
}


/****************affichage*******************/

void afficher()

{int i;
    printf("\n\n\n\n");
	printf("    									/***************Table des symboles IDF*************/\n");
    printf("_______________________________________________________________________________________________________________________________________________________________\n");
	printf("\t|                 NAME                 |         CATEGORY       |          Type       |              VALUE             |      CONSTANT   |      SIZE     \n");
	printf("________________________________________________________________________________________________________________________________________________________________\n");
for(i=0;i<1000;i++)
    if(tab[i].state==1)
      {
		  
       printf("\t|%38s |%24s |%21s |%24s |%19s |%10s | \n",tab[i].name,tab[i].category,tab[i].type,tab[i].val,tab[i].constant,tab[i].size);
      
	  }
	printf("________________________________________________________________________________________________________________________________________________________________\n\n\n\n");
	printf("\n	/***************Table des symboles mots clés*************/\n");
    printf("__________________________________________________________________________\n");
	printf("\t|                 NAME                 |         TYPE       |\n");
	printf("__________________________________________________________________________\n");
	
for(i=0;i<40;i++)
    if(tabm[i].state==1)
      {
		  
         printf("\t|%38s |%24s |\n",tabm[i].name,tabm[i].type);
		 
      }
	printf("____________________________________________________________________________\n\n\n\n");
	printf("\n	 /***************Table des symboles séparateurs*************/\n");
	printf("_____________________________________________________________________________\n");
	printf("\t|                 NAME                 |         TYPE       |\n");
	printf("_____________________________________________________________________________\n");
for(i=0;i<40;i++)
    if(tabs[i].state==1)
      {
		  
        printf("\t|%38s |%24s |\n",tabs[i].name,tabs[i].type);
		
      }
	  
	printf("______________________________________________________________________________\n");
}




