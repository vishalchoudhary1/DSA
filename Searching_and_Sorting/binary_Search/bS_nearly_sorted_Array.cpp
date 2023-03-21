#include<iostream>
#include<vector>
using namespace std;

int bS_nearly_sorted_Array(vector<int> arr, int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1 < arr.size() && arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]<target){
            s = mid + 2;
        }
        else{ //(arr[mid]>target){
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {10,3,40,20,50,80,70};
    int target = 80;
    int ans = bS_nearly_sorted_Array(arr, target);
    cout<<"ans: "<<ans;
}