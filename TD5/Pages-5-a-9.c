#include <stdio.h>
#include <stdlib.h>


void affichage_sans_commentaires(char *nom){ // Masque commentaires et \t mais pas espaces en debut de phrase
	FILE *fp = NULL;
	fp = fopen(nom,"r");
	if(fp==NULL)perror("\nEchec d'ouverture du fichier\n");

	while(1){
		char cchar=fgetc(fp);
		if(cchar==EOF)break;

		if(cchar=='#'){
			while(cchar!='\n'){
				cchar=fgetc(fp);
			}
		}
		if(cchar!='\t')printf("%c",cchar);
	}
	fclose(fp);
}

int main(){

	affichage_sans_commentaires("exemple2.txt");

	return 0;
}
