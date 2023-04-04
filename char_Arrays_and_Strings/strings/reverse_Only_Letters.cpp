// leetcode Question 917. Reverse Only Letters
#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s) {
    int start = 0;
    int end = s.length()-1;

    while(start<end){
        if (isalpha(s[start]) && isalpha(s[end])){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        else if(!isalpha(s[start])){
            start++;
        }
        else{
            end--;
        }
    }
    return s;
}
int main(){
    string s = "ab-cd";
    cout<<reverseOnlyLetters(s);
}