
//this function will return head of the reverse ll
LinkedListNode<int> *rev1(LinkedListNode<int>* &head) {

    //recursive approach 2
    //base case
    if(head == NULL || head-> next == NULL) {
        return head;
    }

    //recursive case
    LinkedListNode<int>* chota_head = rev1(head-> next);
    head-> next -> next = head;
    head-> next = NULL;
    return chota_head;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
    return rev1(head);
}
