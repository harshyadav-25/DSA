class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n + 1);
        for(auto& edges : times){
            int u = edges[0];
            int v = edges[1];
            int w = edges[2];
            adj[u].push_back({v, w});
        }
        vector<int> dist(n + 1, INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dist[k] = 0;
        pq.push({0, k});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int d = it.first;
            int node = it.second;
            if(d > dist[node]) continue;
            for(auto& edges : adj[node]){
                int adjNode = edges.first;
                int weight = edges.second;
                if(d + weight < dist[adjNode]){
                    dist[adjNode] = d + weight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
            


        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(dist[i] == INT_MAX) return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
        
    }
};