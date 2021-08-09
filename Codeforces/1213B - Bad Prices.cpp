//1213B - Bad Prices

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long dayAtual, nBadDays, nTests, nDays, i, x;
    vector <long long> dayAnt;
    scanf("%I64d", &nTests);

    while (nTests--)
    {
        nBadDays = 0;
        scanf("%I64d", &nDays);
        dayAnt.clear();
        for (i = 0; i < nDays; i++){
            scanf("%I64d", &dayAtual);

            x = lower_bound(dayAnt.begin(), dayAnt.end(), dayAtual+1) 
            - dayAnt.begin();
            if ( x < dayAnt.size()){
                nBadDays += (dayAnt.size() - x);
                dayAnt.erase(dayAnt.begin() + x,dayAnt.end());
            }
            dayAnt.insert(dayAnt.begin() + x,dayAtual);
        }

        printf("%I64d\n",nBadDays);
    }

    return 0;
}