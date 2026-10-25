class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        int swap = 0;
        int c= 0;
        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(ch == ']'){
                if(c == 0){
                    c++;
                    swap++;
                }
                else c--;

            }
            else c++;
        }
        return swap;

        
    }
};