class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        //brute force

        // int mxLen = 0;
        // for(int i = 0; i < n; i++){
        //     int mn = nums[i];
        //     int mx = nums[i];
        //     for(int j = i; j < n; j++){
        //         mn = min(mn, nums[j]);
        //         mx = max(mx, nums[j]);
                
        //         if(mx - mn <= limit){
                    
        //             mxLen = max(j - i + 1, mxLen);
                    

        //         }
        //         else break;
                
        //     }
        // }
        // return mxLen;
        int left = 0;
        int mxLen = 0;
        deque<int> maxD, minD;
       
        for(int right = 0; right < n; right++){
            while(!maxD.empty() && nums[maxD.back()] <= nums[right]){
                maxD.pop_back();

            }
            maxD.push_back(right);
            while(!minD.empty() && nums[minD.back()] >= nums[right]){
                minD.pop_back();
            }
            minD.push_back(right);
            //shrink
            while(nums[maxD.front()] - nums[minD.front()] > limit){
                if(maxD.front() == left){
                    maxD.pop_front();


                }
                if(minD.front() == left){
                    minD.pop_front();

                }
                left++;
            }
            mxLen = max(mxLen, right - left + 1);
           


        }
        return mxLen;

        
    }
};