#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = n; i >= 1; i--){
        for(int k = 1; k<=n-i; k++){
            cout<<" ";
        }
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}