#include<iostream>
#include<vector>
using namespace std;

//find the pair in  array which sum is equal to n
int main(){
    int n;
    cout<<"Enter the sum element : ";
    cin>>n;

    vector<int>arr{10,20,30,40,50};

    cout<<"Pair which sum is equal to "<<n << " are : ";
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] + arr[j] == n){
                cout<< arr[i] << "," <<arr[j]<<" ";
            }
        }
    }
}