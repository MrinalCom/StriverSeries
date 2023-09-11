Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    if(!head)return head;
    Node *even_prev = nullptr;
    Node *odd_prev = nullptr;
    Node *e;
    Node *o;
    Node *temp = head;
    while(temp){
        if((temp->data %2) == 0){
            even_prev != nullptr? even_prev->next=temp:e=temp;
            even_prev=temp; 
        }
        else{
            odd_prev != nullptr? odd_prev->next=temp:o=temp;
            odd_prev=temp;
        }
        temp=temp->next;
    }
    even_prev->next=o;
    odd_prev->next=nullptr;
    return e;
