#include<iostream>
#include<vector>
using namespace std;

void insertion_Sort(vector<int> arr){

for (int round = 1; round < arr.size(); round++)
{
    // step A: fetch value
    int value = arr[round];

    // step B: Compare
    int i = round-1;
    for (; i >= 0; i--)
    {
        if (arr[i]>value)
        {
            // step C: shift
            arr[i+1]=arr[i];
        }
        else{
            break;
        }
    }
    // step D: copy
    arr[i+1] = value;
}

// print
for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    insertion_Sort(arr);
}