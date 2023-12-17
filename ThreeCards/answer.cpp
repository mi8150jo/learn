#include <iostream>
using namespace std;

int main(){
    int N, K, ans = 0;
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            int z = K - i - j;
            if(z >= 1 && z <= N){
                ans++;
            }
        }
    }
    　
    cout << ans << endl;
    return 0;
}