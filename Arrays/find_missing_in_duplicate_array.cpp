#include<iostream>
using namespace std;

//* using visited method TC: O(n)
void visitedMethod(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            cout<<i+1;
        }
    }
}

//* sorting & swaping method TC: O(n)
void sortSwapMethod(int* arr, int n){
    int i = 0;
    while (i<n)
    {
        int index = arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
}


int main(){
    // int arr[] = {1,3,4,5,5,3};
    int arr[] = {5,3,3,3,1};
    int n = sizeof(arr)/sizeof(int);
    // visitedMethod(arr, n);
    sortSwapMethod(arr, n);
}