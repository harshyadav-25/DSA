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
        if(head == NULL || k == 0) return head;
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }

        k %= n; 
       
        while(k--){
            ListNode* curr = head;
            ListNode* prev = head;
            int n = 0;
        

            while(curr->next!=NULL){
                prev = curr;
                curr = curr->next;
                
            }
            curr->next = head;
            head = curr;
            prev->next = NULL;

        }
        return head;
    }
};