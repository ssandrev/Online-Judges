//Uri1019

#include <iostream>
 
using namespace std;
 
int main() {
 
    int hora=0, minut=0, seg;
    cin >> seg;
    hora = seg/3600;
    seg = seg%3600;
    minut = seg/60;
    seg = seg%60;
    cout << hora <<":" << minut << ":" << seg << "\n";
 
    return 0;
}