//  gfg Question: Common elements

#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> ans;
    set<int> st;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            // ans.push_back(A[i]);
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st){
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int brr[] = {5, 6, 8, 9, 10, 11, 12, 13};
    int crr[] = {5, 6, 13, 14, 15, 15, 16};
    int an = sizeof(arr) / sizeof(int);
    int bn = sizeof(brr) / sizeof(int);
    int cn = sizeof(crr) / sizeof(int);
    vector<int> ans = commonElements(arr,brr,crr,an,bn,cn);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}