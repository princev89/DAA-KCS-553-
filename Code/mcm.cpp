#include<bits/stdc++.h>
using namespace std;
int s[20][20];
void mcm(int p[], int n){
    
    int m[n][n];
     
    
    for(int i = 1; i <= n; i++) {
        
        m[i][i] = 0;
    }
    
    for(int l = 2; l <= n; l++){
        for(int i = 1; i <= n-l+1; i++){
            int j = i + l - 1;
            
            m[i][j] = INT_MAX;
            for(int k = i; k < j; k++){
                int q = m[i][k] + m[k+1][j] + (p[i-1] * p[k] * p[j]);
                if(q < m[i][j]){
                    m[i][j] = q;
                   
                    s[i][j] = k;
                }
            }
        }
        
    }
   
    

}


void pop(int i, int j){
    if(i == j) cout << " A" << i ;
    else{
        cout << "(";
        pop(i, s[i][j]);
        pop(s[i][j] + 1, j);
        cout << ")";
    }
}

int main(){
    cout << "Enter the no of elements: \n";
    int n;
    cin >> n;
    int arr[n+1];
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    
  

  
    mcm(arr, n);
    // for(int i = 1; i < n-1; i++){
    //     for(int j = 2; j < n; j++){
    //         cout << s[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    pop( 1, n-1);
    
    return 0;
}