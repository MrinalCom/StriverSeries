#include <bits/stdc++.h>
int minDiff(int n, vector<int> arr) {
  // Write your code here.
  sort(arr.begin(),arr.end());
  int minDiff = INT_MAX;
  for(int i=0;i<n-1;i++){
     int diff=abs(arr[i]-arr[i+1]);
     if(diff<minDiff){
        minDiff=diff;
     }
  }
  return minDiff;



}
