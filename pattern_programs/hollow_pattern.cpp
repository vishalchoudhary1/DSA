#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row;
    cin>>col;

    for (int i = 0; i < row; i++){
        if (i == 0 || i == row-1)
        {
            for (int i = 0; i < col; i++)
            {
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for (int i = 0; i < col-2; i++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
