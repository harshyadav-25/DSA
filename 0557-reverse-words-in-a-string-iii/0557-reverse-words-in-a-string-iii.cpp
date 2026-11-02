class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        while( i < n){
            int left = i;
            while(i < n && s[i] != ' '){
                i++;
            }
            int right = i - 1;
            while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            i++;
        }
        return s;
        
    }
};