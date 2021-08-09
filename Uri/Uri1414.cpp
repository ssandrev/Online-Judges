//Uri1414

#include <stdio.h>
 
int main() {
 
   int T, n, i, k=0, pontomax, pontos, ponto;
    char time[11];
	int empates[10000];

    while(scanf("%d",&T) && T != 0){
		scanf("%d",&n);
        pontos = 0;
        pontomax = n * 3;
        for(i=0;i<T;i++){
            scanf(" %s ",time);
            scanf("%d",&ponto);
            pontos = pontos + ponto;
        }
		empates[k] = pontomax - pontos;
		k++;
    }
	for(i=0;i<k;i++){
		 printf("%d\n",empates[i]);
	}
 
    return 0;
}