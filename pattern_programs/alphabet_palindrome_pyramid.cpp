#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            int ans = j + 1;
            char ch = ans + 'A'-1;
            cout<<ch;        
        }
        // reverse counting { row no. in reverse }
        for (int k = i; k >= 1; k--)
        {
            int ans = k;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    
}