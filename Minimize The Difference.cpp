#include <bits/stdc++.h> 
int minimizeIt(vector<int> A, int K)
{
	// Write your code here.
	int n=A.size();
	sort(A.begin(),A.end());
	int ans=A[n-1]-A[0];
	int mini=A[0]+K;
	int maxi=A[n-1]-K;
	int mi,ma;
	for(int i=0;i<n;i++){
		mi=min(mini,A[i+1]-K);
		ma=max(maxi,A[i]+K);
		
		ans=min(ans,ma-mi);
	}
	return ans;
}
