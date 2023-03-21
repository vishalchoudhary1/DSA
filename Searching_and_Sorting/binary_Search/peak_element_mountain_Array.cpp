// leetcode Question 852. Peak Index in a Mountain Array

#include<iostream>
using namespace std;

int peak_element(int* arr, int n){
    int s = 0;
    int e = n - 1;
    while (s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return arr[mid];
        }
        else if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
}
int main(){
    int arr[] = {0,10,5,2,1};
    int size = sizeof(arr)/sizeof(int);
    cout<<peak_element(arr,size);
}