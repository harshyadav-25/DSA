class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffix(n,0);
        int mn = INT_MAX;
        int small = INT_MAX;
        for(int i = n - 1; i >= 0; i--){
            mn = min(nums[i], mn);
            suffix[i] = mn;
        }
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            if(nums[i] > mx){
                mx = nums[i];

            }
            if(mx - suffix[i] <= k){
                small = i;
                break;
            }
            
        }
        if(small == INT_MAX) return -1;
        return small;
    }
};