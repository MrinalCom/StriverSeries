void mergeSort(vector<int>& arr, int l, int r) {
    // Write Your Code Here
        if(l==r) return;
    
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    vector<int> temp;
    int i=l, j=mid+1;
    while(i<=mid or j<=r){
        if(i<=mid and j<=r){
            if(arr[i]<arr[j]) temp.push_back(arr[i++]);
            else temp.push_back(arr[j++]);
        }
        else if(i<=mid) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    for(int k=0; k<temp.size(); k++) arr[l+k]=temp[k]; 

}
