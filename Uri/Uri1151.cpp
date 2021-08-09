//Uri1151

#include <iostream>
 
using namespace std;
 
int main() {
    int N, previous = 0, current = 1, aux;
    cin >>  N;
    cout << 0  << " "<< 1;
    for (int i = 0; i <N - 2; i++){
        aux = previous + current;
        cout << " " << aux ;
        previous = current;
        current = aux;
        
    }
    cout << "\n";
    return 0;
}