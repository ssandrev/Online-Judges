//Uri2344

#include <stdio.h>
 
int main() {
 
  	int N;
	char nota;
	scanf("%d",&N);
	if(N==0){
		nota='E';
	}
	else if(N>0 && N<36){
		nota='D';
	}
	else if(N>35 && N<61){
		nota='C';
	}
	else if(N>60 && N<86){
		nota='B';
	}
	else{
		nota ='A';
	}
	printf("%c\n",nota);
 
    return 0;
}