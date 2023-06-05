// leetcode Question 204. Count Pointers
#include <iostream>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// 1. Naive Approach
//  bool isPrime(int n){
//      if(n<=1){
//          return false;
//      }
//      int sqrtN = sqrt(n);
//      for(int i=2; i<=sqrtN; i++){
//          if(n%i==0){
//              return false;
//          }
//      }
//      return true;
//  }
//  int countPrimes(int n) {
//      int count = 0;
//      for(int i=0; i<n; i++){
//          if(isPrime(i)){
//              count++;
//          }
//      }
//      return count;
//  }

// 2. Sieve of Eratosthenes
int countPrimes(int n){
    if (n == 0)
        return 0;
    vector<bool> prime(n, true); // all considered prime
    prime[0] = prime[1] = false;

    int count = 0;

    for (int i = 2; i < n; i++){
        if (prime[i]){
            count++;

            int j = 2 * i;
            while (j < n){
                prime[j] = false;
                j += i;
            }
        }
    }
    return count;
}

int main()
{
    cout<<countPrimes(10);
}