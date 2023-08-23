bool solve(string&str,int i,int n){
    if(i>=n){
        return true;
    }
    if(str[i]!=str[n-1]){
        return false;
    }
    return solve(str,  i+1,n-1);
}



bool isPalindrome(string& str) {

    // Write your code here.
    int n=str.length();
    int i=0;
    solve(str,i,n);
    
}
