class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
    
        long long c = 0;
        const int MOD = 1e9 + 7;

        long long prefixSum = 0;
        long long odd = 0;
        long long even = 1;
        for(auto x : arr){
            prefixSum += x;
            if(prefixSum % 2 == 0){
                c = (c + odd) % MOD;
                even++;

            }else{
                c = (c + even) % MOD;
                odd++;

            }
        }
        return c;
    }
};