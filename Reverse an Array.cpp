void solve(int n,vector<int>&nums,int i){
    
    
    if (i<n) {
        swap(nums[i],nums[n-1]);
        solve(n-1,nums,i+1);
    }
    else 
        return;
}




vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int i=0;
    
    
    solve(n,nums,i);
    return nums;

}
