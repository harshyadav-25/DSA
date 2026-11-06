class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int n = s.size();
        int line = 1;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int c = s[i] - 'a';
            sum += widths[c];
            if(sum > 100){
                line++;
                sum = widths[c];
            }
        }
        return {line, sum};
        
    }
};