#include<iostream>

using namespace std;
int main(){
    int row = 5;
    int col = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}