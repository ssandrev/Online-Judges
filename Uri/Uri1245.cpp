//Uri1245

#include <iostream>

using namespace std;

int main()
{
    int shoes[31];
    int x;
    int total, size;
    while ( cin >>  x){
        total = 0;
        char pe;
        for (int i = 0; i < 31; i++){
            shoes[i] = 0;
        }
        for (int i = 0; i < x; i ++){
            cin >> size >> pe;
            size = size - 30;
            if (pe == 'D'){
                if (shoes[size] < 0){
                    total ++;
                }
                shoes[size] ++;
            }
            else{
                    if (shoes[size] > 0){
                        total ++;
                    }
                    shoes[size] --;
                }
        }
        cout << total << "\n";
    }
    
    return 0;
}