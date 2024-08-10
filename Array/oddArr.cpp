#include<iostream>
using namespace std;
//in a duplicate array find the odd accruing element

int Search(int arr[],int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        int mid = s + (e - s)/2;
        if(s == e){
            return mid;
        }
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid +2;
            }else{
                e = mid;
            }
        }else{
            if(arr[mid] == arr[mid-1]){
                s = mid +1;
            }else{
                e = mid -1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {3,1,1,2,2,3,3,4,4,600,600,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = Search(arr,size);

    cout<<"element is at index: "<<ans<<endl;
    cout<<"element is: "<<arr[ans]<<endl;
     
}