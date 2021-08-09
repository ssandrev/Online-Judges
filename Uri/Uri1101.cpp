//Uri1101

#include <iostream>
 
using namespace std;
 
int main() {
    int X;
    int sum;
    int help=1;
    int vector[1000];
    cin >> vector[0];
    while(vector[help-1]>0){
        cin >> vector[help];
        help++;
    }
    if (help %2 == 0){
        help = help- 1;
    }
    for(int i=0; i<help-1;i=i+2){
    if(vector[i] > vector[i+1]){
        sum = 0;
        for(int j=vector[i+1]; j <=vector[i];j++){
            cout << j << " ";
            sum += j;
            }
        cout << "Sum=" << sum << "\n";
        }
    else{
        sum = 0;
        for(int j=vector[i]; j <=vector[i+1];j++){
            cout << j << " ";
            sum += j;
            }
        cout << "Sum=" << sum << "\n";
            }
        }
    return 0;
}