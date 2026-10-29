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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        if(size == 1) return NULL;
        if(size == n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int idx = size - n - 1;
        ListNode* curr = head;
        for(int i = 0; i < idx; i++){
            curr = curr->next;

        }
        ListNode* t = curr->next;
        curr->next = t->next;
        delete t;
        return head;
        
    }
};