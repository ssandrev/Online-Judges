//Uri1020

#include <iostream>
 
using namespace std;
 
int main() {
 
    int anos=0, meses=0, dias;
    cin >> dias;
    anos = dias/365;
    dias = dias%365;
    meses = dias/30;
    dias = dias%30;
    cout << anos <<" ano(s)\n" << meses << " mes(es)\n" << dias << " dia(s)\n";
 
    return 0;
}