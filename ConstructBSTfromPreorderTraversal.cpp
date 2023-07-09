
 TreeNode<int> *constructTree(vector<int> &pre, int ps, int pe) {
  if (ps > pe)
    return NULL;

  TreeNode<int> *root = new TreeNode<int>(pre[ps]);
  int i = ps + 1;
  for (; i <= pe; i++)
    if (pre[ps] < pre[i])
      break;

  root->left = constructTree(pre, ps + 1, i - 1);
  root->right = constructTree(pre, i, pe);

  return root;
}

TreeNode<int> *preOrderTree(vector<int> &preOrder) {
  return constructTree(preOrder, 0, preOrder.size() - 1);
}
