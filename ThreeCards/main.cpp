#include <iostream>
using namespace std;

int main(){
    int N, K, ans = 0;
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                if(i+j+k == K){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}