class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n = operations.size();
        for(string s:operations){
            if(s == "C"){
                st.pop();
            }
            else if( s == "D"){
                st.push(2*st.top());
            }
            else if(s == "+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first+second);
            }
            else{
                st.push(stoi(s));
            }
        }
        long long sum = 0;
        while(!st.empty()){
            int x = st.top();
            sum += x;
            st.pop();
        }
        return sum;
        
    }
};