//1335C - Two Teams Composing

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    long long nTests, i, resp = 0, nLivros, max, habilidade, dif;
    
    vector < long long>::iterator iteri;
    vector <long long> hab(2e5+100,0);

    scanf("%lld",&nTests);

    while(nTests--){
        
        dif = 0;
        max = 0;
        scanf("%lld",&nLivros);
        for (i = 1; i <= nLivros; i++) hab[i] = 0;

        for( i = 0; i < nLivros; i++){
            scanf("%lld",&habilidade);
            if (hab[habilidade] == 0)
                dif +=1;
            hab[habilidade]++;
            if (hab[habilidade] > max){
                max = hab[habilidade];
                //printf("max = %lld\n", max);
            }

    }
        
        if(max > dif){
            printf("%lld\n", dif);
        }else if (max == dif){
            printf("%lld\n", dif - 1);
        }else printf("%lld\n",max);
    }
    
    return 0;
}