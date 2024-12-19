#include<iostream>
using namespace std;

int evenSum(int a){
    int N = 0;
    for(int i = 0; i <= a; i = i+2){
        N = N + i;
    }
    return N;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int sum = evenSum(n);
    cout<<"Sum of even Numbers : " << sum;

    return 0;
}