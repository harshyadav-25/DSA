class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            if(nums[i]>mx) mx = nums[i];
            if(nums[i]<mn) mn = nums[i];
        }
        return gcd(mx,mn);

        
    }
};