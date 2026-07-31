class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
       
        int minDist = INT_MAX;
       
        for(int i = 0; i < n-1; i++){
            minDist = min(abs(arr[i] - arr[i+1]),minDist);
                
        }
        for(int i = 0; i < n-1; i++){
            if(abs(arr[i] - arr[i+1]) == minDist){
                ans.push_back({arr[i],arr[i+1]});
            }
        }

           
            
        
        return ans;
        
    }
};