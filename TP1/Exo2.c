#include <stdio.h>

int fibo(int n){
	
	if(n==0)return 0;
	
	int u=0,uu=1,un=u+uu,aux;
	
	for(int i=3;i<=n;i++){
		aux=un;
		un+=uu;
		uu=aux;
	}
	
	return un;
}

int main(){
	
	int n=3;
	
	printf("\n\n%d",fibo(n));
	
	return 0;
}

