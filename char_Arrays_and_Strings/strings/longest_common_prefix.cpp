// leetcode Question 14. Longest Common Prefix

#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans;
    int i = 0;
    while(true){
        char currChar = 0;
        for (auto str : strs)
        {
            //* to proctect from out of bound
            if (i >= str.size()){
                currChar = 0; // setting so we can break out from while loop
                break;
            }
            //* starting point
            if (currChar == 0){
                currChar = str[i];
            }
            //* when char not matched
            else if(str[i] != currChar){
                currChar = 0; // setting so we can break out from while loop
                break;
            }
        } 
        if (currChar == 0)
        {
            break;
        }
        else{
            ans.push_back(currChar);
            i++;
        }
    }
    return ans;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);
}