class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mx = *max_element(nums.begin(),nums.end());
       
        int c = 0;
        for(int i = 0; i < n; i++){
            int diff = mx - nums[i];
            c+=diff;

        }
        return c;
        
    }
};