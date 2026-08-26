class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mx = nums[n-1];
        int c = 0;
        for(int i = 0; i < n - 1; i++){
            int diff = mx - nums[i];
            c+=diff;

        }
        return c;
        
    }
};