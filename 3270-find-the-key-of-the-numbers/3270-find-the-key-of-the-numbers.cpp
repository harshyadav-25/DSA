class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string x = to_string(num1);
        string y = to_string(num2);
        string z = to_string(num3);
        int mx = max({x.length(), y.length(), z.length()});
        while (x.length() < mx) x = "0" + x;
        while (y.length() < mx) y = "0" + y;
        while (z.length() < mx) z = "0" + z;
        string ans = "";
        for (int i = 0; i < mx; i++) {
            ans += min({x[i], y[i], z[i]});
        }
        return stoi(ans);
    }
};
