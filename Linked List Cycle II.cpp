Node *firstNode(Node *head)
{
    //    Write your code here.
    unordered_map<Node*,int>m;
    
    while(head){
        if(!m[head]){
            m[head]=1;
            
            head=head->next;
            
        }
        else
            return head;

    }
    return nullptr;

}
