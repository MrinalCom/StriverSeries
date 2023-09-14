Node* sortList(Node* head){
    // Write your code here.
    Node*temp=head;
    vector<int>ans;
    while(temp!=nullptr){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    sort(ans.begin(),ans.end());
    Node*first=new Node(ans[0]);
    Node*me=first;
    int i=1;
    while(i<ans.size())
    {
        Node*second=new Node(ans[i]);
        first->next=second;
        first=second;
        i++;
    }
    return me;
}
