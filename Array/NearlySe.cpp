#include<iostream>
using namespace std;

// search element in nearly sorted array by using binary search

int Search(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(key == arr[mid]){
            return mid;
        }
        if(mid +1 <n && key == arr[mid + 1]){
            return mid+1;
        }
        if(mid -1 >0 && key == arr[mid-1]){
            return mid-1;
        }
        if(key > arr[mid]){
            start = mid +2;
        }else{
            end = mid -2;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,3,40,20,50,80,70};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter the target value: "<< endl;
    cin>>target;

    int ans = Search(arr,size,target);
    if(ans==-1){
        cout<<"target not found: "<< endl;
    }else{
        cout<<"target found at: "<<ans<<" index";
    }
}