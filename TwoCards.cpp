#include <iostream>
using namespace std;

int main(){
    int N, ans[10], amari, i = 10;
    cin >> N;
    for(int i = 0; i < 10; i++){
        ans[i] = 0;
    }
    
    while(N != 0){
        amari = N % 2;
        N = N / 2;
        ans[i-1] = amari;
        // cout << N << " " << amari << endl;
        i--;
    }

    for(int j = 0; j < 10; j++){
        cout << ans[j];
    }

    return 0;

}