//Uri1437 - Data: 05/12/2017 18:33:18

#include <stdio.h>
 
int main() {
 
    int n, i;
	char dir, direcao;
	while(scanf("%d",&n) && n!=0){
		dir ='N';
		for(i=0;i<n;i++){
			scanf(" %c ",&direcao);
			if(direcao=='D'&& dir=='N'){
				dir='L';
			}else if (direcao=='E' && dir == 'N'){
				dir ='O';
			}else if(direcao=='D' && dir == 'L'){
				dir ='S';
			}else if(direcao=='E' && dir=='L'){
				dir='N';
			}else if(direcao=='D' && dir == 'O'){
				dir='N';
			}else if (direcao=='E' && dir == 'O'){
				dir ='S';
			}else if(direcao=='D' && dir == 'S'){
				dir='O';
			}else{
				dir='L';
			}
			 }
	
	printf("%c\n",dir);
	}
 
    return 0;
}