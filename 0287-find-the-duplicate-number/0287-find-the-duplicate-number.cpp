class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> freq;
        for(auto x : nums){
            freq[x]++;
            if(freq[x] > 1) return x;

        }
        return -1;

        
        
    }
};