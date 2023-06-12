#include <bits/stdc++.h>

bool detectCycle(Node *head) {

    while(head!=nullptr) {
        if(head->data==INT_MIN) {
            return true;
        }

        head->data = INT_MIN;
        head = head->next;
    }
    return false;
}
