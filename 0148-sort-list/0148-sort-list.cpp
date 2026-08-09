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
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode* t1 = a;
        ListNode* t2 = b;
        ListNode* c = new ListNode(0);
        ListNode* t3 = c;
        while(t1 != NULL && t2 != NULL){
            if(t1->val<= t2->val){
                t3->next = t1;
                t1 = t1 -> next;
                t3 = t3 -> next;
                
            }
            else{
                t3->next = t2;
                t2 = t2->next;
                t3 = t3 -> next;
            }
        }
        if(t1 == NULL) t3->next = t2;
        else t3->next = t1;
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow -> next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;
        
        
    }
};