class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> ans;
        int pos = -1;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++){
            if(c == s[i]) pq.push(i);
        }
        for(int i = 0; i < n; i++){
            if(i == pq.top()){
                pos = pq.top();
                pq.pop();
            }
            if(pos == -1){
                ans.push_back(abs(pq.top() - i));
            }
            else if(pq.empty()){
                ans.push_back(abs(pos - i));
            }
            else{
                ans.push_back(min(abs(pos - i), abs(pq.top() - i)));
            }
        }
        return ans;
        
        
        
    }
};