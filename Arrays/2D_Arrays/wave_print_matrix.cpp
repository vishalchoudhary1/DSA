#include<iostream>
#include<vector>
using namespace std;

void wave(vector<vector<int>>v){
    int mRow = v.size();
    int nCol = v[0].size();
    for (int i = 0; i < nCol; i++)
    {
        // even col printing top to bottom
        if ((i&1)==0)
        {
            for (int j = 0; j < mRow; j++)
            {
                cout<<v[j][i]<<" ";
            }
        }
        // odd col printing bottom to top
        else{
            for (int j = mRow-1; j >= 0; j--)
            {
                cout<<v[j][i]<<" ";
            }
            
        }
        
    }
    
}
int main(){
    vector<vector<int>>v = {
        {5,6,7},
        {8,9,10},
        {11,12,13}};
    wave(v);
}