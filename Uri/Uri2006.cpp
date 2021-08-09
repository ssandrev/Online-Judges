//Uri2006

#include <stdio.h>
 
int main() {
 
      int T, resp=0, i;
    int comp[5];
    scanf ( "%d",&T );
    for ( i = 0; i < 5; i++ ){
        scanf( "%d",&comp[i] );
    } for ( i = 0; i < 5; i++ ){
        if(comp[i] == T){
            resp+=1;
        }
    }
    printf("%d\n",resp);
    return 0;
}