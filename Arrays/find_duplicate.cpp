// leetcode Question 287: Find the duplicate number

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//* Binary Search
int find_duplicate(int* arr,int n){
    
    sort(arr,arr+n);
    int s = 0;
    int e = n-1;
    while(s<=e){
        if (arr[s]==arr[s+1])
        {
            return arr[s];
        }
        else if(arr[e]==arr[e-1]){
            return arr[e];
        }
        else{
            s++;
            e--;
        }
    }
    return -1;
}

//* visited method TC: O(n)
int ans = -1;
int visitedMethod(int *arr, int n)
{
    for (int i = 0; i < sizeof(arr); i++){
        int index = abs(arr[i]);
        // already visited
        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        // visited
        arr[index] *= -1;
    }
    return ans;
}
//* positioning method TC: O(n)
int positiong_method(int* arr, int n){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main(){
    int arr[] = {1,6,2,3,2,0,4};
    int n = sizeof(arr) / sizeof(int);
    cout<<"duplicate is: "<<find_duplicate(arr,n)<<endl;
    // cout<<"duplicate is: "<<visitedMethod(arr,n)<<endl;
    cout<<"duplicate is: "<<positiong_method(arr,n)<<endl;
}