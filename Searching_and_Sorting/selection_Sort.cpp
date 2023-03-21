#include<iostream>
#include<vector>
using namespace std;

void selection_Sort(vector<int> arr){
    for (int i = 0; i < arr.size()-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[j] < arr[i]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    vector<int> arr = {5,4,3,2,1};
    selection_Sort(arr);
}