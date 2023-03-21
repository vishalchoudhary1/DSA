// leetcode Question 652. Find kth closest element
#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> &arr, int x){
    int s = 0;
    int e = arr.size() - 1;
    int ans = e;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x){
            ans = mid;
            e = mid - 1;
        }
        else if (x > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
// binary Search
vector<int> binarySearch(vector<int> &arr, int k, int x)
{
    int e = lowerBound(arr, x);
    int s = e - 1;

    while (k--){
        if (s < 0){
            e++;
        }
        else if (e >= arr.size()){
            s--;
        }
        else if (x - arr[s] > arr[e] - x){
            e++;
        }
        else{
            s--;
        }
    }

    // vector<int> ans;
    // for(int i = s; i <= e; i++){
    //     ans.push_back(arr[i]);
    // }
    // return ans;
    return vector<int>(arr.begin() + s + 1, arr.begin() + e);
}
// two pointer TC: O(n-k)
vector<int> twoPointer(vector<int> &arr, int k, int x){
    int s = 0;
    int e = arr.size() - 1;
    while (e - s >= k){
        if (x - arr[s] > arr[e] - x){
            s++;
        }
        else{
            e--;
        }
    }
    vector<int> ans;
    for (int i = s; i <= e; i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr = {2,16,22,30,35,39,42,45,48,50,53,55,56};
    int k = 4;
    int x = 35;
    // vector<int> ans = twoPointer(arr, k, x);
    vector<int> ans = binarySearch(arr, k, x);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}