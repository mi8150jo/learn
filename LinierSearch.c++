#include <iostream>
using namespace std;

int main(){
    int N = 0, X = 0;
    cin >> N >> X;
    bool flag = false;

    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] == X){
            flag = true;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}