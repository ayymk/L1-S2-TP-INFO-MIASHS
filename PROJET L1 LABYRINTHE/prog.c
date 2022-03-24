#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


struct case_tab
{
	bool Haut;
	bool Bas;
	bool Gauche;
	bool Droite;
	bool pass;
	int nb_case;
};

typedef struct case_tab cstb;

void matrice(int cote, cstb **p){
	int cpt=0,i;
	cstb **tab;
	tab=(cstb**)malloc(sizeof(cstb*)*cote);
	for(i=0;i<cote;i++){
		tab[i]=(cstb*) malloc(sizeof(cstb)*cote);
	}

	for(i=0;i<cote;i++){
		for(int j=0;j<cote;j++){
			tab[i][j].nb_case=cpt,tab[i][j].Haut=1,tab[i][j].Bas=1,tab[i][j].Gauche=1,tab[i][j].Droite=1,tab[i][j].pass=0;
			cpt++;
		}
	}
	p=tab;
	
	for(int i=0;i<cote;i++){
		printf("\n\n");
		for(int j=0;j<cote;j++){
			printf("|\t%d \t|",tab[i][j].nb_case);
		}
	} 
}
	

int main(){
	cstb** maze=NULL;
	int cote=5;
	matrice(cote,maze);
	
	if(maze==NULL){
		printf("ECHEC ALLOCATION");
		return 0;
	}else{
		printf("ALLOCATION REUSSIÉ");
	}
	
	/*SEGMENTATION FAULT ICI -> Probleme avec le maze[][].nb_case ??  ====> echec d'allocation, revoir la fonction !!!!!
	for(int i=0;i<cote;i++){
		printf("\n");
		for(int j=0;j<cote;j++){
			printf("%d \t",maze[i][j].nb_case);
		}
	} 
	*/
	
	return 0;
}
