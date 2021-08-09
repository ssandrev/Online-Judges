//Uri1836 - Data: 05/12/2017 22:30:56

#include <stdio.h>
 
int main() {
 
  int t, i, cont;
	int bs[4], iv[4], ev[4], hp, at, df, sp, l;
    char n[99];
    float aux[4];
	
	scanf("%d", &t);
	
	for(i=0;i<t;i++)
	{	
    scanf("%s %d", &n, &l);
	for(cont=0;cont<4;cont++){
    scanf ("%d %d %d", &bs[cont], &iv[cont], &ev[cont]);
	aux[cont] = sqrt(ev[cont]) / 8;
	}

    hp = (((iv[0] + bs[0] + aux[0] + 50) * l) / 50) + 10;
    at = (((iv[1] + bs[1] + aux[1]) * l) / 50) + 5;
    df = (((iv[2] + bs[2] + aux[2]) * l) / 50) + 5;
    sp = (((iv[3] + bs[3] + aux[3]) * l) / 50) + 5;

    printf("Caso #%d: %s nivel %d\n", i+1, n, l);
    printf("HP: %.d\n", hp);
    printf("AT: %.d\n", at);
    printf("DF: %.d\n", df);
    printf("SP: %.d\n", sp);
	}
    return 0;
}