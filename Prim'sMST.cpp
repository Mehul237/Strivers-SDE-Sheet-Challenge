
///  Important thing dont confuse with the figure given in questions nodes are starting from 1 not 0 so please first make changes to your code accordingly but still if you face any problem then look into the code given below

#include <bits/stdc++.h> 

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {

    vector<pair<pair<int, int>, int>> ans;
    vector<pair<int, int>> adj[n+1];

    for(int i=0; i<m; i++) {
        adj[g[i].first.first].push_back({g[i].second, g[i].first.second});
        adj[g[i].first.second].push_back({g[i].second, g[i].first.first});
    }

    priority_queue<pair<int, pair<int, int>>,
    vector<pair<int, pair<int, int>>>, 
    greater<pair<int, pair<int, int>>>> pq;
    pq.push({0, {1, -1}});
    vector<int> visited(n+1, 0);

    while(!pq.empty()) {
        int node = pq.top().second.first;
        int parent = pq.top().second.second;
        int weight = pq.top().first;
        pq.pop();

        if(visited[node] == 1) {
            continue;
        }

        visited[node] = 1;

        if(parent != -1) {
          ans.push_back({{parent, node}, weight});
        }

        for(auto it : adj[node]) {
            if(visited[it.second] == 0) {
                pq.push({it.first, {it.second, node}});
            }
        }
    } 
    return ans;
}
