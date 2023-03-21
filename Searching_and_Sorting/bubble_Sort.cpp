#include<iostream>
#include<vector>
using namespace std;

// TC: O(N2)
void bubble_Sort(vector<int> arr){
    for (int round = 1; round < arr.size(); round++)
    {
        for (int j = 0; j < arr.size()-round; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

// optimised Bubble sort
// TC: O(N)
void optimised_Bubble_Sort(vector<int> arr){
    for (int round = 1; round < arr.size(); round++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size()-round; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if (swapped==false)
            break;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {10,1,7,6,14,9};
    bubble_Sort(arr);
}