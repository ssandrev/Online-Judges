//1375C - Element Extermination

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    long long nTestCases, nNum, i, num, excluir, resp, maxHigh, numerosMaiores;
    vector < long long > numeros;

    scanf("%lld", &nTestCases);

    while(nTestCases--){
        
        scanf("%lld", &nNum);
        scanf("%lld",&num);
        excluir = num;
        maxHigh = nNum - excluir;
        numerosMaiores = 0;
        for (i = 1; i < nNum; i++){
            scanf("%lld",&num);
            if(num > excluir){
                resp = 1;
                numerosMaiores++;
            }else{
                    resp = 0;
            }
        }
        if (resp == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;   
    }

    return 0;
}