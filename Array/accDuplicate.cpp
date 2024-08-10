#include<iostream>
using namespace std;

//find the total number of accrence of duplicate element by using binary search

int firstAcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int first = -1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(key == arr[mid]){
            first = mid;
            end = mid -1;
        }else if(key < arr[mid]){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }
    return first;
}
int lastAcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int last = -1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(key == arr[mid]){
            last = mid;
            start = mid + 1;
        }else if(key < arr[mid]){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }
    return last;
}
int main(){
    int arr[] = {1,2,3,4,4,4,4,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the Key element : ";
    cin>>key;

    int first = firstAcc(arr,size,key);
    cout<<"First Acc at : "<<first<<"index"<<endl;
    int last = lastAcc(arr,size,key);
    cout<<"last Acc at : "<<last<<"index"<<endl;
    
    int total = last - first +1;
    cout<<"Total no. of acc are : "<<total<<endl;

    return 0;
}