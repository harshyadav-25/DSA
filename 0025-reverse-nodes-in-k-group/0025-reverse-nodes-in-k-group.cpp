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
    ListNode* reverse(ListNode* tail, ListNode* head, int k){
        ListNode* prev = tail;
        ListNode* curr = head;
        ListNode* Next = NULL;
        int i = 0;
        while(i < k){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            i++;
        }
        if(tail != NULL) tail->next = prev;
        head->next = curr;
        return head;

    }

    int size(ListNode* head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = size(head);
        
        if(n == 1 || k == 1 || n < k) return head;
        int i = 1;
       ListNode* curr = head;
       while(i != k){
        curr = curr->next;
        i++;
       }
       ListNode* tail = reverse(NULL, head, k);
       n = n - k;
       while(n >= k){
        tail = reverse(tail, tail->next, k);
        n = n - k;
       }
       return curr;

        
    }
};