#include<iostream>
using namespace std;

// heirarchical inheritance in class
class Fruit{
    public:
    string name;
    int weight;

    void color(){
        cout<<"color is set"<<endl;
    }
};

class Mango : public Fruit{
    public:
    void taste(){
        cout<<"taste is sweet"<<endl;
    }
};

class Apple : public Fruit{
    public:
    void taste(){
        cout<<"taste is sour"<<endl;
    }
};

int main(){
    Apple a;
    a.name = "Apple";
    a.weight = 100;
    cout<<"name is "<<a.name<<endl;
    cout<<"weight is "<<a.weight<<endl;
    a.color();
    a.taste();
    cout<<endl<<endl;

    Mango m;
    m.name = "Mango";
    m.weight = 50;
    cout<<"name is "<<m.name<<endl;
    cout<<"weight is "<<m.weight<<endl;
    m.color();
    m.taste();

    return 0;
}