
#include <bits/stdc++.h> 

void getInOrderTraversal(TreeNode *root, vector<int> &ans){
    if(root == NULL){
        return;
    }

    getInOrderTraversal(root->left, ans);
    ans.push_back(root->data);
    getInOrderTraversal(root->right, ans);
}

vector<int> getInOrderTraversal(TreeNode *root) {
    vector<int> ans;
    getInOrderTraversal(root, ans);
    return ans;
}
