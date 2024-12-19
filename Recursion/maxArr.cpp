#include <iostream>
using namespace std;

// recrusive Function to find the maximum element in an array
int Maxelemrnt(int arr[], int n, int i, int& ax)
{
    if (i >= n)
    {
        return 0;
    }
    // if (arr[i] > ax)
    // {
    //     ax = arr[i];
    // }
    ax = max(ax, arr[i]);
    Maxelemrnt(arr, n, i + 1, ax);
    return ax;
}
int main()
{
    int arr[] = {17, 20, 2, 5, 9, 27, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int ax = INT16_MIN;

    int ans = Maxelemrnt(arr, n, i, ax);
    cout << "Max element of array : " << ans << endl;

    return 0;
}