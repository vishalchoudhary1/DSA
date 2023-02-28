#include<iostream>
using namespace std;

void row_Sum(int arr[][3]){
    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        for (int j = 0; j < 3; j++)
        {
            ans = ans + arr[i][j];
        }
        cout<<ans<<endl;
    }
    
}
int main(){
    int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    row_Sum(arr);
}