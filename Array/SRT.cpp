#include<iostream>
using namespace std;

//find the squar root of a number using binary search

int sRoot(int n){
    int start = 1, end = n;
    int ans;
    while(start<=end){
        int mid = (start+end)/2;
        if(mid*mid == n){
            return mid;
        } else  if(mid*mid > n){
            end = mid-1;
        }else{
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int ans = sRoot(n);

    cout<<"Square root of "<<n<<" is "<<ans<<endl;

    return 0;
}