Node* start = new Node();
    Node *prev = start, *it1 = num1, *it2 = num2;
    int carry = 0;
    while(it1 || it2) {
        int data1 = it1 ? it1->data : 0;
        int data2 = it2 ? it2->data : 0;
        int sum = data1 + data2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        Node* curr = new Node(digit);
        prev->next = curr;
        prev = curr;

        if(it1) it1 = it1->next;
        if(it2) it2 = it2->next; 
    }
    if(carry) {
        prev->next = new Node(carry);
    }
    return start->next;
