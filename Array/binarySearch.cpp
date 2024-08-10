#include <iostream>
using namespace std;

// Search element by using binary search algorithm

int binaryS(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (element > target)
        {
            //search in left
            end = mid - 1;
        }
        else
        {
            //search in right
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int index = binaryS(arr, n, target);

    if (index == -1)
    {
        cout << "Element not found in array";
    }
    else
    {
        cout << "Element found at index: " << index;
    }
}