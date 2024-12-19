#include<iostream>
using namespace std;

//print element in fibonacci series using recursion function

int fib(int n){
    if(n == 1){
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the term of fibonacci series : "<<endl;
    cin>>n;

    cout<<n<<"th term of fibonacci series is : "<<fib(n);

    return 0;
}