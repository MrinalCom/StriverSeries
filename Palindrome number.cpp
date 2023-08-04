


bool palindrome(int n)
{
    // Write your code here
    string s=to_string(n);
    int t=s.length()-1;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[t]){
            return false;
        }
        else    
            t--;
    }
    return true;

}
