#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = i+1; j < n+1; j++)
        {
            if (j == i+1 || j == n || i == 0)
            {
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}