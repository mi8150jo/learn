#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

int D,N,L,R,A_L[100100];

int main()
{
    cin >> D;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> L>>R;
        A_L[L] ++;
        A_L[R+1] --;
    }

    for(int i=1;i<D;i++){
        A_L[i+1] += A_L[i];
    }

    for (int i = 1; i < D+1; i++) {
        cout << A_L[i] << endl;
    }


	return 0;
}