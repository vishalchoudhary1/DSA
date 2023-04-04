// leetcode Question 242. Valid Anagram
#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//* approach 1: brute force sort both strings and iterate over to compare
// bool isAnagram(string s, string t) {
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i]!=t[i]){
//             return false;
//         }
//     }
//     return true;
// }

//* approach 2: counting frequency using hash 
bool isAnagram(string s, string t) {
    set<int,char> frequency;
    int freqTable[256] = {0};
    // ++ ascii of char
    for (int i = 0; i < s.length(); i++)
    {
        freqTable[s[i]]++;
    }
    // -- ascii of char
    for (int i = 0; i < t.length(); i++)
    {
        freqTable[t[i]]--;
    }
    // checking if all of the char in freqTable is 0 or not
    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i]!=0){
            return false;
        }        
    }
    return true;
}

int main(){
    // string s = "anagram";
    // string t = "nagaram";
    string s = "cat";
    string t = "rat";
    cout<<isAnagram(s,t);
}