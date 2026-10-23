class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int candidates = 0;
        for(int x: nums){
            if(count == 0){
                candidates = x;
            }
            if(x == candidates) count++;
            else count--;
        }
        return candidates;
        
        
    }
};