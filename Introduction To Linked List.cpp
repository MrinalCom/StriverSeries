Node* constructLL(vector<int>& arr) {
    // Write your code here
    int n=arr.size();
    
    Node* head=new Node();
    head->data=arr[0];
    // head->next=nullptr;
    Node* temp=head;

    for(int i=1;i<n;i++){
        Node* newnode=new Node(arr[i]);
        // newnode->next=nullptr;
        temp->next=newnode;
        temp=newnode;
    }
    return head;
   
    
}
