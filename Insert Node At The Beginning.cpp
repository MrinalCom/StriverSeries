Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* prev=list;
    Node* newnode=new Node(newValue);
    if(list->next==nullptr){
        list=newnode;
        list->next=prev;
        return list;
    }
    list=newnode;
    newnode->next=prev;
    return list;
}
