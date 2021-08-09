//Uri1769

#include <stdio.h>
 
int main() {
 
   int k, i, b1, b2, d1, d2;
	char cpf[14];
	int cpf1[11];
    
    while(scanf(" %s",cpf)!=EOF){
		k=0;
		b1=0;
		b2=0;
        for(i=0;i<14;i++){
        if( i == 3 || i == 7 || i == 11) {
			i++;}
        cpf1[k] = cpf[i] -48;
        k++;
    }
	for(i=0;i<9;i++){
		b1 += cpf1[i]*(i+1);
		b2 += cpf1[i]*(9-i);
	}d1=b1%11;
	d2=b2%11;
	if(d1==10){
		d1=0;
	}
	if (d2==10){
		d2=0;
	}
        if ( d1==cpf1[9] && d2 == cpf1[10] ){
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }
 
    return 0;
}