class Solution {
public:
    ListNode* solve(ListNode* curr, ListNode* prev) {
        if (curr == NULL)
            return prev;

        ListNode* nextNode = curr->next;
        curr->next = prev;

        return solve(nextNode, curr);
    }

    ListNode* reverseList(ListNode* head) {
        return solve(head, NULL);
    }
};