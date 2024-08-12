#include<iostream>
using namespace std;
// Function to print permutations of a given string by using backtracking

void permutation(string s , int i){
    if(i>=s.length()){
        cout<<s<<endl;
        return;
    }

    for(int j = i; j<s.length(); j++){
        swap(s[i],s[j]);

        permutation(s, i+1);

        swap(s[i], s[j]); // backtrack to restore original string
    }
}
int main(){
    string str = "abc";
    int i = 0;

    permutation(str,i);

    return 0;
}