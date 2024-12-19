#include<iostream>
using namespace std;

void printSum (int n, int m){
    int sum = n + m;
    cout<< sum;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    printSum(a,b);
    return 0;
}