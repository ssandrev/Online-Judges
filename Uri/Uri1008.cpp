//Uri1008

#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, horas;
    double sal, salario;
    cin >> num >> horas;
    cin >> sal;
    salario = horas * sal;
    cout.precision(2);
    cout << "NUMBER = " << num << "\nSALARY = U$ " << fixed << salario <<"\n";
 
    return 0;
}