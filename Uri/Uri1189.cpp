//Uri1189

#include <stdio.h>
 
int main() {
 
    int j, i, h=10, a=1;
	double m[12][12], media, soma=0;
	char C;
	scanf("%c",&C);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&m[i][j]);
		}}
	for(j=0;j<5;j++){
		for(i=a;i<h+1;i++){
	       soma = soma + m[i][j];
	}h--;
     a++;
	 }
	 if(C=='S'){
	 printf("%.1lf\n",soma);}
	else if(C=='M'){ media= soma/30;
	printf("%.1lf\n",media);}
 
    return 0;
}