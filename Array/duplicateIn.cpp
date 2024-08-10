#include<iostream>
#include<vector>
using namespace std;

//find the first accrence of duplicate element
int indexAcc(vector<int>v, int target) {
    int start = 0;
    int end = v.size() - 1;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = v[mid];
        if(element == target){
            ans = mid;
            end = mid - 1;
        }else if(target > element){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int>v{1,2,3,4,4,4,4,5,6};
    int target;
    cout<<"Enter the target number: ";
    cin>>target;

    int in = indexAcc(v, target);
    cout<<in<<" ans";

    return 0;
}