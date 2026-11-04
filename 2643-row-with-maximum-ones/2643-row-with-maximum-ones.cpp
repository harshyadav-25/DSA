class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int maxc = 0;
        int maxi = 0;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int c = 0;
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1) c++;


            }
            if(maxc < c){
                maxc = c;
                maxi = i;
            }
            
        }
        ans.push_back(maxi);
        ans.push_back(maxc);
        return ans;
        
    }
};