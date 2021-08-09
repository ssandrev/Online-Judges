//12207 - That is Your Queue

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	long long P, C, caso = 1, z;
	char c;
	while (1){

    	list<long long> fila;
    	vector<long long> resp;
    	scanf("%lld %lld", &P, &C);
    	if (P == 0){
    		break;
    	}
    	
        for (int i = 1; i <= min(P, C); i++){
			fila.push_back(i);
		}
		printf("Case %lld:\n", caso);
		caso++;
	    for (int i = 0; i < C; i++){
	        scanf(" %c", &c);
	        if (c == 'N'){
	        	printf("%lld\n",fila.front());
	            fila.push_back(fila.front());
	            fila.pop_front();
	        }
	        else{
	        	scanf("%lld", &z);
	        	fila.remove(z);
	            fila.push_front(z);
	        }
	    }
	}
	
	return 0;
	}