Node*dummy=new Node(0);
    Node*temp=dummy;
    int carry=0;
    while(num1!=nullptr || num2!=nullptr || carry!=0 ){
        int sum=0;
        if(num1!=nullptr){
            sum+=num1->data;
            num1=num1->next;
        }
        if(num2!=nullptr){
            sum+=num2->data;
            num2=num2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node*add=new Node(sum%10);
        temp->next=add;
        temp=temp->next;

    }
    return dummy->next;
