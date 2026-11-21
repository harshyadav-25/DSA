class Solution {
public:
    int minRange(int a, int b, int c) {
        
        while(1){
            int mx = max({a, b, c});
            int new_a = b + c;
            int new_b = a + c;
            int new_c = a + b;
            if(new_a < mx) a = new_a;
            else if(new_b < mx) b = new_b;
            else if(new_c < mx) c = new_c;
            else break;
        }
        return max({a, b, c}) - min({a, b, c});
        
    }
};