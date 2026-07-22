class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        int c = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                st.push(nums[i]);
            
            
            }
            else{
               
                c = max(c,(int)st.size());
                
                while(!st.empty()) st.pop();
                
            }
            c = max(c, (int)st.size());
        }
        return c;
        
    }
};