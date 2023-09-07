Node* reverseDLL(Node* head)
{   
    // Write your code here
    if(head == nullptr)
        return head;
   Node * temp = nullptr;
   while(head != nullptr)
   {
       temp = head;
       head = head->next;
       swap(temp->next,temp->prev);
   }
   return temp;
   
}
