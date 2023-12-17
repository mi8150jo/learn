#include <iostream>
using namespace std;

int main(){
    int N, ans = 0, omomi;

    for(int i = 7; i >= 0; i--){
        cin >> N;
        omomi = (1 << i);
        ans += N * omomi;
    }

    cout << ans << endl;
    return 0;
}