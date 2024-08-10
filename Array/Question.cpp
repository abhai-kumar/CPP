#include<iostream>
using namespace std;

int Diff(int arr[], int n){
    int s = 0;
    int e = n -1;
    int dif = INT8_MAX;
    int temp = 0;
    while(s<e){
        int ans = arr[s] - arr[e];
        if(ans < dif){
            dif = ans;
            temp = e;
        }
        e--;
    }
    cout<<"the least difference "<<dif<<endl;
    cout<<"Last index of difference "<<temp<<endl;
}
int main(){
    int arr[] ={9,5,7,8,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    Diff(arr, size);


    return 0;
}