#include <iostream>
using namespace std;

int main(){
    int N, Q, L[100009], R[100009], S[100009];
    cin >> N >> Q;
    int A[N];

    S[0] = 0;
    for(int i = 1; i <= N; i++){
        cin >> A[i];
        S[i] = S[i-1] + A[i];
        // cout << A[i] << endl;
    }

    for(int i = 1; i <= Q; i++){
        cin >> L[i] >> R[i];
        cout << S[R[i]] - S[L[i] - 1] << endl;
    }
    
}