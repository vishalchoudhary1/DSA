#include<iostream>
using namespace std;

int max_Num(int arr[3][3]){
    int maxi = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]>maxi)
            {
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}

int main(){
    int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    cout<<(max_Num(arr));
}