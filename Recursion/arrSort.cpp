#include <iostream>
using namespace std;

// find the array is sorted or not by recursion

bool Sorted(int arr[], int n, int i)
{
    if (i == n-1)
    {
        return true;;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    Sorted(arr, n, i + 1);
}
int main()
{
    int arr[] = {3, 5, 2, 7, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    bool S = Sorted(arr, n - 1, i);

    if (S == true)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}