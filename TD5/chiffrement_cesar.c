#include <stdio.h>
#include <stdio.h>

void cesar(char *source, char *destination, int decalage){
	FILE *fp_s=NULL, *fp_d=NULL;
	//fp_s = fopen(source,"r");
	if(fp_s==NULL)perror("Echec ouverture fichier source");
	fp_d = fopen(destination,"w");
	if(fp_d==NULL)perror("Echec ouverture fichier destination");
	
	printf("Fin de fonction");
	
	
}

int main(){
	
	cesar("c_source.txt","c_destination.txt",4);
	
	return 0;
}

