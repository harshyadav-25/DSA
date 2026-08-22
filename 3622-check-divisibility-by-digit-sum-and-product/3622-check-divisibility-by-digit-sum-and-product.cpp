class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        long sum = 0;
        long prod = 1;
        while(temp > 0){
            int rem = temp % 10;
            sum += rem;
            prod *= rem;
            temp = temp / 10;

        }
        long total = sum + prod;
        return n % (total) == 0;
        
    }
};