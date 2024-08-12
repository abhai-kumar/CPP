#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    // Count how many elements are less than or equal to pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Place pivot at its correct position
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // Arrange elements on left and right of pivot
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void QuickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 1, 20, 3, 20, 50, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    QuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
