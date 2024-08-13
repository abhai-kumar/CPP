#include <iostream>
using namespace std;

// function overrindin

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    // child class function override to base class function
    void speak()
    {
        cout << "Barking" << endl;
    }
};
int main()
{
    Animal a;
    a.speak();

    Dog d;
    d.speak();

    return 0;
}