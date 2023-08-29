int largestNumber(vector<int> &arr,int n)
{
    sort(arr.begin(),arr.end());
    int ans = -1;
    int i =0;
    int j = n-i-1;
    while(i<j){
        if(arr[j]==abs(arr[i])){
            ans = arr[j];
            break;
        } else if (arr[j] > abs(arr[i])) {
            j--;
        } else if (arr[j] < abs(arr[i])) {
            i++;
        }
    }
    return ans;
}
