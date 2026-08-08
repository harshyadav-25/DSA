/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int minrow = 0;
        int maxrow = m - 1;
        int mincol = 0;
        int maxcol = n - 1;
        ListNode* t = head;

        vector<vector<int>>gm(m,vector<int>(n,-1));
        while(minrow <= maxrow && mincol <= maxcol){
            //filling in right
            for(int j = mincol; j <= maxcol; j++){
                if(t == NULL) return gm;
                gm[minrow][j] = t->val;
                t = t->next;

            }
            minrow++;//0->1
            if(minrow > maxrow || mincol > maxcol) break;
            //filiing down
            for(int i = minrow; i <= maxrow; i++){
                if(t == NULL) return gm;
                gm[i][maxcol] = t->val;
                t = t->next;
            }
            maxcol--; // 4->3
            if(minrow > maxrow || mincol > maxcol) break;
            //filling left
            for(int j = maxcol; j >= mincol; j--){
                if(t == NULL) return gm;
                gm[maxrow][j] = t->val;
                t = t->next;
            }
            maxrow--; //2->1
            if(minrow > maxrow || mincol > maxcol) break;
            // filing up
            for(int i = maxrow; i >= minrow; i--){
                if(t == NULL) return gm;
                gm[i][mincol] = t->val;
                t = t->next;
            }
            mincol++; //0->1
            if(minrow > maxrow || mincol > maxcol) break;


        }
        return gm;
       
        
        

    }
};