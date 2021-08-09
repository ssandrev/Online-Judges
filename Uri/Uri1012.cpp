//Uri1012

#include <iostream>
 
using namespace std;
 
int main() {
 
    double A, B, C,tri, qua, ret, cir, tra;
    cin >> A >> B >> C;
    tri = (A*C)/2;
    cir = 3.14159*(C*C);
    tra = (C*(A + B))/2;
    qua = B*B;
    ret = A*B;
    cout.precision(3);
    cout << "TRIANGULO: " << fixed << tri << "\n";
    cout << "CIRCULO: " << fixed << cir << "\n";
    cout << "TRAPEZIO: " << fixed << tra << "\n";
    cout << "QUADRADO: " << fixed << qua << "\n";
    cout << "RETANGULO: " << fixed << ret << "\n";
 
    return 0;
}