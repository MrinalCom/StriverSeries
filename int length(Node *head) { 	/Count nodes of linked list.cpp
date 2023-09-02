int length(Node *head)
{
	//Write your code here
    int len=1;
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
