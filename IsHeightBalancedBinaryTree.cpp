
#include <bits/stdc++.h> 

/*************************************************************

   Recursive Approach: Optimised Using Pair

   Complexity: 
      Time -> O(n)
      Space -> O(height)

*************************************************************/

pair<bool, int> isBalanceBinaryTree(BinaryTreeNode<int>* root) {

    if(root == NULL) {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    // Check if right subtree and left subtree is balanced
    pair<bool, int> lst = isBalanceBinaryTree(root->left);
    pair<bool, int> rst = isBalanceBinaryTree(root->right);

    // final ans
    pair<bool, int> ans;
    ans.first = (lst.first && rst.first && (abs(lst.second - rst.second) <= 1));
    ans.second = 1 + max(lst.second, rst.second);
    
    return ans;
}


bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Recusion But Using Pair to store the value.
    // Time Complexity: O(n)
    return isBalanceBinaryTree(root).first;
}
