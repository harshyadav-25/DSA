class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp = arr;
        sort(temp.begin(),temp.end());
        int currRank = 1;
        unordered_map<int,int>rank;
        for(int x: temp){
           if(!rank.count(x)) rank[x] = currRank++;
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = rank[arr[i]];
        }

        return arr;


        
    }
};