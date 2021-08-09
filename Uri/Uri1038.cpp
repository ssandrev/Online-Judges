//Uri1038

#include <iostream>
 
using namespace std;
 
int main() {
 
    int cod;
    double qt;
    cin >> cod >> qt;
    cout.precision(2);
    switch(cod){
        case 1 :
            cout << "Total: R$ " << fixed << 4*qt <<"\n";
            break;
        case 2 :
            cout << "Total: R$ " << fixed << 4.5*qt <<"\n";
            break;
        case 3 :
            cout << "Total: R$ " << fixed << 5*qt <<"\n";
            break;
        case 4 :
            cout << "Total: R$ " << fixed << 2*qt <<"\n";
            break;
        case 5 :
            cout << "Total: R$ " << fixed << 1.5*qt <<"\n";
            break;
    }
 
    return 0;
}