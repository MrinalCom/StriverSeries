int maxDepth(string s) {
	// Write your code here.
	int open=0,close=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			open++;
		}
		else if(s[i]==')'){
			open--;
		}
		close=max(close,open);
	}
	return close;
}
