class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        int min = INT_MAX;
        unordered_set<int>s;
        vector<int>ans;
        for(int i = 0; i < n; i++){
            if(nums[i] > max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }
        for(int i = min; i<= max; i++){
            s.insert(i);
        }
        for(int i = 0; i <n; i++){
            int ele = nums[i];
            if(s.find(ele) != s.end()){
                s.erase(ele);


            }
        }
        for(int ele:s){
            ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};