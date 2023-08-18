#include <bits/stdc++.h> 
bool checkBits(unsigned int n) {
    // Write your code here.
    int number=n;
    vector<int>bit;
    while(number>0){
        int rem=number%2;
        bit.push_back(rem);
        number=number/2;
    }
    for(int i=0;i<bit.size();i++){
        if(bit[i]==bit[i+1]){
            return false;
        }
    }
    return true;
}
