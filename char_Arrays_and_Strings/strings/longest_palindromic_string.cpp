// leetcode Question 5. longest palindromic string
#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//* Method 1. brute force TC: O(N3) SC: O(1)
bool isPalindrome(string&s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++,end--;
    }
    return true;
}

string longestPalindrome(string s) {
    string ans = "";
    for (int i = 0; i < s.size(); i++){
        for (int j = i; j < s.size(); j++){
            if(isPalindrome(s,i,j)){
                string t = s.substr(i, j-i+1);
                ans = t.size() > ans.size()?t:ans;
            }
        }
    }
    return ans;
}

int main(){
    string s = "ibvjkmpyzsifuxcabqqpahjdeuzaybqsrsmbfplxycsafogotliyvhxjtkrbzqxlyfwujzhkdafhebvsdhkkdbhlhmaoxmbkqiwiusngkbdhlvxdyvnjrzvxmukvdfobzlmvnbnilnsyrgoygfdzjlymhprcpxsnxpcafctikxxybcusgjwmfklkffehbvlhvxfiddznwumxosomfbgxoruoqrhezgsgidgcfzbtdftjxeahriirqgxbhicoxavquhbkaomrroghdnfkknyigsluqebaqrtcwgmlnvmxoagisdmsokeznjsnwpxygjjptvyjjkbmkxvlivinmpnpxgmmorkasebngirckqcawgevljplkkgextudqaodwqmfljljhrujoerycoojwwgtklypicgkyaboqjfivbeqdlonxeidgxsyzugkntoevwfuxovazcyayvwbcqswzhytlmtmrtwpikgacnpkbwgfmpavzyjoxughwhvlsxsgttbcyrlkaarngeoaldsdtjncivhcfsaohmdhgbwkuemcembmlwbwquxfaiukoqvzmgoeppieztdacvwngbkcxknbytvztodbfnjhbtwpjlzuajnlzfmmujhcggpdcwdquutdiubgcvnxvgspmfumeqrofewynizvynavjzkbpkuxxvkjujectdyfwygnfsukvzflcuxxzvxzravzznpxttduajhbsyiywpqunnarabcroljwcbdydagachbobkcvudkoddldaucwruobfylfhyvjuynjrosxczgjwudpxaqwnboxgxybnngxxhibesiaxkicinikzzmonftqkcudlzfzutplbycejmkpxcygsafzkgudy";
    cout<<longestPalindrome(s);
}