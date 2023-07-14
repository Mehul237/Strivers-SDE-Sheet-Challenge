
#include <bits/stdc++.h> 

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    int n = vertex;
    int m = edges.size();

    vector<int> adj[n];
    for(int i=0;i<m;i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0;i<n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    int vis[n]={0};
    vis[0] = 1;
    
    queue<int> q;
    q.push(0);

    vector<int> bfs;

    while(!q.empty()){
        int node = q.front();
        bfs.push_back(node);
        q.pop();

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    for(int i=0; i<n;i++){
        if(vis[i] == 0) bfs.push_back(i);
    }
    return bfs;
}
