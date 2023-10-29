Node*mergeList(Node*first,Node*second){
    Node*temp=new Node();
    Node*ans=temp;
    while(first && second){
        if(first->data>second->data){
            Node*add=new Node(second->data);
            temp->next=add;
            second=second->next;
        }
        else{
            Node*add=new Node(first->data);
            temp->next=add;
            first=first->next;
        }
        temp=temp->next;
    }
    if(first)temp->next=first;
    if(second)temp->next=second;
    return ans->next;
}
// Node* merging(Node*zero,Node*one,Node*two){

// }

Node* sortList(Node *head){
    // Write your code here.

    //******using array *****

    // Node*temp=head;
    // vector<int>ans;
    // while(temp!=nullptr){
    //     ans.push_back(temp->data);
    //     temp=temp->next;
    // }
    // sort(ans.begin(),ans.end());
    // Node*start=new Node(ans[0]);
    // Node*w=start;
    // int i=1;
    // while(i<ans.size())
    // {
    //     Node*me=new Node(ans[i]);
    //     start->next=me;
    //     start=me;
    //     me=me->next;
    //     i++;
    // }
    // return w;





    //***using merge sort*******
    // if(!head || !head->next){
    //     return head;
    // }
    // Node*fast=head;
    // Node*slow=head;
    // Node*prev=nullptr;
    // while(fast!=nullptr && fast->next!=nullptr){
    //     prev=slow;
    //     slow=slow->next;
    //     fast=fast->next->next;

    // }
    // prev->next=nullptr;
    // Node*first=sortList(head);
    // Node*second=sortList(slow);
    // return mergeList(first,second);



    //using frequency method of 0s 1s and 2s
    Node*zero=new Node();
    Node*ans=zero;
    Node*one=new Node();
    Node*onner=one;
    Node*two=new Node();
    Node*twooer=two;
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            Node*create=new Node(0);
            zero->next=create;
            zero=zero->next;
        }
        else if(temp->data==1){
            Node*create=new Node(1);
            one->next=create;
            one=one->next;
        }
        else if(temp->data==2){
            Node*create=new Node(2);
            two->next=create;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next=onner->next;
    one->next=twooer->next;
    two->next=nullptr;
    return ans->next;


