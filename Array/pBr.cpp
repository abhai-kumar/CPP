#include<iostream>
using namespace std;

// pass by reference :
int Increment(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] + 1;
    }
    return 0;
}

int printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr [n];

    cout<<"Enter the value of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    printArr(arr,n);
    Increment(arr,n);
    cout<<endl;
    printArr(arr,n);
    
    return 0;
}