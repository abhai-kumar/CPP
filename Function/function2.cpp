#include "iostream"
using namespace std;

int findMax(int x, int y, int z){
    if(x > y && x > z){
        return x;
    }else if(y > x && y > z){
        return y;
    }else{
        return z;
    }
}
int main(){
    int a , b, c;
    cout<<"Enter the values of a, b and c :";
    cin>>a>>b>>c;

    int max = findMax(a,b,c);
    cout<<"Maximun no. in numbers a, b and c is : "<< max <<endl;

    return 0;
}