//Uri1043

#include <iostream>

using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;
    cout.precision(1);
    if ( abs(A-B) < C && C < (A+B) && abs(A-C) < B && B < (A+C) && abs(B-C) < A && A< (B+C) ){
        cout << "Perimetro = " << fixed << A+B+C << "\n";
    }else{
        cout << "Area = " << fixed << ((A+B)*C)/2 << "\n";
    }

    return 0;

}