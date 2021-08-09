//279B - Books

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long nLivro, i, tLivro, tLeitura, resp = 0, qtLivros, tTotal, maxL = 0;

    scanf("%I64d %I64d",&nLivro, &tLeitura);
    vector<long long> livros;
    vector<long long>::iterator iteri, iterj;

    for( i = 0; i < nLivro; i++){
        scanf("%I64d",&tLivro);
        livros.push_back(tLivro);
    }

    iteri = livros.begin();

    while (*iteri > tLeitura){
        iteri++;
    }
    qtLivros = 1;
    tTotal = *iteri;
    iterj = iteri;
    /*
    4 5
    3 1 2 1
    */

    while (iterj != livros.end()) {
        if (tTotal > tLeitura){
            tTotal -= *iteri;
            iteri ++;
            qtLivros--;
        }else{
            if(maxL < qtLivros) maxL = qtLivros;
            iterj ++;
            tTotal += *iterj;
            qtLivros++;
            if (qtLivros == tLeitura) break;
        }
    }
    
        
    printf("%I64d\n",maxL);

    return 0;
}