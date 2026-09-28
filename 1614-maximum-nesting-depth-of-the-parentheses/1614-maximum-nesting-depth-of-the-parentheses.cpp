class Solution {
public:
    int maxDepth(string s) {
        
        int ans = 0;
        int c = 0;
        for(char ch : s){
          
            if(ch == '('){
                c++;
            }
            if(ch == ')'){
                c--;
               
            }
            ans = max(ans,c);
        }
        return ans;
        
    }
};