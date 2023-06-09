
#include <bits/stdc++.h> 


bool pairSumBst(BinaryTreeNode<int> *root, int k) {

    vector<int> arr;
    stack<BinaryTreeNode<int>*> s;

    auto *curr = root;

    while (curr != NULL || !s.empty()) {

        while (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        arr.push_back(curr->data);
        curr = curr->right;
    }

    int lo = 0, hi = arr.size()-1;

    while (lo < hi) {

        int sum = arr[lo] + arr[hi];
        if (sum == k) 
          return true;
        else if (sum < k) 
          lo++;
        else 
          hi--;
    }
    return false;
}
