#include<iostream>
using namespace std;

// find the sum of the number digits using recursion

int Sum(int n){
    int val = n / 10;
    if(n == 0){
        return 0;
    }else{
        return (n%10) + Sum(n/10);
    }
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout <<"Sum of number digits: " << Sum(num);

    return 0;
}