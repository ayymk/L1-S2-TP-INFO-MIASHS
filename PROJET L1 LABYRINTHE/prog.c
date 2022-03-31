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

cstb ** matrice(int cote){
	cstb **p;
	int cpt=0,i;

	p=(cstb**)malloc(sizeof(cstb*)*cote); //crée un tableau 1D de taille cote

	for(i=0;i<cote;i++){
		p[i]=(cstb*) malloc(sizeof(cstb)*cote); //crée la 2e D de taille cote dans tableau
	}

	for(i=0;i<cote;i++){ //affecte des valeurs a chaque case du tableau de type case_tab (cstb)
		for(int j=0;j<cote;j++){
			p[i][j].nb_case=cpt,  p[i][j].Haut=1,  p[i][j].Bas=1,  p[i][j].Gauche=1,  p[i][j].Droite=1,  p[i][j].pass=0;
			cpt++;
		}
	}
	return p;
}


int main(){

	cstb** maze=NULL;
	int cote=5;


	maze=matrice(cote);

	if(maze==NULL){
		printf("\n\n\n\t\t\t ----- ECHEC ALLOCATION ----");
		return 0;
	}else{
		printf("\n\n\n\t\t\t ----- ALLOCATION REUSSIE ----");
	}

	for(int i=0;i<cote;i++){
		printf("\n");
		for(int j=0;j<cote;j++){
			printf("%d \t",maze[i][j].nb_case);
		}
	}

	return 0;
}
