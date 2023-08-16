void solve(int i,vector<string>&ans,string s,int n){
    if(i>n){
        return;
    }
    ans.push_back(s);
    solve(i+1,ans,s,n);
}




vector<string> printNTimes(int n) {
	// Write your code here.
    int i=1;
    vector<string>ans;
    string s="Coding Ninjas";
    solve(i,ans,s,n);
    return ans;
}
