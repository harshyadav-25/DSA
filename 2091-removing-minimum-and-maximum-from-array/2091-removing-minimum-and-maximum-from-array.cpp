class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        if(n == 2) return 2;
        int low = -1;
        int high = n;
        int mxidx = 0;
        int mx = INT_MIN;
        int mn = INT_MAX;
        int mnidx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > mx){
                mx = nums[i];
                mxidx = i;
            }
            if(nums[i] < mn){
                mn = nums[i];
                mnidx = i;
            }
        }
        int left = min(mnidx,mxidx);
        int right = max(mnidx, mxidx);
        int op1 = right - low;
        int op2 = high - left;
        int op3 = (left - low) + (high - right);
        return min({op1,op2,op3}); 

        
    }
};