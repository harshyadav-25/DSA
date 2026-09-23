class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int totalSum = 0;
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
        }
        int target = totalSum - x;
        if(target < 0) return -1;
        if(target == 0) return n;
        int i = 0;
        int sum = 0;
        int maxLen = -1;
        for(int j = 0; j < n; j++){
            sum += nums[j];
            while(sum > target && i <= j){
                sum -= nums[i];
                i++;
            }
            if(sum == target){
                maxLen = max(maxLen, j - i +1);
            }
            
        }
        if(maxLen == -1){
            return -1;
        }
        else{
            return n - maxLen;
        }
        
        
    }
};