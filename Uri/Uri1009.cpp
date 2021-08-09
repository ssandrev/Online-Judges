//Uri1009

#include <iostream>
 
using namespace std;
 
int main() {
 
    string nome;
    double sal, salario, com;
    cin >> nome;
    cin >> sal >> com;
    salario = sal + (0.15*com);
    cout.precision(2);
    cout << "TOTAL = R$ " << fixed << salario << "\n";
    return 0;
}