#include <iostream>
#include<string.h>
using namespace std;

int getLength(char arr[]){
    int i = 0;
    int ans = 0;
    while(arr[i]!='\0'){
        ans++;
        i++;
    }
    return ans;
}
void reverseString(char arr[]){
    int n = getLength(arr);
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<arr;
}
int main(){
    char arr[100];
    cin>>arr; 
    cout<<"---------"<<endl;
    reverseString(arr);
}