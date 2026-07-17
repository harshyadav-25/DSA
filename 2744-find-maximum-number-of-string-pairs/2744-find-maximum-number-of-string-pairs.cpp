class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string> s;
        int c = 0;
        for(int i = 0; i < n; i++){
            s.insert(words[i]);
        }
        for(int i = 0; i < n; i++){
            string x = words[i];
            reverse(x.begin(), x.end());
            if(x == words[i]) continue;
            if(s.find(x)!=s.end()){
                c++;
                s.erase(words[i]);
            }

        }
        return c;

    }
};