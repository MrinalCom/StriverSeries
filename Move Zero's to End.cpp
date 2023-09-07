vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int>v;
    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            v.push_back(0);
        }
    }
    return v;
        
    
}
