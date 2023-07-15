
#include <bits/stdc++.h> 

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> adj[v], ans, indegree(v);

    for(auto i: edges)
        adj[i[0]].push_back(i[1]);

    for(int i = 0; i < v; i++) {
        for(auto j: adj[i])
            indegree[j]++;
    }
  
    queue<int> q;
    for(int i = 0; i < v; i++)
        if(!indegree[i])
            q.push(i);

    while(!q.empty()) {
        auto p = q.front();
        q.pop();

        ans.push_back(p);
        for(auto i: adj[p]) {
            indegree[i]--;
            if(indegree[i] == 0)
                q.push(i);
        }
    }  
    return ans;
}
