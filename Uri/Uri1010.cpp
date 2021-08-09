//Uri1010

#include <iostream>
 
using namespace std;
 
int main() {
 
    int cod1, qt1, cod2, qt2;
    double preco ,preco1, preco2;
    cin >> cod1 >> qt1 >> preco1;
    cin >> cod2 >> qt2 >> preco2;
    preco = (qt1*preco1) + (qt2*preco2);
    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << fixed << preco << "\n";
 
    return 0;
}