class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        
        vector<int>arr1;
        vector<int>arr2;
        int x1 = nums[0];
        int x2 = nums[1];
        arr1.push_back(x1);
        arr2.push_back(x2);
        
        for(int i = 2; i < n; i++){
            if(arr1.back() < arr2.back()){
                arr2.push_back(nums[i]);
                
            }
            else{
                arr1.push_back(nums[i]);
            }
        }
        for(int i = 0; i< arr1.size();i++){
            res.push_back(arr1[i]);
        }
        for(int i = 0; i < arr2.size();i++){
            res.push_back(arr2[i]);
        }


        
        return res;
        
        
    }
};