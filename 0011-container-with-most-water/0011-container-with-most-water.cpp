class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int maxhold = 0;
        int i = 0;
        int j = n - 1;
        while(i < j){
            //concept i used
            // int mn = min(h[i], h[j]);
            // maxhold = max(maxhold, mn * (j - i));
            // i++;
            // j--;
            if(nums[i] < nums[j]){
                maxhold = max(maxhold, nums[i] * (j - i));
                i++;
            }
            else{
                maxhold = max(nums[j] * (j - i),maxhold);
                j--;
            }
        }
        return maxhold;
    }
};