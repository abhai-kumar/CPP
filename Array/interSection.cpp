#include <iostream>
#include<vector>
using namespace std;

//intersection elements in two arrays
int main(){
    vector<int>arr{1,2,8,6,4};
    vector<int>brr{1,6,3,7,9,4};

    vector<int>ans;

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < brr.size(); j++){
            if(arr[i] == brr[j]){
                ans.push_back(arr[i]);
            }
        }
    }

    cout<<"common elements in both of the arrays are : ";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}