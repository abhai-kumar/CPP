#include<iostream>
#include<vector>
using namespace std;

//find unique element which not matches to already giving element

int findElement(vector<int>arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the element in vector array : ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the element in vector array : ";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    
    int uniqueElement = findElement(arr);
    cout<<"Unique element is : "<<uniqueElement;
    
    return 0;
}