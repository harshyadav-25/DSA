class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int firsthalf =( n / 2);
        int secondhalf = n - (n/2);
        sort(s.begin(),s.begin()+firsthalf);
        sort(s.begin()+secondhalf,s.end(),greater<int>());
        return s;

        
    }
};