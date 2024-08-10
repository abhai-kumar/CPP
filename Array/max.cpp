#include<iostream>
using namespace std;

// find maximun element
int main(){
    int arr[] = {1,2,9,7,4,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxElement = INT8_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    cout<<"Maximal element: "<<maxElement<<endl;
}