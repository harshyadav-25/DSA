
class Solution {
public:
    void dfs(int node, vector<int>& visited,vector<vector<int>>& adj) {

        visited[node] = 1;
        for (auto &neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, visited, adj);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        vector<vector<int>> adj(n);

        // Convert matrix into adjacency list
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }

        vector<int> visited(n, 0);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, visited, adj);
                count++;
            }
        }

        return count;
    }
};
