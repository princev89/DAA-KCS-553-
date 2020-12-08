#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    //Performing insertion sort
    for(int i = 1; i < n; i++){
        int j = i;
        while(j-1 >= 0 && arr[j-1] > arr[j]){
            arr[j-1] += arr[j];
            arr[j] = arr[j - 1] - arr[j];
            arr[j - 1] = arr[j - 1] - arr[j];
            j--;
        }
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}