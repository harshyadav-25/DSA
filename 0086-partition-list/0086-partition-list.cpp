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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lower = new ListNode(0);
        ListNode* higher = new ListNode(0);
        ListNode* tlo = lower;
        ListNode* thi = higher;
        ListNode* t = head;
        if(head == NULL) return head;
        while(t!=NULL){
            if(t->val < x){
                tlo->next = t;
                t = t->next;
                tlo = tlo->next;
            }
            else{
                thi->next = t;
                t = t->next;
                thi = thi -> next;

            }

        }
        thi -> next = NULL;
        tlo->next = higher->next;
        return lower->next;
        
    }
};