class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sqSum = 0;
        
        for(int i = 0; i < n; i++){
            unordered_set<int> s;
            
            for(int j = i; j < n; j++){
                s.insert(nums[j]);
                int count = s.size();
                sqSum += (count*count);


            }
            
            
        }
        return sqSum;
    }
};