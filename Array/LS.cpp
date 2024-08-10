#include <iostream>
using namespace std;

// linear search
int found(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is present in array at index " << i << endl;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    found(arr, size, key);

    return 0;
}