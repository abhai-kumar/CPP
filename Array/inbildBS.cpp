#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// binary search algorithm invild function
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the target element: ";
    cin >> target;
    bool fun = binary_search(v.begin(), v.end(), target);
    if (fun == true)
    {
        cout << target << " is present in the vector." << endl;
    }
    else
    {
        cout << target << " is not present in the vector." << endl;
    }

    int find;
    cout << "Enter the find element: ";
    cin >> find;
    bool f = binary_search(arr, arr + size, find);
    if (f == true)
    {
        cout << find << " is present in the array." << endl;
    }
    else
    {
        cout << find << " is not present in the array." << endl;
    }

    return 0;
}