#include<iostream>
using namespace std;

// print array
int main(){
    int arr[] = {1,2,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array values : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}