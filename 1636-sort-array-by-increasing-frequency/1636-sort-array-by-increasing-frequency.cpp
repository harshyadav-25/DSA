class Solution {
public:
    struct cmp {
        bool operator()(pair<int,int>& a, pair<int,int>& b) {
            if(a.first != b.first)
                return a.first > b.first;  // lower frequency first

            return a.second < b.second;    // higher number first
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>,cmp>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        
        while(!pq.empty()){
            auto x = pq.top().first;
            while(x > 0){
                ans.push_back(pq.top().second);
                
                
                x--;
            }
            pq.pop();
        }
        return ans;

        
    }
};