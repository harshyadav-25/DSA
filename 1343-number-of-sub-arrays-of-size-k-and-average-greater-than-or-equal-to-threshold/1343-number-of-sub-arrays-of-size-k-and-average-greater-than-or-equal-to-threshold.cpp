class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int c = 0;
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        int avg = (double)sum/k;
        if(avg >= threshold) c++;
        for(int i = k; i < n; i++){
            
            sum -= arr[i - k];
            sum += arr[i];
            avg = (double)sum/k;
            if(avg >= threshold) c++;

        }
        
        return c;
        
    }
};