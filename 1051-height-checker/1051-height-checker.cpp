class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        // Apppying counting sort here
        int count[101] = {0};
        for(auto h : heights){
            count[h]++;
        }
        int ans = 0;
        int j = 0;
        for(int h = 1; h <= 100; h++){
            while(count[h] > 0){
                if(heights[j] != h) ans++;
                count[h]--;
                j++;
            }
        }
        return ans;

    }
};