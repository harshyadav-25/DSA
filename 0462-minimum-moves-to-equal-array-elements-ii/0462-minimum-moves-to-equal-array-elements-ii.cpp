class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int lo = 0;
        int hi = n - 1;
        int mid = lo + (hi - lo) / 2;
        int moves = 0;
        for(auto x : nums){
            moves += abs(nums[mid] - x);
        }
        return moves;

        
    }
};