#include<iostream>
#include<vector>
#include<set>
using namespace std;

// using set to avoid duplicacy in answer
set<int> intersection(vector<int> arr, vector<int> brr){
    set<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if(arr[i]==brr[j]){
                // brr[j] = -1;
				ans.insert(element);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,5,8};
    vector<int> brr = {3,2,4,5,2,8,10,1,8};
    
    set<int> ans = intersection(arr,brr);
    // output

    //* 1st way using for loop
    // auto it = ans.begin();
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<*it;
    //     it++;
    // }

    //* 2nd way
    for(auto i : ans){
        cout<<i;
    }
}