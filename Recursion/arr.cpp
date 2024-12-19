#include <iostream>
using namespace std;

// recursion function of print element of array
void print(int arr[], int n, int i)
{
    if (i >= n) // base condition for i never gone greter than n
    {
        return;
    }
    cout << arr[i] << " ";
    print(arr, n, i + 1 /*++i*/); //recursive call
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    print(arr, size, i);

    return 0;
}