#include <iostream>
using namespace std;

// multiple inheritance of classes in oops
class A{
    public:
    int physics;
};

class B{
    public:
    int chemistry;
};

class C : public A, public B{
    public:
    int maths;
};
int main(){
    C obj;
    obj.physics = 85;
    obj.chemistry = 80;
    obj.maths = 90;

    cout << "Physics: " << obj.physics << endl;
    cout << "Chemistry: " << obj.chemistry << endl;
    cout << "Maths: " << obj.maths << endl;

    return 0;
}