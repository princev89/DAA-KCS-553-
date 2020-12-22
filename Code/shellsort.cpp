#include<bits/stdc++.h>
using namespace std;

int shellSort(int A[], int n){
    int incr = n /2;
    int t;
    while(incr > 0){
        for(int i = incr; i < n; i++){
            int j = i - incr;
            
            while (j > 0)
            {
                if(A[j] > A[j+incr]){
                    //swap them
                    t = A[j];
                    A[j] = A[j+incr];
                    A[j+incr] = t;
                    j = j - incr;
                }
                else{
                    j = 0;
                }  
            }    
        }
        incr = incr / 2;
    }
    cout << "\nSorted Array: ";
    for(int i = 1; i < n; i++) cout <<  A[i] << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    cout << "Input Sort: ";
    for(int i = 1; i <= n; i++) cout << arr[i] << " ";
    shellSort(arr, n+1);
    return 0;
}