#include<iostream>
using namespace std;

//find the maximum and minimum elemnet in 2-d array
int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int row = 3;
    int column = 3;

    int max = INT8_MIN;
    int min = INT8_MAX;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    cout<<"Maximum number in Array is "<<max<<endl;
    cout<<"Minimum number in Array is "<<min<<endl;

}