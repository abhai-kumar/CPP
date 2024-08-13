#include<iostream>
using namespace std;

// dynamic memory allocation
class Animal{
    public:
    int age;
    string name;
    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }
};
int main(){
    Animal* dog = new Animal;

    // (*dog).age = 87;
    // (*dog).name = "Buddy";
    // cout<<"Age: "<<(*dog).age<<endl;
    // cout<<"Name: "<<(*dog).name<<endl;
    // (*dog).eat();
    // (*dog).sleep();

    dog->age = 21;
    dog->name = "lalp";
    cout<<"Age: "<<dog->age<<endl;
    cout<<"Name: "<<dog->name<<endl;
    dog->eat();
    dog->sleep();

    return 0;
}