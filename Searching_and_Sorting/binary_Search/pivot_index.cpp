// leetcode Question 724: Find Pivot Index

#include<iostream>
using namespace std;

int pivot_element(int* arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if (mid+1 < n && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(mid-1 >= 0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if (arr[s]>arr[mid])
        {
            e = mid - 1;
        }
        else //if (arr[s]>arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    
}
int main(){
    int arr[] = {3,4,5,6,7,8,9,10,1,2};
    int size = sizeof(arr)/sizeof(int);
    cout<<pivot_element(arr,size);
}