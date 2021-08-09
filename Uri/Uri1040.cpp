//Uri1040

#include <iostream>
 
using namespace std;
 
int main() {
 
    double A, B, C, D, media;
    cin >> A >> B >> C >> D;
    media = ((A*2)+(B*3)+(C*4)+(D*1))/10;
    cout.precision(1);
    cout << "Media: " << fixed << media << "\n";
    if(media >= 7){
        cout << "Aluno aprovado.\n";
    }else if(media >= 5 && media < 7){
        cout << "Aluno em exame.\n";
        cin >> A;
        cout << "Nota do exame: " << fixed << A <<"\n";
        media = (media+A)/2;
        if(media >=5){
            cout << "Aluno aprovado.\n";
        }else{
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << fixed << media << "\n";
    }else{
        cout << "Aluno reprovado.\n";
    }
 
    return 0;
}