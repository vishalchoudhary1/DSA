#include<iostream>
#include<algorithm>
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

//* first occurance using std
auto firstOcc_using_std(int* arr, int n, int target){
    auto ans = lower_bound(arr,arr+n,target);
    return ans-arr;
}

//* last occurance using std
auto lastOcc_using_std(int* arr, int n, int target){
    auto ans = upper_bound(arr,arr+n,target);
    return ans-arr-1;
}

int main(){
    int arr[] = {1,2,3,4,4,5};
    int target = 4;
    int size = sizeof(arr)/sizeof(int);
    cout<<first_occurance(arr,size,target)<<endl;
    cout<<firstOcc_using_std(arr,size,target)<<endl;
    cout<<lastOcc_using_std(arr,size,target);
}