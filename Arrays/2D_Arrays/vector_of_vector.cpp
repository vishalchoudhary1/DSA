#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows = 5;
    int col = 5;
    vector<vector<int>> arr(rows, vector<int>(col,-8));
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
