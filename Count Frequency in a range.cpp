vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int>ans;
    int hash[7*x]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]]+=1;
        
    }
    for(int i=1;i<=n;i++){
        ans.push_back(hash[i]);
        
    }

    return ans;
}
