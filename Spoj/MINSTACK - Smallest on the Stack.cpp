//MINSTACK - Smallest on the Stack

#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<long long> pilha;
long long nT, x, popado;
char func[50];
long long minimo = 1e10;
cin >> nT;
int i = 1;
while (nT--){
    scanf("%s", func);
    if (func[1] == 'U'){
    	scanf("%lld",&x);
        if(x <= minimo){
        	pilha.push_back(minimo);
        	minimo = x;
			}
		pilha.push_back(x);
    	}
    else if (pilha.empty()){
        printf("EMPTY\n");
    	}
    else if (func[2] == 'P'){
    	popado = pilha.back();
    	pilha.pop_back();
    	if (minimo == popado){
    		minimo = pilha.back();
    		pilha.pop_back();
    		}
    }	
    else if (func[0] == 'M'){
        printf("%lld\n",minimo);
    	}
	}
return 0;
}