class Solution {
public:
    const int mod = 1e9+7;
    int maximumProduct(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i < n; i++){
            pq.push(nums[i]);
        }
        while(k>0){
            k--;
            int ele = pq.top();
            pq.pop();
            pq.push(ele+1);
        }
        long ans = 1;
        while(!pq.empty()){
            ans = (ans * pq.top()) % mod;
            pq.pop();
        }
        return ans;
        
    }
};