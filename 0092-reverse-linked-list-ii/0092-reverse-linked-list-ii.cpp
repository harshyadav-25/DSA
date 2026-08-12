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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || head->next == NULL || left == right) return head;

        ListNode* head1 = head;
        ListNode* t1 = head1;

        // i have to make 3 ll
        for(int i = 1; i < left - 1; i++){
            t1 = t1->next;
        }

        ListNode* head2;

        if(left == 1){
            head2 = head;
        } 
        else {
            head2 = t1->next;
            t1->next = NULL;
        }

        ListNode* t2 = head2;

        for(int i = left; i < right; i++){
            t2 = t2->next;
        }

        ListNode* head3 = t2->next;
        t2->next = NULL;

        ListNode* curr = head2;
        ListNode* prev = NULL;
        ListNode* Next = NULL;

        while(curr != NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }

        head2 = prev;

        if(left == 1){
            head1 = head2;
        }
        else{
            t1->next = head2;
        }

        while(t1->next != NULL){
            t1 = t1->next;
        }

        t1->next = head3;

        return head1;


        

        

        
        
    }
};