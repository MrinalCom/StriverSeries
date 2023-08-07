void printf(int x ,vector<int>&arr){
    if(x==0){
        return;
    }
    arr.push_back(x);
    printf(x-1,arr);

}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>arr;
    printf(x,arr);
    reverse(arr.begin(),arr.end());
    return arr;
}
