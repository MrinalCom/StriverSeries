Node* rever(Node* temp,Node* previous){
    if(temp==nullptr){
        return previous;
    }
    Node* forward=temp->next;
    temp->next=previous;
    
    return rever(forward, temp);
}
