class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        int miss = k;
        while(s.count(miss)){
            miss += k;
        }
        return miss;
            
        
    }
};