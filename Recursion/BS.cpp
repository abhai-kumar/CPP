#include<iostream>
#include<vector>
using namespace std;

// binary search using recursion
int BinarySearch(vector<int> arr, int s , int e, int target){
    if(s > e){
        return -1;
    }
    int mid = (s + e) / 2;
    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] < target){
        return BinarySearch(arr, mid+1, e, target);
    }else{
        return BinarySearch(arr, s, mid-1, target);
    }
}
int main(){
    vector<int>v{10,20,30,40,90,99};
    int target = 99;
    int e = v.size()-1;
    int s = 0;

    int a = BinarySearch(v,s,e,target);

    cout<<"target found at "<<a <<" index";

    return 0;
}