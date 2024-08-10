#include<iostream>
using namespace std;

//sort the array as neagtive number of array are in starting position no need to sort as accending or descending order

void NeagtiveArr(int a[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        if(a[start] < 0){
            start++;
        }else if(a[end] > 0){
            end--;
        }else{
            swap(a[start], a[end]);
        }
    }
}

int main(){
    int arr[] = {1,-4,6,-8,2,4,-5,-2};
    int n = sizeof(arr)/sizeof(arr[0]);

    NeagtiveArr(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}