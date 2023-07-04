
#include <bits/stdc++.h> 

vector<int> verticalOrderTraversal(TreeNode<int> *root) {

    vector <int> ans;
    map<int, vector<int>>mp;
    queue<pair <TreeNode<int> *, int>>q;
    q.push({root, 0});

    while(!q.empty()) {

        TreeNode<int> *temp = q.front().first;
        int hd = q.front().second;
        q.pop();
        mp[hd].push_back(temp->data);

        if(temp->left)
            q.push({temp->left,hd-1});
        if(temp->right)
            q.push({temp->right,hd+1});
}

    for(auto it:mp) {
        ans.insert(ans.end(), it.second.begin(), it.second.end());
    }
    return ans;
}
