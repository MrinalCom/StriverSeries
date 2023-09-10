  Node*temp=head;
    vector<int>arr;
    while(temp!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int n=arr.size();
    int m=n;
    n=n/2;
    for(int i=0;i<=n;i++){
        if(arr[i]!=arr[m-1-i]){
            return false;
        }

    }
    return true;
