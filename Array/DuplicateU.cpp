#include <iostream>
#include <vector>
using namespace std;

// union of two arrays without any duplicates
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{4, 7, 2, 9, 10};

    vector<int> ans;

    // find duplicates and initialize with int_min
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT8_MIN;
            }
        }
    }

    // union of both arrays
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (brr[i] != INT8_MIN)
        {
            ans.push_back(brr[i]);
        }
    }

    cout << "Print the result of union arrays : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}