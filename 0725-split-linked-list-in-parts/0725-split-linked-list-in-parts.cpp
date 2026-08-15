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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int n = 0;
        ListNode* t = head;
        while(t != NULL){
            n++;
            t = t->next;
        }
        t = head;
        //split krna hai k parts me 
        int size = n / k;
        int rem = n % k;
        while(t != NULL){
            int s = size;
            ListNode* c = new ListNode(0);
            ListNode* tc = c;
            if(rem > 0) s++;
            rem--;
            for(int i = 1; i <= s; i++){
                tc->next = t;
                t = t->next;
                tc = tc->next;
            }
            tc->next = NULL;
            ans.push_back(c->next);
        }
        while(ans.size() < k) ans.push_back(NULL);
        return ans;

        
        
    }
};