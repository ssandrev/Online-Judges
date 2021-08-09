//Uri1044

#include <iostream>
 
using namespace std;
 
int main() {
 
int A, B;
    cin >> A >> B;
    if (A > B){
            if(A%B == 0){
                cout << "Sao Multiplos\n";
            }else{
                cout << "Nao sao Multiplos\n";
            }
    }else{
        if(B%A == 0){
            cout << "Sao Multiplos\n";;
        }else{
            cout << "Nao sao Multiplos\n";
        }
    }
 
    return 0;
}