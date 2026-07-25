class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n > 0){
            int rem = n % 10;
            arr.push_back(rem);
            n = n / 10;
        }
        int s = arr.size();
        int mx1 = 0;
        int mx2 = 0;
        for(int i = 0; i < s; i++){
            if(arr[i] > mx1){
                mx2 = mx1;
                mx1 = arr[i];
                
               
            }
            else if(arr[i] > mx2){
                mx2 = arr[i];
            }
    
                
            


        }
        return mx1*mx2;
       
    }
};