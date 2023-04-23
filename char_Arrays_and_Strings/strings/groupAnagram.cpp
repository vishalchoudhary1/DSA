// leetcode Question 49. Group Anagram
#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//* Method 1. TC: O(nklogn) SC: O(NK)
// vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // map<string,vector<string>>mp;
    // for(auto str:strs){
    //     string s = str;
    //     sort(s.begin(),s.end());
    //     mp[s].push_back(str);
    // }

    // vector<vector<string>> ans;
    // for (auto i = mp.begin(); i!=mp.end(); i++)
    // {
    //     ans.push_back(i->second);
    // }
    // return ans;
// }

//* Method 2. using hashmap TC: O(NK) SC: O(NK)

// creating function for std::array (same like our normal array)
std::array<int, 256> hashmap(string s){
    std::array<int,256>hash = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAnagrams(vector<string>& strs){
    map<std::array<int,256>,vector<string>>mp;

    for (auto i:strs)
    {
        mp[hashmap(i)].push_back(i);
    }
    
    vector<vector<string>> ans;
    for (auto i = mp.begin(); i!=mp.end(); i++)
    {
        ans.push_back(i->second);
    }
    return ans;
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<",";
        }
        cout<<"]";
    }
}