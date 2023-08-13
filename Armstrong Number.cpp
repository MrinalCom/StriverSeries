#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int copy=num;
    int sum=0;
    int lastdigit;
    int k=num;
    int count=0;
    while(k!=0){
        k=k/10;
        count++;
    }
    while(num!=0){
        lastdigit=num%10;
        sum+=pow(lastdigit,count);
        num=num/10;
    }
    if(sum==copy){
        return true;
    }
    else 
        return false;
}
