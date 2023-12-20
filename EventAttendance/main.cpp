#include <iostream>
using namespace std;

int main(){
    int D, N;
    cin >> D >> N;

    int R[100009], L[100009], Schedule[100009]={};
    for(int i = 1; i <= N; i++) cin >> L[i] >> R[i];
    for(int i = 1; i <= N; i++){
        // cout << L[i] << " " << R[i] << endl;
        for(int x = L[i]; x <= R[i]; x++){
            // cout << L[i] << " " << R[i] << endl;
            Schedule[x] += 1;
            // cout << Schedule[x] << endl;
        }
    }
    for(int i = 1; i <= D; i++) cout << Schedule[i] << endl;

}