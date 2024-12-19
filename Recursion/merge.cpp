#include <iostream>
using namespace std;
// Merge two sorted arrays into one sorted array

void merge(int arr1[], int n, int arr2[], int m, int ans[], int i, int j, int k)
{
    if (i == n)
    {
        while (j < m)
        {
            ans[k] = arr2[j];
            j++, k++;
        }
        return;
    }
    if (j == m)
    {
        while (i < n)
        {
            ans[k] = arr1[i];
            i++, k++;
        }
        return;
    }
    if (arr1[i] < arr2[j])
    {
        ans[k] = arr1[i];
        merge(arr1, n, arr2, m, ans, i + 1, j, k+1);
    }else{
        ans[k] = arr2[j];
        merge(arr1, n, arr2, m, ans, i, j + 1, k+1);
    }
}
int main()
{
    int arr1[] = {1, 4, 8};
    int n = 3;
    int arr2[] = {2, 5, 6, 9};
    int m = 4;

    int N = n + m;
    int ans[N];
    int i= 0, j=0, k = 0;

    merge(arr1, n, arr2, m, ans, i, j, k);

    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}