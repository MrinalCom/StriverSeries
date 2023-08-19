#include <bits/stdc++.h> 
using namespace std;

string generateNextTerm(string &current) {
    string nextTerm;
    int count = 1;
    
    for (int i = 1; i < current.length(); ++i) {
        if (current[i] == current[i - 1]) {
            count++;
        } else {
            nextTerm +=to_string(count) + current[i - 1];
            count = 1;
        }
    }
    
    nextTerm += to_string(count) + current.back(); 
    return nextTerm;
}

string writeAsYouSpeak(int n) 
{
	// Write your code here.
	 if (n == 1) {
        return "1";
    } else {
       	string prevTerm = writeAsYouSpeak(n - 1);
        return generateNextTerm(prevTerm);
    }
}
