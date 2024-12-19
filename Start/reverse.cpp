#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the num : ";
    cin>>a;

    int reverse = 0;

    while(a != 0 ){
        int rem = a % 10;
        reverse = reverse * 10 + rem;
        a = a / 10;
    }
    cout<<"Reverse num is: "<<reverse;
    return 0;
}