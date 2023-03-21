#include<iostream>
#include<algorithm>
using namespace std;

int search(int* arr, int n, int target){
    int s = 0;
    int e = n-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if (arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target){
            s=mid;
        }
        else if(arr[mid]>target){
            e=mid;
        }
        else{
            return -1;
        }
    }
}

//* using std
void search_using_std(int* arr, int size, int target){
    if (binary_search(arr,arr+size,target))
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int target = 5;
    int size = sizeof(arr)/sizeof(int);
    cout<<search(arr,size,target);
    cout<<endl;
    search_using_std(arr,size,target);
}