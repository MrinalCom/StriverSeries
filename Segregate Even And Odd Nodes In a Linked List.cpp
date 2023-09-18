Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    Node*even=nullptr;
    Node*odd=nullptr;
    Node*e=nullptr;
    Node*o=nullptr;
    
    
    while(head){
        if(head->data%2==0){
            if(even==nullptr){
                even=head;
                e=head;
            }

            else {
                e->next = head;
                e = e->next;
            }
        }
        else{
            if(odd==nullptr){
                odd=head;
                o=head;
            } else {
                o->next = head;
                o = o->next;
            }
        }
        head = head->next;
    }
    o->next=nullptr;
    e->next=odd;
    return even;
    
}
