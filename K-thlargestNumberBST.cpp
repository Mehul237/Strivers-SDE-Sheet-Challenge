
#include <bits/stdc++.h>

int KthLargestNumber(TreeNode<int> *root, int k) {
  if (!root)
    return -1;

  TreeNode<int> *curr = root;
  int count = 0;

  while (curr) {
    if (curr->right == NULL) {
      count++;
      if (count == k)
        return curr->data;
      curr = curr->left;
    } 
    
    else {

      TreeNode<int> *node = curr->right;

      while (node->left != NULL and node->left != curr)
        node = node->left;

      if (node->left == NULL) {
        node->left = curr;
        curr = curr->right;
      } 
      
      else {
        node->left = NULL;
        count++;
        if (count == k)
          return curr->data;
        curr = curr->left;
      }
    }
  }
  return -1;
}
