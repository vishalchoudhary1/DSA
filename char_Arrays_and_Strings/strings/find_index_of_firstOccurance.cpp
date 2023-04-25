// leetcode Question 28. Find the Index of the First Occurrence in a String
#include<iostream>
#include<vector>

using namespace std;

//* Method 1. sliding window TC: O(mn)
int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    for (int i = 0; i <= n-m; i++)
    {
        for (int j = 0; j < m; j++){
            if (needle[j]!=haystack[i+j]){
                break;
            }
            if (j==m-1){
                return i;
            }
        }
    }
    return -1;
}
// other algo that can be used: rabin-karp, kmp algo
int main(){
    string haystack = "adbutsad";
    string needle = "sad";

    cout<<strStr(haystack,needle);
}
