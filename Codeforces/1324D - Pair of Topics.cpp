//1324D - Pair of Topics

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long nTopics, i, interesse, resp = 0, helper;

    scanf("%I64d",&nTopics);
    vector<long long> topicos;
    vector<long long>::iterator iteri, iterj;

    for( i = 0; i < nTopics; i++){
        scanf("%I64d",&interesse);
        topicos.push_back(interesse);
    }

    for( iteri = topicos.begin(); iteri != topicos.end(); iteri++){
        scanf("%I64d",&interesse);
        *iteri -= interesse;
    }

    sort(topicos.begin(), topicos.end(), [&](auto &lhs, auto &rhs) {
    return lhs < rhs;
    });

    iteri = topicos.begin();
    iterj = topicos.end() - 1;

    while (iteri < iterj && *iterj >  0) {
        helper = *iterj + *iteri;

        if (helper > 0){
            resp += (iterj - iteri);
            iterj--;
        }else iteri++;
    }
        
    printf("%I64d\n",resp);

    return 0;
}
