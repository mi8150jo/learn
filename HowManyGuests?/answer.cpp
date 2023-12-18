#include <iostream>
using namespace std;

int main(){
    int N, Q, tmp = 0;
    cin >> N >> Q;
    int A[N];
    int LR[2][Q];
    int Answer[Q];


    for(int i = 1; i <= N; i++){
        cin >> A[i];
        A[i] = A[i] + A[i-1];
        cout << A[i] << endl;
    }

    // for(int i = 0; i < Q; i++){
    //     cin >> LR[0][i] >> LR[1][i];
    //     for(int x = LR[0][i]; x <= LR[1][i]; x++){
    //         // cout << x << endl;
    //         tmp += A[x-1];
    //         // cout << tmp << endl;
    //     }
    //     Answer[i] = tmp;
    //     tmp = 0;
    // }

    // for(int i = 0; i < Q; i++){
    //     cout << Answer[i] << endl;
    // }
}