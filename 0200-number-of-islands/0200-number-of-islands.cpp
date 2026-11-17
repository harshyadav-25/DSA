class Solution {
public:
    void bfs(int rows, int cols, vector<vector<int>>& visited, vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        visited[rows][cols] = 1;
        q.push({rows, cols});
        // Up, Right, Down, Left
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++){
                int nr = r + delRow[i];
                int nc = c + delCol[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc] && grid[nr][nc] == '1'){
                    visited[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
        

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int island = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for(int rows = 0; rows < n; rows++){
            for(int cols = 0; cols < m; cols++){
                if(!visited[rows][cols] && grid[rows][cols] == '1'){
                    bfs(rows, cols, visited, grid);
                    island++;
                }
            }
        }
        return island;
        
    }
};