#include<bits/stdc++.h>
using namespace std;


int *countSort(vector<int> A,int B[],int mx){
    int n = A.size();
    int C[mx];
    for (int i = 0; i <= mx; i++) C[i] = 0;
    for(int i = 1; i < n; i++) C[A[i]]++;
    for (int i = 1; i <= mx; i++) C[i] += C[i-1];
    
    for(int j = n-1; j > 0; j--){
        B[C[A[j]]] = A[j];
        C[A[j]]--;
    }
    return B;
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    int mx = INT_MIN;
    int temp;
    for(int i = 1; i <= n; i++){
        cin >> temp;
        arr[i] = temp;
        mx = max(mx, temp);
    }
    cout << "Input Array: ";
    for(int i = 1; i <= n; i++) cout << arr[i] << " ";
    int B[n+1];
    int *result;
    result = countSort(arr,B, mx);
    cout << "\nSorted Array: ";
    for(int i = 1; i <= n; i++) cout << result[i] << " ";
    
    return 0;
}