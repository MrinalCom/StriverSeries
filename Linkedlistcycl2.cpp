
Node *firstNode(Node *head)
{
    //    Write your code here.
    // *****************************using mapping*************************
    // unordered_map<Node*,int>m;
    
    // while(head){
    //     if(!m[head]){
    //         m[head]=1;
            
    //         head=head->next;
            
    //     }
    //     else
    //         return head;

    // }
    // return nullptr;

    //*****************using slow fast and entry pointer**************
    Node*slow=head;
    Node*fast=head;
    Node*entry=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            while(slow!=entry){
                slow=slow->next;
                entry=entry->next;
            }
            return entry;
        }
    }
    
    return nullptr;

}
