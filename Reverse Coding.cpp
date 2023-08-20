#include <bits/stdc++.h> 
vector<vector<int>> ninjaCity(vector<vector<int>> &mat)
{
    //write your code here
    int N = mat.size();    
    int M = mat[0].size();
    vector<vector<int>>ans;
    for(int i=0;i<N;i++){
        vector<int>row;
        for(int j=M-1;j>=0;j--){
          row.push_back(mat[i][j]);
        }
        ans.push_back(row);
    }
    return ans;
}
