Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node* head=new Node(arr[0]);
    Node* temp=head;
    head->prev=nullptr;
    for(int i=1;i<arr.size();i++){
        Node* newnode=new Node(arr[i]);
        newnode->prev=temp;
        temp->next=newnode;
        temp=temp->next;
    }
    return head;
}
