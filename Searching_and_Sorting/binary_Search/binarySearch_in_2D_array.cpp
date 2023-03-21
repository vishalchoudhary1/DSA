#include<iostream>
#include<vector>
using namespace std;

void BinarySearch(int arr[][4], int rows, int col, int target){
    int s = 0; 
    int e = rows * col - 1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;

        if (arr[rowIndex][colIndex]==target)
        {
            cout<<"found"<<endl;
            cout<<"Row Index: "<<rowIndex<<endl;
            cout<<"Col Index: "<<colIndex<<endl;
            return;
        }
        else if (arr[rowIndex][colIndex]<target){
            s = mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"not found";
}
int main(){
    int arr[5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    int rows = 5;
    int col = 4;
    BinarySearch(arr, 5, 4, 19);
}