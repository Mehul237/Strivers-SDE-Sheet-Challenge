Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {

    // Rearrange the Linked List.
    // Time Complexity: O(n)
    // Space Complexity: O(n)

    if(first == NULL) return second;
    else if(second == NULL) return first;

    Node<int>* root = ((first->data) > (second->data))?(second):(first);
    Node<int>* prev = root;
    Node<int>* curr = root->next;
    Node<int>* adv = (root == first)?(second):(first);

    while(curr != NULL && adv != NULL) {
        if((prev->data) <= (adv->data) && (curr->data) >= (adv->data)) {
            prev->next = adv;
            prev = adv;
            adv = adv->next;
            prev->next = curr;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }

    if(adv != NULL) {
        prev->next = adv;
    }
    return root;
}
