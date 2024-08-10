#include <iostream>
using namespace std;

// linear search in 2-dimensional arrays
int main()
{
    int arr[3][3] = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};

    int row = 3;
    int col = 3;

    // printing the array
    cout<<"Array : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    // search the key value
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Key found at " << i << " " << j << endl;
            }
        }
    }

    return 0;
}