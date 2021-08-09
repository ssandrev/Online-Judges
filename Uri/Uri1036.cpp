//Uri1036

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
 
int main() {
 
   
    double a, b, c;
    cin >> a >> b >> c;
    if((pow(b,2) - 4*a*c) < 0 || 2*a == 0)
        cout << "Impossivel calcular\n";
    else{
        printf("R1 = %.5lf\n",((-b) + sqrt((pow(b,2) - 4*a*c)))/(2*a));
        printf("R2 = %.5lf\n",((-b) - sqrt((pow(b,2) - 4*a*c)))/(2*a));
         }
 
    return 0;
}