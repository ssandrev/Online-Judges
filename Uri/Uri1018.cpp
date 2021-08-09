//Uri1018

#include <iostream>
 
using namespace std;
 
int main() {
 
    int cem=0, cinq=0, vin=0, dez=0, cinco=0, dois=0, um=0, dindin;
    cin >> dindin;
    int din = dindin;
    cem = dindin/100;
    dindin = dindin%100;
    cinq = dindin/50;
    dindin = dindin%50;
    vin = dindin/20;
    dindin = dindin%20;
    dez = dindin/10;
    dindin = dindin%10;
    cinco = dindin/5;
    dindin = dindin%5;
    dois = dindin/2;
    dindin = dindin%2;
    um = dindin;
    cout << din <<"\n" << cem << " nota(s) de R$ 100,00" << "\n";
    cout << cinq << " nota(s) de R$ 50,00" << "\n";
    cout << vin << " nota(s) de R$ 20,00" << "\n";
    cout << dez << " nota(s) de R$ 10,00" << "\n";
    cout << cinco << " nota(s) de R$ 5,00" << "\n";
    cout << dois << " nota(s) de R$ 2,00" << "\n";
    cout << um << " nota(s) de R$ 1,00" << "\n";
 
    return 0;
}