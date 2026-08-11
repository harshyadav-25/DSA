class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        vector<int>ans;
        for(auto x : nums){
            if(s.count(x)){
                ans.push_back(x);
            }
            else{
                s.insert(x);
            }
        }
        return ans;
       
        
        
    }
};