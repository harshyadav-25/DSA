class Solution {
public:
    int maxVowels(string s, int k) {
        int c = 0;
        
        int n = s.length();
        
        for(int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                c++;
            }
            
        }
        int ans = c; 
        for(int i = k; i < n; i++){
            char ch = s[i - k];
            if(ch == 'a' || ch == 'e' || ch == 'i'||ch == 'o'||ch == 'u'){
                c--;
            }
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                c++;
            }
            ans = max(ans,c);
        }

            return ans;
        
    }
};