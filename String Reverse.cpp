#include <bits/stdc++.h> 

string stringReverse(string S) {
    // Write your code here.
    string ans;
    for(int i=S.length()-1;i>=0;i--){
        ans=ans+S[i];
    }
    return ans;
  
}
