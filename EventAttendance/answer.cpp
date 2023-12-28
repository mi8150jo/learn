#include <iostream>
using namespace std;

int main(){
    int D, N;
    cin >> D >> N;
    int L[100009], R[100009], ans[100009], B[100009];
    for(int i = 1; i <= N; i++){
        cin >> L[i];
        cin >> R[i];
    }

    for(int i = 1; i <= N; i++){
        B[L[i]] += 1;
        B[R[i]+1] -= 1;
    }   

    // 累積和
    ans[0] = 0;
    for(int d = 1; d <= D; d++) ans[d] = ans[d-1] + B[d];
    for(int d = 1; d <= D; d++) cout << ans[d] << endl;
}