class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int>mp;
       
        
        for(auto ele:arr){
            ele =((ele % k) + k) % k;
            mp[ele]++;


        }
         if (mp[0] % 2 != 0) return false;
        for(auto x:mp){
            int ele = x.first;
            //if(mp[ele] % 2 != 0) return false;
            int diff = (k - ele)%k;
            if(mp.find(diff) == mp.end()) return false;
            if(mp[ele] != mp[diff]) return false;
        }
        return true;
        
        
       
        

        
    }
};