class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minrow = 0;
        int maxrow = n - 1;
        int mincol = 0;
        int maxcol = n - 1;
        int count = 1;
        
        vector<vector<int>>gm(n,vector<int>(n));
        while(minrow <= maxrow && mincol <= maxcol){
            //filling in right
            for(int j = mincol; j <= maxcol; j++){
                
                gm[minrow][j] = count++;
                

            }
            minrow++;//0->1
            if(minrow > maxrow || mincol > maxcol) break;
            //filiing down
            for(int i = minrow; i <= maxrow; i++){
                
                gm[i][maxcol] = count++;
                
            }
            maxcol--; // 4->3
            if(minrow > maxrow || mincol > maxcol) break;
            //filling left
            for(int j = maxcol; j >= mincol; j--){
                
                gm[maxrow][j] = count++;
                
            }
            maxrow--; //2->1
            if(minrow > maxrow || mincol > maxcol) break;
            // filing up
            for(int i = maxrow; i >= minrow; i--){
               
                gm[i][mincol] = count++;
                
            }
            mincol++; //0->1
            if(minrow > maxrow || mincol > maxcol) break;


        }
        return gm;
       
        
        
    }
};