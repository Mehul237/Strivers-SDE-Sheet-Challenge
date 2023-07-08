
 TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Using Morris Traversal
    // Time Complexity: O(N)
    // Spave Complexity: O(1)
    // Iterative Approach
    // Step 1: Make a current pointer points to the root node.
    
    TreeNode<int>* curr = root;
    // Step 2: Loop Until current pointer becomes NULL.
    
    while(curr != NULL) {
        
        // Step 3: Case: if current's left child is NULL or not?
        if(curr->left == NULL) {
            curr = curr->right;
        }
        else {
            
            // Step 4: Find the In-Order Predecessor of the current node.
            TreeNode<int>* pred = curr->left;
            
            while(pred->right != NULL){
                pred = pred->right;
            } 
            
            // Step 5: Make the predecessor right child point to the current right child.
            pred->right = curr->right;
            
            // Step 6: Make the current right point to current left child and make currrent left child be NULL.
            curr->right = curr->left;
            curr->left = NULL;
            
            // Step 7: Move current to it's right child.
            curr = curr->right;
        }
    }
    return root;
}
