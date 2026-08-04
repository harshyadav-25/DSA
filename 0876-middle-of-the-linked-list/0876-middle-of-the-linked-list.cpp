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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        
        while(temp != NULL){
            size++;
            temp = temp -> next;


        }
        if(size == 1) return head;
        int mid;
        //if(size % 2 == 0) mid = (size / 2);
        mid = (size / 2);
        //ListNode* t = head;
        int i = 1;
        while(i<mid){
            head = head -> next;
            i++;

        }
        return head->next;

        
        
    }
};