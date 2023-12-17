#include <iostream>
using namespace std;

int main(){
    int N, K, A[22];
    cin >> N >> K;
    // for(int i = 1; i <= N; i++) cin >> A[i];

    bool Answer = false;
    for(int i = 0; i < (1 << N); i++){
        cout << i << endl;
    }
}