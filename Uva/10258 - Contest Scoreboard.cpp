//10258 - Contest Scoreboard

#include <iostream>
#include <stdio.h>
#include <cstring>

#define MAX 101

using namespace std;




typedef struct Time{
    int id = 0, prob = 0, tempo = 0, erros[10] = {};
    bool acertado[10] = {};
} Time;

struct chave{ // estrutura da lista
     int valor = -1;
};



void inserir(chave l[],Time t[], Time tn, int *tamanhoLista);


int main()
{
    char line[50], resp[50];
    int nTries, id, prob, tempo;
    int tamanhoLista;
    cin >> nTries;

    getchar();getchar();
    while (nTries--){
        tamanhoLista = 0;
        Time time[MAX];
        chave lista[MAX];
        
        while(gets(line)){
            if(!strcmp(line, ""))
                break;
            sscanf (line,"%d %d %d %s",&id, &prob, &tempo , &resp);
            time[id].id = id;
            if (!time[id].acertado[prob]){
                if (resp[0] == 'I'){
                time[id].erros[prob] += 1;
                
                }else if(resp[0] == 'C'){
                    time[id].acertado[prob] = true;
                    time[id].tempo += tempo + time[id].erros[prob]*20;
                    time[id].prob += 1;
                }
            }
            
        }
        for (int i = 1; i < 101; i++){
            if (time[i].id != 0){
            inserir(lista, time, time[i], &tamanhoLista);
            }
        }
        for (int i = 0; i < tamanhoLista; i++)
            cout << lista[i].valor << " " << time[lista[i].valor].prob << " " << time[lista[i].valor].tempo << "\n";  
        
        if(nTries)
            puts("");
    

    }
    return 0;
}

void inserir(chave l[], Time t[], Time tn, int *tamanhoLista){
    int i = (*tamanhoLista);
    
    while(i > 0){
        if(t[l[i-1].valor].prob > tn.prob){
            l[i].valor = tn.id;
            i=-1;
        }else if(t[l[i-1].valor].prob == tn.prob && t[l[i-1].valor].tempo < tn.tempo){
            l[i].valor = tn.id;
            i=-1;
        }else if(t[l[i-1].valor].prob == tn.prob && t[l[i-1].valor].tempo == tn.tempo && t[l[i-1].valor].id < tn.id){
            l[i].valor = tn.id;
            i=-1;
        }else{
            l[i] = l[i-1];
            i--;
        }

    }
    l[i].valor = tn.id;
    (*tamanhoLista)++;
}