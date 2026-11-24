class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;
        for (int x : nums) {
            mp[x]++;
        }
        while (ans.size() < nums.size()) {
            for (auto& [x, freq] : mp) {
                if (freq > 0) {
                    ans.push_back(x);
                    freq--;
                }
            }
        }
        return ans;
    }
};