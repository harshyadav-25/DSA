class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int Xor = 0;
        int Zeroes = 0;
        for(int i = 0; i < n; i++){
            Xor ^= nums[i];
            if(nums[i] == 0) Zeroes++;
        }
        if(Zeroes == n) return 0;
        if(Xor != 0) return n;
        return n - 1;        
    }
};