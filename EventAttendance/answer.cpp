#include <iostream>
using namespace std;

int main(){
    int D, N, People=0;
    cin >> D >> N;
    int L[100009], R[100009], ans[100009]={};
    for(int i = 1; i <= N; i++){
        cin >> L[i];
        cin >> R[i];
    }

    for(int i = 1; i <= N; i++){
        ans[L[i]] += 1;
        ans[R[i]+1] -= 1;
    }   

    for(int i = 1; i <= D; i++){
        People += ans[i];
        cout << People << endl;
    }


    // for(int i = 1; i <= D; i++){
    //     cout << ans[i] << " " ;
    // }
    // for(int i = 0; i < N; i++){
    //     cout << L[i] << " " << R[i] << endl;
    // }
}