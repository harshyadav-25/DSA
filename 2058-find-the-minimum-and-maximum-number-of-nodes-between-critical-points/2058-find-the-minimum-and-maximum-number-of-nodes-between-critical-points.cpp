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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next == NULL) return {-1,-1};
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* Next = curr->next;
        int fidx = -1;
        int sidx = -1;
        int i = 1;
        int minDist = INT_MAX;
        while(Next != NULL){
            
            if(curr->val < prev->val && curr ->val < Next->val || curr->val > prev->val && curr->val > Next->val){
                if(fidx == -1) fidx = i;
                else minDist = min(minDist, i - sidx);
                sidx = i;
            }
            curr = curr->next;
            Next = Next->next;
            prev = prev->next;
            i++;
        }
        if(fidx == -1 || fidx == sidx) return {-1,-1};
        int maxDist = sidx - fidx;
        return {minDist,maxDist};
        
    }
};