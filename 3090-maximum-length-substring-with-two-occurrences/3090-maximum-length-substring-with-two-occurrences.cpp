class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        unordered_map<char,int>m;
        int i = 0;
        int c = 0;
        for(int j = 0; j < n; j++){
            m[s[j]]++;
            while(m[s[j]] > 2){
                m[s[i]]--;
                i++;
            }
            c = max(c,j-i+1);
        }
        return c;
        
    }
};