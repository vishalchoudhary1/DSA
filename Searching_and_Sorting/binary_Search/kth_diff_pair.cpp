// leetcode Question 532. K-diff Pairs in an Array
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// binary search
int binarySearch(vector<int>&nums, int s, int target){
    int e = nums.size()-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int kthDiff_bs(vector<int>& nums, int k){
    sort(nums.begin(), nums.end());
    set<pair<int,int>>ans;
    for(int i = 0; i<nums.size()-1; i++){
        if(binarySearch(nums, i+1, nums[i]+k) != -1){
            ans.insert({nums[i], nums[i]+k});
        }
    }
    return ans.size();
}

// 2 pointer approach
int kthDiff(vector<int>& nums, int k){
    sort(nums.begin(),nums.end());
    set<pair<int,int>>ans;
    int s = 0;
    int e = 1;
    while(e<nums.size()){
        int diff = nums[e]-nums[s];
        if(diff==k){
            ans.insert({nums[s],nums[e]});
            s++;
            e++;
        }
        else if(diff > k){
            s++;
        }
        else{
            e++;
        }
        // i!=j
        if(s==e){
            e++;
        }
    } 
    return ans.size();    
}
int main(){
    vector<int> nums = {3,1,4,1,5};
    int k = 2;
    cout<<kthDiff_bs(nums, k);
}