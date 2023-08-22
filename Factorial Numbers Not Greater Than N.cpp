void solve(long long n,long long fac,long long i,vector<long long>&ans){
    
    i++;
    if(fac>n){
        return;
    }
    ans.push_back(fac);
    solve(n,fac*i,i,ans);

}



vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long>ans;
    solve(n,1,1,ans);
    return ans;

}
