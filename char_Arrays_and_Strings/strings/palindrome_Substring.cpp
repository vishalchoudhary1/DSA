// leetcode Question 647. Palindromic Substrings
#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int expandAroundIndex(string s,int i,int j){
    int count = 0;
    while(i>=0 && j<=s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s) {
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        //* odd case
        int ansOdd = expandAroundIndex(s,i,i);
        count = count + ansOdd;

        //* even case
        int ansEven = expandAroundIndex(s,i,i+1);
        count = count + ansEven;
    }
    return count;
}

int main(){
    string str = "aaa";
    cout<<countSubstrings(str);
}