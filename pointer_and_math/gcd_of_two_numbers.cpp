//  gfg Question: GCD of two numbers

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Euclid Algorithm
int gcd(int A, int B){
    if (A == 0)
        return B;
    if (B == 0)
        return A;

    while (A > 0 && B > 0){
        if (A > B){
            A = A - B;
        }
        else{
            B = B - A;
        }
    }
    return A == 0 ? B : A;
}

int main()
{
    cout<<gcd(3,6);
}