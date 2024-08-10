#include<iostream>
using namespace std;

// find zeros and ones
int main(){
    int arr[] = {0,0,1,0,0,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int zeros = 0;
    int ones = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeros++;
        }
        if(arr[i] == 1){
            ones++;
        }
    }
    cout<<"No. of zeros : "<<zeros<<endl;
    cout<<"No. of ones : "<<ones<<endl;
    
    return 0;
}
