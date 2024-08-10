#include <iostream>
using namespace std;

// print the sum of every row by taking input

void printSumRow(int arr[3][3], int row, int column)
{
    cout << "The sum of every row is : " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

void inputArray(int arr[3][3], int row, int column)
{
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[3][3], int row, int column)
{
    cout << "The elements of the array are : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int column = 3;

    inputArray(arr, row, column);
    printArray(arr, row, column);
    printSumRow(arr, row, column);

    return 0;
}