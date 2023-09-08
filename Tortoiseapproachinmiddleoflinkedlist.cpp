Node *findMiddle(Node *head) {
    // Write your code here
    // 1st approach
    // int len=0;
    // Node* temp=head;
    // while(temp!=nullptr){
    //     temp=temp->next;
    //     len++;
    // }
    
    // if(len%2==0){
    //     return even(head,len);
    // }
    // else
    //     return odd(head,len);
    Node*slow=head;
    Node* fast=head;
    // if(fast->next==nullptr){
    //     return slow;
    // }
    while(fast!=nullptr ){
        
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    
    return slow;

}
