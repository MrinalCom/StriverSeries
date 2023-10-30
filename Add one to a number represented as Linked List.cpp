/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node* reverse(Node*head){
    Node*temp=head;
    Node*prev=nullptr;
    while(temp!=nullptr){
        Node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;

    }
    return prev;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    // Node*temp=head;
    // Node*me=temp;
    // Node*pre=nullptr;
    // while(temp->next!=nullptr)
    // {
    //     pre=temp;
    //     temp=temp->next;
        
    // }

    // if (temp->data < 9) {
    //     temp->data = temp->data + 1;

    //     return me;
    // }
    
    // else if (temp->data == 9) {
         
    //     temp->data = 0;
    //     if(pre->data==9){
    //         Node*mo=new Node(1);
    //         pre->data=0;
    //         mo->next=pre;
    //         return mo;
    //     }
    //     pre->data = pre->data + 1;
        
    //  }
    // Node*temp=reverse(head);
    // while(temp!=nullptr){
    //     if(temp->data<9){
    //         temp->data=temp->data+1;
    //         return reverse(temp);
    //     }
    //     else if(temp->next==nullptr && temp->data==9){
    //         temp->data=1;
    //         Node*make=new Node(0);
    //         head->next=make;
    //         make->next=nullptr;

    //     }
    //     else{
    //         temp->data=0;
            
    //     }
    // }
    head=reverse(head);
    bool f=true;
    Node*curr=head;
    while(curr!=nullptr && f==true){
        if(curr->next==nullptr && curr->data==9){
            curr->data=1;
            Node*temp=new Node(0);
            temp->next=head;
            head=temp;
            curr=curr->next;
        }
        else if (curr->data==9){
            curr->data=0;
            curr=curr->next;

        }
        else{
            curr->data=curr->data+1;
            curr=curr->next;
            f=false;
        }
    }
    return head=reverse(head);

}
