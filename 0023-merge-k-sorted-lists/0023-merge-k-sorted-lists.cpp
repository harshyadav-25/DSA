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
    ListNode* merge(ListNode* a, ListNode*b){

        ListNode* t1 = a;
        ListNode* t2 = b;
        ListNode* c = new ListNode(0);
        ListNode* t3 = c;
        while(t1 != NULL && t2!=NULL){
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
        if(t1 == NULL) t3->next = t2;
        else t3->next = t1;
        return c -> next;


    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size() > 1){
            ListNode* a = lists[lists.size() - 1];
            lists.pop_back();
            ListNode* b = lists[lists.size() - 1];
            lists.pop_back();
            ListNode* c = merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
        
        
        
        
    }
};