// gfg Question: Modular Exponentiation for large numbers

#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long int PowMod(long long int x, long long int n, long long int M){
    long long int ans = 1;
    while (n > 0){
        if (n & 1){
            ans = (ans * x) % M;
        }
        x = (x * x) % M;
        n = n / 2;
    }
    return ans % M;
}

int main(){
    cout<<PowMod(3,2,4);
}