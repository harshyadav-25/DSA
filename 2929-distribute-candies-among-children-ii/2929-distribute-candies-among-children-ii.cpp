class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long c = 0;
        for(int i = 0; i <= min(limit,n); i++){
            int leftlimit = max(0,n - i - limit);
            int rightlimit = min(limit,n - i);
            if(leftlimit>rightlimit) c = 0;
            else c+=(rightlimit - leftlimit +1);
        }
        return c;
        
    }
};