Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* newnode=new Node(k);
    Node* temp=head;
    if(head==nullptr){
        return newnode;
    }
    while(temp->next!=nullptr){
       
        temp=temp->next;
       

    }
    temp->next=newnode;
    
    newnode->prev=temp;
    newnode->next=nullptr;
    return head;
}
