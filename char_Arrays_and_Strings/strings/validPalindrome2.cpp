// leetcode Question 680. Valid Palindrome II
#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s,int i,int j){
    while (i<=j)
    {
        if (s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool validPalindrome(string s) {
    int i = 0;
    int j = s.length()-1;

    while(i<=j){
        if (s[i]!=s[j]){
            return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    string s = "abacvba";
    string s1 = "abacaba";
    string s2 = "abacaba";
    cout<<validPalindrome(s);
}