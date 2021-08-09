//Uri1015

#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
 
    double A, B, a, b, resp;
    cin >> A >> B >> a >> b;
    resp = sqrt(((a-A)*(a-A))+ ((b-B)*(b-B)));
    cout.precision(4);
    cout << fixed << resp << "\n";
 
    return 0;
}