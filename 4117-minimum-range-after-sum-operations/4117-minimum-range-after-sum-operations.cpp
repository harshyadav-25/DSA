class Solution {
public:
    int minRange(int a, int b, int c) {
        int diff = max({a, b, c}) - min({a, b, c});
        int x = a;
        int y = b;
        int z = c;
        x = b + c;
        diff = min(diff, max({x, y, z}) - min({x, y, z}));
        x = a;
        y = a + c;
        diff = min(diff, max({x, y, z}) - min({x, y, z}));
        y = b;
        z = a + b;
        diff = min(diff, max({x, y, z}) - min({x, y, z}));
        return diff;


        
    }
};