int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    
    
    while(head->next!=nullptr){
        if(head->data==k){
            return 1;
        }
        head=head->next;

    }
    if(head->next==nullptr && head->data==k){
            return 1;
    }
    return 0;
}
