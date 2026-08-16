class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* tc = dummy;
        ListNode* temp = head;

        while (temp != NULL) {
            if (temp->val == val) {
                tc->next = temp->next;
            } 
            else {
                tc = tc->next;
            }

            temp = temp->next;
        }

        return dummy->next;
    }
};