//Uri1175

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    int* vet;
	 int cont=19, i, aux;
     vet=malloc (10*20);
	 for(i=0;i<20;i++){
	     scanf("%d",&vet[i]);
	 }
	 for(i=0;i<10;i++){
		 aux=vet[i];
		 vet[i]=vet[cont];
		 vet[cont]=aux;
		 cont--;
	 }
	 for(i=0;i<20;i++){
		 printf("N[%d] = %d\n",i, vet[i]);
	 }
	 
    return 0;
}