bool detectCycle(Node *head)
{
	//	Write your code here
    if(head==nullptr || head->next==nullptr){
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
        
        
        
    }
    return false;
    
}
