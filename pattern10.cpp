#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n-i; k++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<< j;
        }
        for(int L = 1; L <= i-1; L++){
            cout<<L;
        }
        cout<<endl;
    }
}