//Uri1045

#include <iostream>
 
using namespace std;
 
int main() {
 
    double A, B, C, aux;
    cin >> A >> B >> C;
    if(A < B){
        aux = A;
        A = B;
        B = aux;
    }if(A < C){
        aux = A;
        A = C;
        C = aux;
    }
    if ( A >= (B+C)){
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }else if ((A*A) == ((B*B) + (C*C))){
        cout << "TRIANGULO RETANGULO\n";
    }else if((A*A) > ((B*B) + (C*C))){
        cout <<"TRIANGULO OBTUSANGULO\n";
    }else if((A*A) < ((B*B) + (C*C))){
        cout <<"TRIANGULO ACUTANGULO\n";
    }if(A == B && A == C ){
        cout << "TRIANGULO EQUILATERO\n";
    }else if(A == B || A == C || B == C){
        cout << "TRIANGULO ISOSCELES\n";
    }

 
    return 0;
}