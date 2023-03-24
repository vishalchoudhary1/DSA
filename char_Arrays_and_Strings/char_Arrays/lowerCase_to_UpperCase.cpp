#include <iostream>
#include<string.h>
using namespace std;

// TC: O(n)
void lowerCase_to_UpperCase(char arr[]){
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=' ')
        {
            arr[i] = arr[i]-'a'+'A';
        }
    }
    cout<<arr;
}

// TC: O(n)
void upperCase_to_LowerCase(char arr[]){
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=' '){
            arr[i] = arr[i]-'A'+'a';
        }
    }
    cout<<arr;
}

int main(){
    char arr[100] = "programming";
    char arr2[100] = "PROGRAMMING";
    lowerCase_to_UpperCase(arr);
    cout<<endl;
    cout<<"------------------------"<<endl;
    upperCase_to_LowerCase(arr2);
}