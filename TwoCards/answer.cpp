#include <iostream>
using namespace std;

int main(){
    // 入力
    int N;
    cin >> N;

    // 2進数の変換
    for (int x = 9; x >= 0; x--){
        int wari = (1 << x);
        cout << wari << endl;
        // cout << (N / wari) % 2;
    }
    cout << endl;
    return 0;
}