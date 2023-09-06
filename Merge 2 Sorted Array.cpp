#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    set<int>setu;
    vector<int> ans;
    
    for (int i = 0; i < a.size(); i++) {
        setu.insert(a[i]);
        
    }
    for (int i = 0; i < b.size(); i++) {
        
        setu.insert(b[i]);
    }
    for (auto elem : setu) {
        ans.push_back(elem);
    }
    
    return ans;
}
