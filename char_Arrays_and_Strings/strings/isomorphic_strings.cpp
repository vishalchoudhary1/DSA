// leetcode Question 205. Isomorphic Strings
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t){
    int hash[256] = {0};
    bool istCharsMapped[256] = {0};
    for (int i = 0; i < s.size(); i++){
        if (hash[s[i]] == 0 && istCharsMapped[t[i]] == 0){
            hash[s[i]] = t[i];
            istCharsMapped[t[i]] = true;
        }
    }

    for (int i = 0; i < s.size(); i++){
        if (char(hash[s[i]]) != t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";
    cout<<isIsomorphic(s,t);
}