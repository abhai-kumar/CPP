 #include <iostream>
using namespace std;

//binary search in 2 d array
bool bS(int arr[][4],int row, int col, int target){
    int s = 0;
    int e = row * col - 1;

    while(s <= e){
        int mid = (s + e) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if(target == arr[rowIndex][colIndex]){
            cout<<"target found at "<<rowIndex<<" "<<colIndex<<endl;
            return mid;
        }else if(target > arr[rowIndex][colIndex]){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int r = 5;
    int c = 4;

    int target;
    cout << "Enter the target number: ";
    cin >> target;
    
    
    int ans = bS(arr,r,c,target);

    if(ans == true) {
        cout << "Element found ";
    }else{
        cout << "Element not found ";
    }
}