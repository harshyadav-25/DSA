class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* curr = head;
        while (curr != NULL && curr->next != NULL) {

            ListNode* t = curr;
            ListNode* prev = NULL;
            while (t->next != NULL) {
                prev = t;
                t = t->next;
            }
            if (curr->next == t)
                break;

            ListNode* next = curr->next;
            prev->next = NULL;
            curr->next = t;
            t->next = next;
            curr = next;
        }
    }
};