class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            int x = nums[i];
            int rev = 0;
            while(x > 0){
                int rem = x%10;
                rev = rev*10+rem;
                x = x/10;

            }
            nums.push_back(rev);
        }
        for(int x:nums){
            s.insert(x);
        }
        return s.size();
    }
};