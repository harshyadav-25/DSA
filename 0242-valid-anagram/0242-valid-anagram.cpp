class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,int> mp1;
        for(auto x:s){
            mp1[x]++;
        }
        unordered_map<char,int> mp2;
        for(auto x:t){
            mp2[x]++;
        }
        for(auto x:mp1){
            char ch1 = x.first;
            int freq1 = x.second;
            if(mp2.find(ch1) != mp2.end()){
                int freq2 = mp2[ch1];
                if(freq1 != freq2) return false;
            }
            else return false;

        }
        return true;


        
    }
};