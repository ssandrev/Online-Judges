//Uri1165

#include <iostream>
 
using namespace std;
 
int main() {
    int N, aux;
    cin >> N;
    int vetor[N];
    for (int i = 0; i < N; i++){
        cin>> vetor[i];
    }
    for (int i = 0; i < N; i++){
        aux = 1;
        for(int j = 2; j<vetor[i]; j++){
            if(vetor[i]%j==0){
                cout << vetor[i] <<" nao eh primo\n";
                aux=0;
                break;
            }
        }if (aux==1){
            cout << vetor[i] <<" eh primo\n";
        }
    }
    return 0;
}