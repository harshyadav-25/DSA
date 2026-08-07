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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* list3 = new ListNode(0);
        ListNode* t3 = list3;
        while(t1 != NULL && t2 != NULL){
            if(t1->val <= t2->val){
                t3->next = t1;
                t1 = t1->next;
                t3 = t3->next;
            }
            else{
                t3->next = t2;
                t2 = t2->next;
                t3 = t3->next;

            }




            
        }
        if(t1== NULL){
            t3->next = t2;

        }
        else{
            t3->next = t1;
        }
        return list3->next;
        
    }
};