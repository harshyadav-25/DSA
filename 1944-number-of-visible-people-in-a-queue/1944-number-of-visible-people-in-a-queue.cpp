class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        ans[n-1] = 0;
        st.push(arr[n-1]);
        for(int i = n - 2; i >= 0; i--){
            int count = 0;
            //phle pop kro
            while(st.size() > 0 && arr[i] > st.top()){
                st.pop();
                count++;
            }
            if(st.size() != 0){
                count++;
            }

            ans[i] = count;
            st.push(arr[i]);
        }
        return ans;

        
    }
};