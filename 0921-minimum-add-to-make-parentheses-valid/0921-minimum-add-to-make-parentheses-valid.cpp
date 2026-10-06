class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        
        stack<char> st;
        for(char ch : s){
            if(ch == ')' && !st.empty() && st.top() == '(') st.pop();
            
            else st.push(ch);
            
        }
        return st.size();

        
    }
};