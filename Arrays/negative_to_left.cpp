#include <iostream>
using namespace std;

void negative_to_left(int* arr, int size)
{
    int s = 0;
    int e = size-1;
    while(s < e)
    {
        if (arr[s]<0)
        {
            s++;
        }
        else if(arr[e]>0){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
        }
    }
}
int main()
{
    int arr[] = {-2, 3, -4, -5, 1};
    int size = sizeof(arr)/sizeof(int);
    negative_to_left(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}