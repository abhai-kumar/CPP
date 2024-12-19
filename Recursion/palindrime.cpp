#include<iostream>
using namespace std;
// check that the given string is palindrome or not using recursion

bool checker(string str, int i, int n){
    if(i >= n){
        return true;
    }
    if(str[i]!= str[n]){
        return false;
    }
    return(str, i+1,n-1);
}
int main(){
    string str = "12321";
    int i = 0;
    int n = str.length()-1;

    bool c = checker(str,i,n);

    if(c == false){
        cout << "No, the given string is not a palindrome";
    }else{
        cout << "Yes, the given string is a palindrome";
    }

    return 0;
}