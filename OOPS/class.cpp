#include<iostream>
using namespace std;

// class declaration
class Animal{
    public:
    int age;
    string name;
    void eat(){
        cout<<"Eating";
    }

    void sleep(){
        cout<<"Sleeping";
    }
};
int main(){
    Animal dog;
    dog.age = 5;
    dog.name = "Buddy";
    dog.eat();
    cout<<endl;
    dog.sleep();
    cout<<endl;


    cout<<"Age of dog: "<<dog.age<<endl;
    cout<<"Name of dog: "<<dog.name<<endl;

    return 0;
}