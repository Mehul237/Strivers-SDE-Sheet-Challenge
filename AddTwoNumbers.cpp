void insertAtTail(Node* &head,Node* &tail,int digit) {
    Node* temp=new Node(digit);

    if(head==NULL) {
        head=temp;
        tail=temp;
        return;
    } 

    else {
      tail->next = temp;
      tail = temp;
    }
}


Node* add(Node* first,Node* second) {
    Node* head=NULL;
    Node* tail=NULL;
    int carry=0;

    while(first != NULL || second != NULL || carry !=0) {
        int val1=0,val2=0;
        if(first != NULL)
         val1=first->data;
        if(second != NULL)
         val2=second->data;
        
        int sum= carry+ val1 + val2;

        int digit=sum%10;

        insertAtTail(head,tail,digit);
        carry=sum/10;
        if(first != NULL)
         first=first->next;
        if(second != NULL)
         second=second->next;
    }
    return head;
}


Node *addTwoNumbers(Node *num1, Node *num2) {
    return add(num1,num2);
}
