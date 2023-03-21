#include<iostream>
#include<vector>
using namespace std;

int divide(int divisor, int dividend){
    int s = 0;
    int e = abs(dividend);
    int ans = 0;
    while(s<=e){
        // we will assume mid is quotient
        int mid = s + (e-s)/2;

        if (abs(mid*divisor)==abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid*divisor)<abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    // negative
    if((divisor>0 && dividend>0) || (divisor<0 && dividend<0)){
        return ans;
    }
    else{
        return -ans;
    }
}
int main(){
    int dividend = 22;
    int divisor = -7;
    cout<<divide(divisor,dividend);
}