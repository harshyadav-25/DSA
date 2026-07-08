class Solution {
public:
    long long sumAndMultiply(int n) {
        long long curr = 0;
        long long sum = 0;
        long long mul = 1;

        while(n != 0){
            if(n % 10 != 0){
                long long rem = (n % 10) * mul;
                curr += rem;
                mul *= 10;

            }
            sum += n % 10;
            n /= 10;
        }
        return sum*curr;
    }
};