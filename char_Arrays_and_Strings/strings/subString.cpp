#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
// void subString(vector<string>& str){
//     for (int i = 0; i < str.size()-1; i++)
//     {
//         for (int j = i; j < str.size(); j++)
//         {
//             // cout<<str[i,j];
//             cout<<str[i].substr(0, j-i+1);
//         }
//         cout<<endl;
//     }
// }
void subString(vector<string>& str) {
    for (int i = 0; i < str.size(); i++) {
        for (int j = 1; j <= str.size() - i; j++) {
            for (int k = i; k < i+j; k++) {
                cout << str[k];
            }
            cout << " ";
        }
    }
}

int main(){
    vector<string> str = {"a","b","c"};
    subString(str);
}