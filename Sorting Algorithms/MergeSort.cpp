#include <iostream>
using namespace std;

// sort the array by using merge sort recursively

void merge(int* arr, int s, int e){
    int mid = (s + e)/2;
    int len1 = mid - s +1;
    int len2 = e - mid;
    
    // assume that the created array for length1 and length2
    int* left = new int[len1];
    int* right = new int[len2];

    // copy the elements of array to left array
    int k = s;
    for(int i = 0; i < len1; i++){
        left[i] = arr[k++];
    }

    // copy the elements of array to right array
    k = mid +1;
    for(int j = 0; j < len2; j++){
        right[j] = arr[k++];
    }

    // merge the sorted left and right array into arr
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;

    while(leftIndex < len1 && rightIndex < len2) {
        if(left[leftIndex] < right[rightIndex]){
            arr[mainIndex++] = left[leftIndex++];
        }else{
            arr[mainIndex++] = right[rightIndex++];
        }
    }

    // if there are remaining elements in left array
    while(leftIndex < len1){
        arr[mainIndex++] = left[leftIndex++];
    }

    // if there are remaining elements in right array
    while(rightIndex < len2){
        arr[mainIndex++] = right[rightIndex++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e) // (s==e) all elements are single element && (s>e) invalid array
    {
        return;
    }

    int mid = (s + e) / 2;

    //left part of array sorted by recursion
    mergeSort(arr, s, mid);

    //left part of array sorted by recursion
    mergeSort(arr, mid + 1, e);

    // merging left and right part of array
    merge(arr,s,e);
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;

// calling merge sort function
    mergeSort(arr, s, n - 1);

    // print sorted array
    cout << "Sorted array in ascending order:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}