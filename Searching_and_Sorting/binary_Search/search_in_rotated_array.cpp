#include<iostream>
#include<vector>
using namespace std;

int pivot_element(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if (s==e)
        {
            return s;
        }
        
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid-1] > arr[mid]){
        return mid-1;
        }
        if(arr[s] >= arr[mid]){
        e = mid - 1;
        }
        else{
        s = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; 
}
int binarySearch(vector<int> arr, int target, int start, int end) {

    int mid = start + (end - start ) / 2;

    while(start <= end) {
        int element = arr[mid];

        if(element == target) {//element found, then return index
        return mid;
        }
        
        if(target < element) {
        //search in left
        end = mid - 1;
        }
        else {
        //search in right
        start = mid + 1;
        }

        mid = start + (end - start ) / 2;

    }
}
int search_in_rotated_array(vector<int>& arr, int target){
    int pivotIndex = pivot_element(arr);
    
    if (target>=arr[0] && target<=arr[pivotIndex])
    {
        int ans = binarySearch(arr, target, 0, pivotIndex);
        return ans;
    }
    if(pivotIndex+1 < arr.size() && target>=arr[pivotIndex+1] && target<=arr[arr.size()-1]){
        int ans = binarySearch(arr, target, pivotIndex+1, arr.size()-1);
        return ans;
    }
    return -1;
}
int main(){
    vector<int> arr = {3,4,5,6,7,0,1,2};
    // int size = sizeof(arr)/sizeof(int);
    cout<<search_in_rotated_array(arr,2);
}