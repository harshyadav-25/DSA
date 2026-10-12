class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> window;
        for(char ch : t){
            need[ch]++;
        }
        int required = need.size();
        int l = 0;
        int formed = 0;
        int start = 0;
        int minLen = INT_MAX;
        for(int r = 0; r < s.length(); r++){
            char ch = s[r];
            window[ch] ++;
            if(need.find(ch) != need.end() && window[ch] == need[ch]){
                formed++;
            }
            while(formed == required){
                int len = r - l + 1;
                if(len < minLen){
                    minLen = len;
                    start = l;
                }
                char leftChar = s[l];
                if(need.find(leftChar) != need.end() && window[leftChar] == need[leftChar]) {
                    formed--;
                }
                window[leftChar]--;
                l++;

            }


        }
        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    


        
    }
};