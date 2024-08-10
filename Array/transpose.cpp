#include <iostream>
using namespace std;

void transpose(int arr[][3], int n, int m , int temp[][3])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        
            temp[j][i] = arr[i][j];
        }
    }
}

int print(int arr[][3], int K, int L)
{
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < L; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i = 3;
    int j = 3;

    cout << "print before transpose : "<<endl;
    print(arr, i, j);

    int temp[3][3];
    transpose(arr, i, j, temp);


    cout << "print after transpose : "<<endl;
    print(temp, i, j);

    return 0;
}