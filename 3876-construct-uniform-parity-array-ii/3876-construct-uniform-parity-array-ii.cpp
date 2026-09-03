class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());

        if (mn % 2 == 1)
            return true;

        for (int ele : nums) {
            if (ele % 2 == 1)
                return false;
        }

        return true;
    }
};