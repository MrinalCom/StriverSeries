
#include <bits/stdc++.h>
int countnodes(Node*slow){
    int count=1;
    Node*temp=slow;
    while(temp->next!=slow){
        count+=1;
        temp=temp->next;
        
    }
    return count;
}
int lengthOfLoop(Node *head) {
    // Write your code here
    // 
    Node*slow=head;
    Node*fast=head;
    
    while(fast!=nullptr && slow!=nullptr && fast->next){
        
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return countnodes(slow);
        }
    }
    return 0;

    
}
