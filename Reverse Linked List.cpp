Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node* temp=head;
    Node* previous=nullptr;
    
   
    while(temp!=nullptr){
       Node* forward=temp->next;
       temp->next=previous;
       previous=temp;
       temp=forward;
        
        
        
    }
    
    return previous;
}
