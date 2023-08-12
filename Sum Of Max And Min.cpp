#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int maxi=*max_element(arr,arr+n);
	int maxt=*min_element(arr,arr+n);
	return maxi+maxt;
}
