#include<iostream>
using namespace std;

int first_occurance(int* arr, int n, int target){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if (arr[mid]==target)
        {
            ans = mid;
            // now we will search in left
            e = mid-1;
        }
        else if(arr[mid]>target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int last_occurance(int* arr, int n, int target){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if (arr[mid]==target)
        {
            ans = mid;
            // now we will search in left
            s = mid+1;
        }
        else if(arr[mid]>target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int totalOcc(int* arr, int n, int target){
    return last_occurance(arr,n,target)-first_occurance(arr,n,target)+1;
}
int main(){
    int arr[] = {1,2,3,4,4,4,4,5};
    int target = 4;
    int size = sizeof(arr)/sizeof(int);
    cout<<totalOcc(arr,size,target)<<endl;
}