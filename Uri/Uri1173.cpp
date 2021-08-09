//Uri1173

#include <stdio.h>
 
int main() {
 
   int vet[10];
	 int i;
	 scanf("%d",&vet[0]);
	 for(i=1;i<10;i++){
		vet[i]= 2 * vet[i-1];
		 }
	 for(i=0;i<10;i++){
		 printf("N[%d] = %d\n",i, vet[i]);
	 }
 
    return 0;
}