// gfg Question: First Repeating Element

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
    
//* Brute force method TC: O(n2)
int first_repeating(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                return i;
            }
        }
    }
    return -1;
}

//* hashing method
int hashing(int* arr, int n){
    unordered_map<int,int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]]>1)
        {
            return i+1;
        }
    }
    return -1;
}

int main(){
    // int arr[] = {1,3,4,5,5,3};
    int arr[] = {5,2,1,3,3};
    int n = sizeof(arr)/sizeof(int);
    // cout<<first_repeating(arr,n);
    cout<<hashing(arr,n);
}