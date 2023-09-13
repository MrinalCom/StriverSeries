Node* deleteMiddle(Node* head){
    // Write your code here.
    if(head->next==nullptr){
        return nullptr;
    }
    int len=0;
    Node*temp=head;
    Node*start=head;
    Node*we=start;
    int go=0;
    while(temp!=nullptr)
    {
        temp=temp->next;
        len++;
    }
    int move=1;
    if(len%2!=0){
        go=(len+1)/2;
        
        while(move!=go-1){
            start=start->next;
            move++;
            }
        start->next=start->next->next;
        return we;
    }
    else{
        while(move!=len/2){
            start=start->next;
            move++;
        }
        start->next=start->next->next;
        return we;
    }
        
    

    
}
