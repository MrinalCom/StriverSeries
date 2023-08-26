


vector<int> generateFibonacciNumbers(int n) {
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(i==0){
            ans.push_back(0);
        } else if (i == 1) {
            ans.push_back(1);
        } else
            ans.push_back(ans[i - 1] + ans[i - 2]);
    }
    return ans;
}
