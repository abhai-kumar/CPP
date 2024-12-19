#include <iostream>
#include<vector>
using namespace std;

// count coins need to complete the target coin
int solve(vector<int> &arr, int target){
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT8_MAX;
    }
    int mini = INT8_MAX;
    for(int i=0; i<arr.size(); i++){
        int ans = solve(arr, target - arr[i]);
        if(ans != INT8_MAX){
            mini = min(mini, ans+1);
        }
    }
    return mini;
}
int main(){
    vector<int>v{1,25,5,10};
    int target = 180;

    int ans = solve(v,target);

    cout<<"Answer : "<<ans;

    return 0;
}