#include <iostream>

using namespace std;

int partition(int arr[], int l, int r){
    int temp;
    int x = arr[r];
    int i = l - 1;
    for(int j = l; j <= r - 1 ; j++){
        if(arr[j] < x){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;
    return i + 1;
}

void quickSort(int arr[], int l, int r){
    if(l < r){
        int p = partition(arr, l, r);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
    
}

int main()
{
    int n;
    cout << "Enter the size of arr\n";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    

    return 0;
}