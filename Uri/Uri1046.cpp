//Uri1046

#include <iostream>
 
using namespace std;
 
int main() {
 
    int t_begi, t_final, t_game;
    cin >> t_begi >> t_final;
    if(t_begi > t_final){
        t_game = (24 - t_begi) + t_final;
    }else if(t_begi < t_final){
        t_game = t_final - t_begi;
    }else if(t_begi == t_final){
        t_game = 24;
    }
    cout << "O JOGO DUROU " << t_game << " HORA(S)\n";
 
    return 0;
}