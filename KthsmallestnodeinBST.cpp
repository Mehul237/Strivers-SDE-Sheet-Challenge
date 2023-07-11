
#include <bits/stdc++.h>

void inOrder(TreeNode<int> *root, vector<int> &in) {
  if (root) {
      inOrder(root->left, in);
      in.push_back(root->data);
      inOrder(root->right, in);
  }
}

int kthSmallest(TreeNode<int> *root, int k) {
  vector<int> inorder;
  inOrder(root, inorder);
  return inorder[k - 1];
}
