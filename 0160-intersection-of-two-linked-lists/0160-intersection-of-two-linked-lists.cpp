/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1 = 0;
        int n2 = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!= NULL){
            n1++;
            tempA = tempA->next;
        }
        while(tempB!= NULL){
            n2++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        int diff = abs(n1 - n2);
        if(n1 < n2){
            for(int i = 1; i <= diff; i++){
                tempB = tempB -> next;

            }

        }
        else{
            for(int i = 1; i <= diff; i++){
                tempA = tempA -> next;

            }

        }
        while(tempA!=NULL&& tempB!=NULL ){
            if(tempA == tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }
            
       
           


           
        
        return NULL;

        
    }
};