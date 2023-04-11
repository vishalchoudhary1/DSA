// leetcode Question 345. Reverse Vowels of a String

#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}

string reverseVowels(string s) {
    int l = 0;
    int h = s.size()-1;
    while(l<h){
        if (isVowel(s[l]) && isVowel(s[h])){
            swap(s[l],s[h]);
            l++;
            h--;
        }
        else if(isVowel(s[l])==0){
            l++;
        }
        else{
            h--;
        }
    }
    return s;
}

int main(){
    string s = "hello";
    cout<<reverseVowels(s);
}