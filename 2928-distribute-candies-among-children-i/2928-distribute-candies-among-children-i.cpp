// 
// class Solution {
// public:
//     int distributeCandies(int n, int l) {
//         int c = 0;
//         for(int i = 0; i <= l; i++){
//             for(int j = 0; j <= l; j++){
//                 int k = n - j - i;
//                 if(k >=0 && k <= l) c++;
                
                
//             }
//         }
//         return c;
//     }
// };
// 
class Solution {
public:
    int distributeCandies(int n, int l) {
        int c = 0;
        for(int i = 0; i <= min(l,n); i++){
            for(int j = 0; j <= min(l,n - i); j++){
                int k = n - j - i;
                if(k >=0 && k <= l) c++;
                
                
            }
        }
        return c;
    }
};