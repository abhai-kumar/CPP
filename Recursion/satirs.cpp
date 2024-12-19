#include <iostream>
using namespace std;

// find the number of way to claim n stairs by 1or 2 step
int claim(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return claim(n-1) + claim(n-2);
}
int main()
{
    int n;
    cout << "Enter the number of sairs : ";
    cin >> n;

    cout<<"Number of ways to claim "<< n << " stairs : "<<claim(n)<<endl;

    return 0;
}