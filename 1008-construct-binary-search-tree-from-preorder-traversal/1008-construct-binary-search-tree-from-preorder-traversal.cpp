/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int, int> mp;
    TreeNode* build(vector<int> pre,int prelow, int prehigh, vector<int>in,int inlow, int inhigh){
        if(prelow > prehigh) return NULL;
        TreeNode* temp = new TreeNode(pre[prelow]);
        int i = mp[temp->val];
        int leftcount = i - inlow;
        int rightcount = inhigh - i;
        temp->left = build(pre,prelow+1,prelow+leftcount,in,inlow,i - 1);
        temp->right = build(pre,prelow+leftcount+1,prehigh,in,i+1,inhigh);
        return temp;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder = preorder;
        int n = preorder.size();
        sort(inorder.begin(),inorder.end());
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        return build(preorder,0,n-1,inorder,0,n-1);

        
    }
};