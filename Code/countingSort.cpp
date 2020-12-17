#include<bits/stdc++.h>
using namespace std;

// void CountSort(int A[], int B[], int k){
//     int n = 6;
//     int  C[n+1];
//     for(int i = 1; i <= k; i++) C[i] = 0;

//     for(int j = 1; n; j++) C[A[j]] = C[A[j]] + 1;

//     for(int i = 1; i <= k; i++){
//         C[i] = C[i] + C[i-1];
//     }

//     for(int j = n; j > 0; j--){
//         B[C[A[j]]] = A[j];
//         C[A[j]] = C[A[j]] - 1;

//     }

//     for(int i = 1; i <= n; i++) cout << B[i] << " ";
    

// }

int main(){
    int n;
    cin >> n;
    
    int A[n+1];
    int temp, mx = INT_MIN;

    for(int i = 1; i <= n; i++) {
        cin >> temp;
        A[i]  = temp;
        mx = max(mx, temp);
    }

    vector<int> B[mx];
    cout << mx << endl;
    cout << B.length();

    // CountSort(A, B, mx);
    // not completed yet
    

    return 0;
}