class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> freq(26, 0);

       
        for(char c : s){
            freq[c - 'a']++;
        }

        string ans = "";
        char middle = 0;

        for(int i = 0; i < 26; i++){

            if(freq[i] % 2 == 1){
                middle = i + 'a';
            }

            for(int j = 0; j < freq[i] / 2; j++){
                ans.push_back(i + 'a');
            }
        }

        string result = ans;

        if(middle)
            result.push_back(middle);

        string second = ans;
        reverse(second.begin(), second.end());

        result += second;

        return result;
    }
};