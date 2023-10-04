class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word="";
	    for(int i=s.length()-1;i>=0;i--)
	    {
		    if(s[i]!=' '){
                word+=s[i];
            }
            else {
                 if (!word.empty()) {
                reverse(word.begin(),word.end());
                ans+=word+' ';
                
                word="";
                 }
                
            }
	    }
    if (!word.empty()) {
            reverse(word.begin(), word.end());
            ans += word;
        }
    if (ans.back() == ' ') {
            ans.pop_back();
        }
	
	return ans;
    }
};
