class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n == 1) return 1;
        priority_queue<int> pq;
        for(auto ele:stones){
            pq.push(ele);

        }
        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(x!=y){
                pq.push(y-x);
            }
            if(x == y) pq.push(0);
        }
        return pq.top();

        
    }
};