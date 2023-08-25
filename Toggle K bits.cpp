#include <bits/stdc++.h> 
using namespace std;

int toggleKBits(int n, int k) {
   int sum=0;
   int i=0;
   while(i<k){
       sum+=pow(2,i);
       i++;
   }
   int z=n^sum;
   return z;
}
