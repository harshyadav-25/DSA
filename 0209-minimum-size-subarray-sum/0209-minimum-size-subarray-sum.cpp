class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int L = 0;
        int sum = 0;
        int minLen = INT_MAX;
        for(int R = 0; R < n; R++){
            sum += nums[R];
            while(sum >= target){
                minLen = min(minLen, R - L + 1);
                sum -= nums[L];
                L++;
            }

        }
        if(minLen == INT_MAX) return 0;
        return minLen;
        
    }
};