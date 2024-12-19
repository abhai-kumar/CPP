#include <iostream>
using namespace std;

// find the Susequnce of a string
void subsequnce(string str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    subsequnce(str, output, i + 1);

    output.push_back(str[i]);
    subsequnce(str, output, i + 1);
}
int main()
{
    string str = "abc";
    string output;
    int i = 0;

    subsequnce(str, output, i);

    return 0;
}