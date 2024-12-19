#include<iostream>
using namespace std;

//print n reverse without using loop
int num(int n){
    if(n == 0){
        return 0;
    }
    num(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    num(n);

    return 0;
}