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
    void reorderList(ListNode* head) {
        if(head == NULL) return;
        if(head->next == NULL) return;
        if(head->next->next == NULL) return;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast ->next->next;

        }
        ListNode* head2 = slow->next;
       
        ListNode* a = head;
        slow->next = NULL;
        ListNode* curr = head2;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=Next;
        }
        head2 = prev;
        ListNode* b = head2;
        ListNode* dummy  = new ListNode(0);
        ListNode* c = dummy;
        while(b!=NULL){
            c->next = a;

            a = a->next;
            c = c->next;
            c->next = b;
            b= b->next;
            c = c->next;

        }
        c->next = a;
        


        
    }
};