//Uri1436

#include <stdio.h>
 
int main() {
 
    	int  i, j, k, n;
	int capitao;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		int jogador[k];
		for(j=0;j<k;j++){
			scanf("%d",&jogador[j]);
		}
		capitao = jogador[k/2];
		printf("Case %d: %d\n",i+1, capitao);
	}
 
    return 0;
}