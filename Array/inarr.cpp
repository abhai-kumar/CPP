#include<iostream>
using namespace std;

// take input array values

int main(){
    int arr[5];

    cout<<"Enter array values : ";
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        arr[i] = n;
    }
    cout<<endl<<"Printing arrays : ";

    for(int i=0;i<5;i++){
        cout<<arr[i] * 2 <<" ";
    }
    cout<<endl;
    return 0;
}