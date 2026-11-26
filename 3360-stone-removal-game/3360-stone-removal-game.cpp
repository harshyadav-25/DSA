class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        if(n == 10) return true;
        int remove = 10;
        bool aliceplay = false;
        while(n >= remove){
            n -= remove;
            remove--;
            aliceplay = !aliceplay;
        }
        return aliceplay;

    
    }
};