class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = INT_MIN;
        int small = INT_MAX;
        
        
        for(int i = 0; i < n; ++i){
            mx = max(nums[i], mx);
            int mn = nums[i];
            
            for(int j = i + 1; j < n; ++j){
                mn = min(nums[j], mn);
                
            }
            if(mx - mn <= k){
                small= min(small, i);
                
            }


        }
        if(small == INT_MAX) return -1;
        return small;
        
    }
};