//Uri1013

#include <iostream>
 
using namespace std;
 
int main() {
 
    int A, B, C, maior, maiorAB;
    cin >> A >> B >> C;
    maiorAB = (A+B+abs(A-B))/2;
    maior = (maiorAB + C +abs(maiorAB - C))/2;
    cout << maior << " eh o maior\n";
 
    return 0;
}