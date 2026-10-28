class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int r = n - 1;
        while(r >= 0 && (num[r] - '0') % 2 == 0) r--;
        if(r < 0) return "";
        int l = 0;
        while(l < n && num[l]-'0' == 0) l++;
        return num.substr(l, r - l + 1);
    }
};