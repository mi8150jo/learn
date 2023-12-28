#include <iostream>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    int HW[H][W];
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> HW[i][j];
        }
    }

    int Q;
    cin >> Q;
    int A[100009], B[100009], C[100009], D[100009];
    for(int i = 0; i < Q; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for(int i = 0; i < Q; i++){
        int y = A[i] - 1;  
        int yi = C[i] - 1;  
        int x = B[i] - 1;  
        int xi = D[i] - 1;  
        int ans = 0;

        for(int j = y; j <= yi; j++){
            for(int k = x; k <= xi; k++){
                ans += HW[j][k];
            }
        }
        cout << ans << endl;
    }
}