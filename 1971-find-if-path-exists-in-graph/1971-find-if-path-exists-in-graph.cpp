class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto x : edges){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> q;
        vector<int> visited(n, 0);
        visited[source] = 1;
        q.push(source);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(node == destination) return true;
            for(auto neighbor : adj[node]){
                if(!visited[neighbor]){
                    visited[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }

        return false;
      
    }
};