class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
      
        int rows = grid.size();
        int cols = grid[0].size();
        
        while(k--){
            vector<vector<int>>ans(rows,vector<int>(cols));
            for(int i = 0; i < rows; i++){
             for(int j = 0; j < cols; j++){
                if(i == rows - 1 && j == cols - 1){
                    ans[0][0] = grid[rows-1][cols-1];
                }
                else if(j ==  cols - 1){
                    ans[i+1][0] = grid[i][j];
                }
                else{
                    ans[i][j+1] = grid[i][j];
                }
            }
        }
        grid = ans;

        }
        return grid;
        
        
    }
};