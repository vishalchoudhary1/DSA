#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        //* for spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        //* for counting
        int s = i + 1;
        for (int j = 0; j <= i; j++)
        {
            // cout<<i+j+1;
            cout<<s;
            s++;
        }
        //* for reverse counting
        s = 2 * i;
        for (int j = 0; j < i; j++)
        {
            cout<<s;
            s--;
        }  
        cout<<endl;
    }
}