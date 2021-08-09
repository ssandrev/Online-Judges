//Uri1103

#include <iostream>
 
using namespace std;
 
int main() {
 
    int H1, M1, H2, M2;
    while(cin >> H1 >> M1 >> H2 >> M2){
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0){
            break;
        }else if(H2 < H1){
            cout << (23 - H1)*60 + H2*60 + (M2 - M1 + 60) << "\n";
        }else if(H2 == H1 && M2 > M1) {
            cout << M2 - M1 << "\n";
        }else if(H2 == H1){
            cout << 24 * 60 - (M1 - M2) << "\n";
        }else {
            cout << (H2 - H1) * 60 + (M2 - M1) << "\n";
        }
        
    }
 
    return 0;
}