class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        int windowSize = n - k;
        for(int x : cardPoints){
            total += x;
        }
        int windowSum = 0;
        for(int i = 0; i < windowSize; i++){
            windowSum += cardPoints[i];
        }
        int minWindowSum = windowSum;
        for(int i = windowSize; i < n; i++){
            windowSum -= cardPoints[i - windowSize];
            windowSum += cardPoints[i];
            minWindowSum = min(minWindowSum, windowSum);

        }
        return total - minWindowSum;

        
    }
};