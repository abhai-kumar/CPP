#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    cout<<"Printing array ";
    for(int i = 0; i < 5; i++){
        arr[i] = 1;
        cout << arr[i]<<" ";
    }

    return 0;
}