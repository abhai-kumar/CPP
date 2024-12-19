#include<iostream>
using namespace std;

//factorial of the number using recrusion

int fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
 
}
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    cout<<"Factorial of the number is : "<<fact(n)<<endl;

    return 0;
}