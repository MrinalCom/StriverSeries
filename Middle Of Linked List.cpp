Node* even(Node* &head,int len){
    int i=0;
    int half=len/2;
    while(i!=half){
        head=head->next;
        i++;
    }
    return head;
}
Node* odd(Node* &head,int len){
    int i=0;
    int half=len/2;
    while(i!=half){
        head=head->next;
        i++;
    }
    return head;
}

Node *findMiddle(Node *head) {
    // Write your code here
    int len=0;
    Node* temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        len++;
    }
    
    if(len%2==0){
        return even(head,len);
    }
    else
        return odd(head,len);

}
