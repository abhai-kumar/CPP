#include <iostream>
using namespace std;

// Daimond problem in multiple inheritance.
class A
{
public:
    int physics;
    int Arts;
    A()
    {
        Arts = 85;
    }
};

class B
{
public:
    int chemistry;
    int Arts;
    B()
    {
        Arts = 63;
    }
};

class C : public A, public B
{
public:
    int maths;
};

int main()
{
    C obj;
    obj.physics = 80;
    obj.chemistry = 70;
    obj.maths = 85;
    cout<<"Physics : "<<obj.physics<<endl;
    cout<<"chemistry : "<<obj.chemistry<<endl;
    cout<<"Arts of A :"<<obj.A::Arts<<endl;
    cout<<"Arts of B :"<<obj.B::Arts<<endl;
    cout<<"Maths : "<<obj.maths<<endl;
    
    return 0;
}