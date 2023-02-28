#include<iostream>
using namespace std;

void col_Sum(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        for (int j = 0; j < 3; j++)
        {
            ans = ans + arr[j][i];
        }
        cout<<ans<<endl;
    }
    
}
int main(){
    int arr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    col_Sum(arr);
}