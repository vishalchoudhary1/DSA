// leetcode Question 1047. Remove all adjacent duplicate in String 
#include<iostream>
#include<string>
using namespace std;

// TC: O(n)
string removeDuplicates(string s){
    string ans="";
    int i = 0;
    while (i<s.length())
    {
        if (ans.length() > 0 && ans[ans.length()-1]==s[i])
        {
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main(){
    string s = "abbaca";
    cout<<removeDuplicates(s);
}