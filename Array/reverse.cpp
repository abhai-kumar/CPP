#include <iostream>
using namespace std;

// reverse array
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    cout << "Printing array before reverse ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    cout << "Printing array after reverse ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}