class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size() || t.empty()) return "";
        vector<int> freq(128,0);
        for (char ch : t) {
            freq[ch]++;
        }
        
        int start = 0;
        int minLen = INT_MAX;
        int left = 0;
        int missing = t.size();
        for(int right = 0; right < s.length(); right++){
            if(freq[s[right]] > 0){
                missing--;
            }
            freq[s[right]]--;
            while(missing == 0){
                int len = right - left + 1;
                if(len < minLen){
                    minLen = len;
                    start = left;
                }
                freq[s[left]]++;

                if (freq[s[left]] > 0) {
                    missing++;
                }

                left++;

            }
            
           
            
        }
        if(minLen == INT_MAX) return "";
        return s.substr(start,minLen);

        
    }
};