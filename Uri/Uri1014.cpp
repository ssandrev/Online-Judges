//Uri1014

#include <iostream>
 
using namespace std;
 
int main() {
 
     int A;
    double B, resp;
    cin >> A >> B;
    resp = A/B;
    cout.precision(3);
    cout << fixed << resp << " km/l\n";
 
    return 0;
}