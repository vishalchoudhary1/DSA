#include<iostream>
using namespace std;

bool linear_Search(int arr[3][3], int num){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==num)
            {
                return true;
            }
            
        }
    }
    return false;
}
int main(){
    int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    cout<<(linear_Search(arr,8));
}