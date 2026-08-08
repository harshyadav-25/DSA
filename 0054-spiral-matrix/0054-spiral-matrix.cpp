class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int minrow = 0;
        int maxrow = m - 1;
        int mincol = 0;
        int maxcol = n - 1;
        vector<int>ans(m*n);
        int i = 0;
        while(minrow <= maxrow && mincol <= maxcol){
            //filling right
            for(int j = mincol; j <= maxcol; j++){
                if(minrow>maxrow || mincol>maxcol) return ans;
                 ans[i++] = matrix[minrow][j];
            }
            minrow++;
            //filling down 
            for(int j = minrow; j <= maxrow; j++){
                if(minrow>maxrow || mincol>maxcol) return ans;
                    ans[i++] = matrix[j][maxcol];
            }
            maxcol--;
            //filling left 
            for(int j = maxcol; j >= mincol; j--){
                if(minrow>maxrow || mincol>maxcol) return ans;
                ans[i++] = matrix[maxrow][j];
            }
            maxrow--;

            //filling up
            for(int j = maxrow; j >= minrow; j--){
                if(minrow>maxrow || mincol>maxcol) return ans;
                 ans[i++] = matrix[j][mincol];
            }
            mincol++;
            


        }
        



        
        
        return ans;
       
        
        
    }
};