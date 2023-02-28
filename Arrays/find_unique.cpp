#include<iostream>
#include<vector>
using namespace std;

// using xor operator
int findUnique(vector<int> arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<"Answer: "<<findUnique(arr);  
}