class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mn = INT_MAX;
        vector<int> suffix(n,0);
        for(int i = n - 1; i >= 0; i--){
            mn = min(nums[i], mn);
            suffix[i] = mn;
        }
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            mx = max(nums[i], mx);
            if(mx - suffix[i] <= k) return i;
        }
        return -1;
        
    }
};