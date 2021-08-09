//Uri1929

#include <stdio.h>
#include <math.h>

int verifica(int A, int B, int C, int D){
    if ( abs(A-B) < C && C < (A+B) && abs(A-C) < B && B < (A+C) && abs(B-C) < A && A< (B+C) ){
        return 1;
    } else {
        if( abs(A-B) < D && D < (A+B) && abs(A-D) < B && B < (A+D) && abs(B-D) < A && A < (B+D) ){
            return 1;
        } else {
            if ( abs(A-C) < D && D < (A+C) && abs(A-D) < C && C < (A+D) && abs(C-D) < A && A < (A+C) ){
                return 1;
            } else {
                if(abs(B-C) < D && D < (B+C) && abs(B-D) < C && C < (B+D) && abs(C-D) < B && B < (C+D) ){
                    return 1;
                }else {
                    return 0;
                }
            }
        }
    }



}

int main(){
    int A, B, C, D, resp;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    resp = verifica(A,B,C,D);
    if(resp == 1){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;