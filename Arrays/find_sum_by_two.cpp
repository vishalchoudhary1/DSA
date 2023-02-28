#include<iostream>
#include<vector>
using namespace std;

vector<int> findSum(vector<int> arr, int sum){
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i+1; j < arr.size(); j++){
            if(element+arr[j]==sum){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,4,5,10};
    vector<int> ans = findSum(arr, 5);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
}