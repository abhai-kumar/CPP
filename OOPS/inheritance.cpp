#include <iostream>
using namespace std;

// inheritance in oops

class Animal
{
public:
    int age;
    int weight;
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep(){
        cout << "Sleeping" << endl;
    }
};

class Dog : public Animal
{
};
int main()
{
    Dog d;
    d.age = 5;
    d.weight = 20;
    cout << "Dog's age: " << d.age << endl;
    cout << "Dog's weight: " << d.weight << endl;
    d.eat();
    d.sleep();
}