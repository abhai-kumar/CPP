#include <iostream>
#include <vector>
using namespace std;

// print the all subarray(subset) of the array

void subarray_util(vector<int> &arr, int s, int e)
{
    if (e == arr.size())
    {
        return;
    }
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    subarray_util(arr, s, e + 1);
}


void subarray(vector<int>& arr){
    for(int s = 0; s < arr.size(); s++){
        int e = s;

        subarray_util(arr, s, e);
    }
}
int main()
{
    vector<int> ans{1, 2, 3, 4, 5};

    subarray(ans);

    return 0;
}