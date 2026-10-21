class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int total = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefix = 0;
        for(int num :nums){
            prefix += num;
            int required = prefix - goal;
            total += mp[required];
            mp[prefix]++;
        }
        
        
        return total;
        
    }
};