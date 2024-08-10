#include <iostream>
using namespace std;

int main()
{
    int arr[4][2];

    cout << "Enter the elements of the array rowwise: " << endl;

    // taken input rowwise
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing array rowwise
    cout << "printing the array rowwise: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // taken input columnwise
    cout << "Enter the elements of the array columnwise: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j][i];
        }
    }
    // printing array columnwise
    cout << "printing the array columnwise: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}