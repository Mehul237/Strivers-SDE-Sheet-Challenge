Node* findIntersection(Node* firstHead, Node* secondHead) {

    if (firstHead == NULL || secondHead == NULL)
        return NULL;

    Node* p1 = firstHead;
    Node* p2 = secondHead;

    while (p1 != p2) {
        p1 = (p1 == NULL) ? secondHead : p1->next;
        p2 = (p2 == NULL) ? firstHead : p2->next;
    }
    return p1;
}
