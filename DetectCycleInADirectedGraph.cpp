
#include<bits/stdc++.h>

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

  vector<int> indegree(n+1, 0);
  vector<list<int>> adj(n+1);

  for(int i=0; i<edges.size(); i++) {
    int u = edges[i].first;
    int v = edges[i].second;
    adj[u].push_back(v); 
    indegree[v]++;
  }

  vector<int> vis(n+1, 0);
  queue<int> q;

  for(int i=1; i<=n; i++) {
    if (indegree[i] == 0) {
      q.push(i);
      vis[i] = 1;
    }
  }

  vector<int> ans;

  while(!q.empty()) {
    int node = q.front();
    ans.push_back(node);
    q.pop();

    for(auto it: adj[node]) {
      indegree[it]--;
      if(indegree[it]==0) {
        vis[it] = 1;
        q.push(it);
      }
    }
  }
  
  if(ans.size()==n)
  return 0;
  return 1;
}
