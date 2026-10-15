class Solution {
public:
    void find(int idx, int target, vector<int>& candidates,vector<vector<int>> &ans,vector<int>& curr){
        //base case
        if(idx == candidates.size()){
            if(target == 0) ans.push_back(curr);
            return;
        }
        if(candidates[idx] <= target){
            curr.push_back(candidates[idx]);
            find(idx, target-candidates[idx], candidates, ans, curr);
            //backtrack
            curr.pop_back();

        }
        find(idx+1, target, candidates, ans, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        find(0, target, candidates, ans, curr);
        return ans;
        
    }
};