#include <iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char arr[]){
    int n = strlen(arr);
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==' ')
        {
            arr[i]='@';
        }
    }
    cout<<arr;
}

int main(){
    char sentence[100];
    cin.getline(sentence,100);  //* get input with spaces.
    replaceSpaces(sentence);
}