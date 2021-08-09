//Uri1042

#include <stdio.h>
#include <stdlib.h>

int main(){
	int j, i, temp;
	int* vet;
	int* v;
	v=malloc(10*3);
	vet=malloc(10*3);
	for(i=0;i<3;i++){
		scanf("%d",&vet[i]);
		v[i]=vet[i];
	}
	for (i=0;i<3; i++)
for(j=i+1;j<3;j++)
{
if (vet[i]>vet[j])
{
temp=vet[i];
vet[i]=vet[j];
vet[j]=temp;
}
}for(i=0;i<3;i++){
printf("%d\n",vet[i]);}
printf("\n");
for(i=0;i<3;i++){
	printf("%d\n",v[i]);}
}