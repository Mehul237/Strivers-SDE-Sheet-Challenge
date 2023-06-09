
#include <bits/stdc++.h> 

vector<int> bottomView(BinaryTreeNode<int> * root) {

    vector<int> ans;
    if(root == NULL) 
      return ans;
    map<int, int> mp;
    queue<pair<int, BinaryTreeNode<int>*>> q;
    q.push({0, root});


    while(!q.empty()) {

        int n = q.size();

        while(n--) {

            int loc = q.front().first;
            BinaryTreeNode<int> *temp = q.front().second;
            q.pop();
            mp[loc] = temp->data;

            if(temp->left) q.push({loc-1, temp->left});

            if(temp->right) q.push({loc+1, temp->right});
        }
    }

    for(auto itr : mp) 
        ans.push_back(itr.second);
    return ans;
}
