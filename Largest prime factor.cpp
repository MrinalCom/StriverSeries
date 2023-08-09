#include <bits/stdc++.h> 
int largestPrimeFactor(int n) {
    // Write your code here
    if(n<=1){
        return -1;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            n=n/i;
            i--;
        }
    }
    return n;
}
