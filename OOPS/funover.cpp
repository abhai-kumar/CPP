#include <iostream>
using namespace std;

// function overloading
class Maths
{
public:
    int add(int a, int b)
    {
        cout << "First function to add ";
        cout << a + b << endl;
    }
    int add(int a, int b, int c)
    {
        cout << "second function to add ";
        cout << a + b + c<< endl;
    }

    int add(int a, float b)
    {
        cout << "third function to add ";
        cout << a + b << endl;
    }
};
int main()
{
    Maths m;
    m.add(5, 7);
    m.add(8, 5.7f);
    m.add(2, 3, 4);

    return 0;
}