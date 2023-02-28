#include<iostream>
#include<vector>
using namespace std;
vector<int> sortZeroAndOne(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int i = 0;
    while(s<=e){
        if (arr[i]==0)
        {
            swap(arr[i],arr[s]);
            i++;
            s++;
        }
        else if(arr[i]==1){
            swap(arr[i],arr[e]);
            // i++;
            e--;
        }
    }
    return arr;
}
int main(){
    vector<int> arr = {1,0,0,1,0,1,0};
    vector<int> ans = sortZeroAndOne(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }    
}