#include <iostream>
#include<string.h>
using namespace std;

//* TC: O(n)
bool palindrome(char arr[]){
    bool flag = true;
    int n = strlen(arr);
    int s = 0;
    int e = n-1;
    while(s<=e){
        if (arr[s]!=arr[e])
        {
            flag = false;
            break;
        }
        s++;
        e--;
    }
    return flag;
}
int main(){
    char arr[100]="racecar";
    cout<<palindrome(arr);
}