#include<iostream>
using namespace std;

int smallest_missing(int* arr, int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e - s )/2;
        // if(arr[mid+1]==arr[mid]){
        if(mid+1==arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return s+1;
}

int main(){
    int arr[] = {1,2,4,6,7};
    int size = sizeof(arr)/sizeof(int);
    cout<<smallest_missing(arr,size);
}