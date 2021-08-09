//10611 - The Playboy Chimp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    long long nLadys, nPlayBoy, maior, menor, i, altura;
    vector <long long> alturaLady, alturaPlayBoy;
    scanf("%lld", &nLadys);
    
    for (i = 0; i < nLadys; i++){
    	scanf("%lld",&altura);
        alturaLady.push_back(altura);
    }
    
    scanf("%lld", &nPlayBoy);
    
    for (i = 0; i < nPlayBoy; i++){
    	scanf("%lld",&altura);
        maior = lower_bound(alturaLady.begin(), alturaLady.end(), altura+1) 
            - alturaLady.begin();
        menor = lower_bound(alturaLady.begin(), alturaLady.end(), altura) 
            - alturaLady.begin();
        menor --;
        
        if (menor >= alturaLady.size())
        printf("X %lld\n", alturaLady[maior]);
        else if (maior >= alturaLady.size())
        printf("%lld X\n", alturaLady[menor]);
        else if (maior >= alturaLady.size() && menor >= alturaLady.size())
        printf("X X \n");
        else
        printf("%lld %lld\n", alturaLady[menor], alturaLady[maior]);
    }
    
    return 0;
}