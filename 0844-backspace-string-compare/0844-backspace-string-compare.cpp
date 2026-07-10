class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        string s1 = "";
        string s2 = "";

        
        for (char x : s) {
            if (x == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(x);
            }
        }

        while (!st.empty()) {
            s1 += st.top();
            st.pop();
        }

        reverse(s1.begin(), s1.end());

        
        for (char x : t) {
            if (x == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(x);
            }
        }

        while (!st.empty()) {
            s2 += st.top();
            st.pop();
        }

        reverse(s2.begin(), s2.end());

        return s1 == s2;
    }
};