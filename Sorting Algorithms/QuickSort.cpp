#include <iostream>
using namespace std;
// write a recursive function to sort the array using quick sort

int partition(int arr[], int s, int e)
{
    // define pivot element
    int pivot = arr[s];

    // number of elements in the array that are less than or equal to pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // fix the pivot element to its right index
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // identify the lesser element in the array left side of the pivot and greater element in the array right side of the pivot
    int i = s;
    int j = e;
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
        // if any element in the array is greater is in left side of pivot and less is in right side of pivot then swap left and right
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void QuickSort(int arr[], int s, int e)
{
    // base case: if the array has one or no element, it is already sorted
    if (s >= e)
        return;

    // find the pivot index
    int p = partition(arr, s, e);

    // sort the left array by the pivot recursively
    QuickSort(arr, s, p - 1);

    // sort the right array by the pivot recursively
    QuickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {8, 1, 15, 3, 20, 50, 30};
    int n = 7;
    int s = 0;
    int e = n - 1;

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // calling sort function
    QuickSort(arr, s, e);

    // print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}