class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(s.length() != goal.length()) return false;
        for(int i = 0; i < n; i++){
            if(goal == s) return true;
            int first = s[0];
            s.erase(0, 1);
            s.push_back(first);
        }
        return false;
        
    }
};