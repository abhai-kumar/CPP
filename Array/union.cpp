#include <iostream>
#include <vector>
using namespace std;

// union of two arrays using vector arrays
int main()
{
    int arr[] = {0, 1, 2};
    int sizeA = sizeof(arr) / sizeof(arr[0]);
    int brr[] = {3, 4, 5, 6};
    int sizeB = sizeof(brr) / sizeof(brr[0]);

    vector<int> ans;

    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeB; i++)
    {
        ans.push_back(brr[i]);
    }

    cout << "Print the union array : ";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}