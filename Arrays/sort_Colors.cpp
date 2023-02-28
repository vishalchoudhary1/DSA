// leetcode Question 75: Sort Colors

#include<iostream>
#include<vector>
using namespace std;

//! Approach 1: Count & spread TC:0(n)
void sortColors1(vector<int>&nums) {
    int zero=0;
    int one=0;
    int two=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==0)
        {
            zero++;
        }
        else if (nums[i]==1)
        {
            one++;
        }
        else{
            two++;
        }
    }
    int i = 0;
    while(zero--){
        nums[i]=0;
        i++;
    }
    while(one--){
        nums[i]=1;
        i++;
    }
    while(two--){
        nums[i]=2;
        i++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i];
    }
}

//! Approach 2: Three pointer TC:0(n)

vector<int> sortColors2(vector<int> nums)
{
    int s = 0;
    int mid = 0;
    int e = nums.size() - 1;
    while (mid <= e){
        if (nums[mid] == 0)
        {
            swap(nums[s], nums[mid]);
            s++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[e]);
            e--;
        }
    }
    return nums;
}

int main(){
    vector<int> arr = {2,0,2,1,1,0};
    // sortColors1(arr);
    vector<int> ans = sortColors2(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
}