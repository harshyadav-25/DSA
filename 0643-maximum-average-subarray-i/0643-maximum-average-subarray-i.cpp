class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxavg = 0;
        int sum = 0;
        for(int i = 0; i < k; i++){

            sum += nums[i];
        }
        int maxsum = sum;
        for(int i = k; i < n; i++){
            sum -= nums[i - k];
            sum += nums[i];
            maxsum = max(sum, maxsum);
        }
        return (double)maxsum/k;
        
    }
};