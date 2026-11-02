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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }
        k = k % n;
        if(k == 0) return head;
        
        ListNode* curr = head;
        for(int i = 1; i < n - k; i++){
            curr = curr->next;
        }
        ListNode* head2 = curr->next;
        curr->next = NULL;
        ListNode* temp2 = head2;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = head;

        
        return head2;
        
    }
};