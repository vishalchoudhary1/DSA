#include<iostream>
using namespace std;
int main(){
    int row = 5;
    int col = 5;
    for (int i = 1; i <= row; i++)
    {
        int k = 1;
        for (int j = row; j >= i; j--)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}