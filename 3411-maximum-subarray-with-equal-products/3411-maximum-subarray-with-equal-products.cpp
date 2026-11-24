class Solution {
public:
    long long custom_gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long custom_lcm(long long a, long long b) {
        return (a / custom_gcd(a, b)) * b;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        const long long LIMIT = 25200;
        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long gcd = 0;
            long long lcm = 1;
            for (int j = i; j < n; j++) {
                if (prod > LIMIT / nums[j]) {
                    break;
                }

                prod *= nums[j];
                gcd = custom_gcd(gcd, nums[j]);
                lcm = custom_lcm(lcm, nums[j]);

                if (prod == gcd * lcm) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};