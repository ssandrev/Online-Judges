//Uri2720

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct gifts{
    long long volume, id;
}gifts;

int compare (const void * a, const void * b);
int compareId (const void * a, const void * b);

int main(){
    long long ngifts, ngains, height, width, oOutro, nTries;
    scanf("%lld", &nTries);
    for (int i = 0; i < nTries; i++){
        scanf("%lld %lld", &ngifts, &ngains);

        gifts gift[ngifts];
        long long ids[ngains];

        for (int i = 0; i < ngifts; i++){
            scanf("%lld %lld %lld %lld", &gift[i].id, &height, &width, &oOutro);
            gift[i].volume = (height * width * oOutro);
        }
        
        qsort (gift, ngifts, sizeof(gifts), compare);
        
        for ( int i = 0 ; i  < ngains; i ++)
            ids[i] = gift[i].id;
        
        qsort (ids, ngains, sizeof(long long), compareId);
        

        for( int i = 0; i < ngains; i++){
            if (i != ngains - 1)
                printf("%lld ", ids[i]);
            else
                printf("%lld\n", ids[i]);
            
        }
        
    }
    return 0;
}

int compare (const void * a, const void * b)
{

  gifts *giftA = (gifts *)a;
  gifts *giftB = (gifts *)b;
  if (giftA->volume == giftB->volume)
      return (giftA->id > giftB->id);
      
  else
    return ( giftA->volume < giftB->volume );
}

int compareId (const void * a, const void * b)
{

  return ( *(long long*)a - *(long long*)b );
}