//Uri1467

#include <stdio.h>
 
int main() {
 
      int A, B, C;
    while(scanf("%d",&A) != EOF){
        scanf(" %d %d", &B, &C);
        if((A+B+C) == 3 || (A+B+C) == 0){
                printf("*\n");
        } else if (A != B && B == C){
            printf("A\n");
        } else if(B != C && A == C){
            printf("B\n");
        } else if(C != B && B == A ){
            printf("C\n");
        }
    }
 
    return 0;
}