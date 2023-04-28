// leetcode Question 8. String to Integer (atoi)
#include<iostream>
#include<vector>
#include<string>
#include <limits.h>
using namespace std;

int myAtoi(string s) {
    //* Method 1: using inbuilt fuctions
    // int ans = atoi(s.c_str());
    // return ans;

    //* Method 2:
    int num=0, i=0, sign = 1;
    
    //A. for spaces 
    while(s[i]==' '){
        i++;
    }
    //B. for negative or positive value 
    if (i<s.size() && (s[i] == '-' || s[i]=='+'))
    {
        sign = s[i] == '+' ? 1 : -1;
        i++;
    }
    
    while (i<s.size() && isdigit(s[i])){
        //C. Out of bound case if INT_MIN OR INT_MAX 
        if (num > INT_MAX/10 || (num == INT_MAX/10 && s[i]>'7')){
            return sign == -1 ? INT_MIN : INT_MAX;
        }
        //D. adding digit to our answer { char to int s[i]-'0' } 0->48 in ascii 1->49 in ascii
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return num*sign;
}

int main(){
    string s = "   -42";
    cout<<myAtoi(s);
}