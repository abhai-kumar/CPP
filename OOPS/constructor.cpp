#include <iostream>
using namespace std;

// constructor in class

class Animal
{
private:
    int age;
    int weight;

public:
    string name;

    // default constructor (no arg constructor)
    Animal()
    {
        this->name = "default";
        this->age = 0;
        this->weight = 0;
        cout << "default constructer called" << endl;
    }
    // paramiterised constructor
    Animal(string name, int age, int weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        cout << "paramiterised constructer called" << endl;
    }
};
int main()
{
    Animal a;               // satically initialized
    Animal *b = new Animal; // dynamically initialized
    
    
    Animal c("tau",20,35);               // satically initialized
    Animal *d = new Animal("Paak",20,35); // dynamically initialized

    return 0;
}