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
        //return c -> next;
        ListNode* ans = c->next;
        delete c;
        return ans;


    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0) return NULL;
        return partition(lists,0,n - 1);
       
    }
    ListNode* partition(vector<ListNode*>& lists,int low,int high){
        if(low == high) return lists[low];
        int mid = low + (high - low)/2;
        ListNode* a = partition(lists, low, mid);
        ListNode* b = partition(lists, mid+1,high);
        return merge(a,b);
        
    }
};