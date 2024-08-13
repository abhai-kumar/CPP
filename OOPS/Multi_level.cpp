#include <iostream>
using namespace std;

// Multi-level inheritance in Oops
class Fruit
{
public:
    string name;
};

class mango : public Fruit
{
public:
    int weight;
};

class Alphanso : public Fruit
{
public:
    int sugerlevel;
};
int main()
{
    Alphanso a;
    a.name = "Alphanso";
    a.sugerlevel = 50;
    cout << "Name: " << a.name << endl
         << ", Sugar Level: " << a.sugerlevel << endl;

    return 0;
}