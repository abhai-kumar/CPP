#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the number of : ";
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of T :";
        int t;
        cin >> t;
        arr.push_back(t);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}