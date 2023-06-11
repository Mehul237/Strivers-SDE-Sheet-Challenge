Node* removeKthNode(Node* head, int k) {

    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    // Move the fast pointer k nodes ahead
    for (int i = 0; i < k; i++) {
        if (fast == NULL) {
            return head; // k is greater than the length of the list, return head as is
        }
        fast = fast->next;
    }

    // Move both pointers simultaneously until fast reaches the end
    while (fast != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }

    // If prev is still NULL, it means we need to remove the head node
    if (prev == NULL) {
        Node* temp = head->next;
        delete head;
        return temp;
    }

    // Remove the kth node from the end
    prev->next = slow->next;
    delete slow;
    return head;
}
