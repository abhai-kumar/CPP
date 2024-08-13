#include <iostream>
using namespace std;

// use getter and setter functions in class for accessing private variables

class Raju
{
private:
    int age;

public:
    string Name;

    int get()
    {
        return age;
    }
    void set(int a)
    {
        age = a;
    }
};
int main()
{
    Raju r;
    r.Name = "Raju";
    r.set(25);
    cout << "Name: " << r.Name << endl;
    cout << "Age: " << r.get() << endl;
}