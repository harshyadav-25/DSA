class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.length();
        while(n > k){
            string t = "";
            for(int i = 0; i < n; i+=k){
                int sum = 0;
                for(int j = i; j < min(n, i + k); j++){
                    sum += s[j] - '0';
                }
                t += to_string(sum);

            }
            n = t.length();
            s = t;
        }
        return s;
        
    }
};