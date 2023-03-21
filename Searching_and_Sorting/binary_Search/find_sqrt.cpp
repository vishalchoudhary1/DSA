// leetcode Question 68: Find Sqrt

#include<iostream>
#include<vector>
using namespace std;

long long int sqrt(int n){
    long long int ans = -1;
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    while(s<=e){
        long long int mid_by_mid = mid*mid;
        if(mid_by_mid == n)
        {
            return mid;
        }  
        else if(mid_by_mid > n){
            e = mid - 1;
        }
        else{ //if(mid_by_mid < n)
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    long long int ans = sqrt(n);
    cout << "Ans is " << ans << endl;


    //* for decimal values: 
    int precision;
    cout << "Enter the number of floating digits in precison "<<endl;
    cin >> precision;

    long double step = 0.1;
    long double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (long double j = finalAns; j*j <= n; j=j+step)
        {
            finalAns = j;
        }
        step = step/10;
    }
    cout << "final ans: "<< finalAns << endl;
}