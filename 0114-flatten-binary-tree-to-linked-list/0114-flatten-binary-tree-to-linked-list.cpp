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
    vector<TreeNode*> ans;
    vector<TreeNode*>preorder(TreeNode* root){
        if(root == NULL) return ans;
        ans.push_back(root);
        preorder(root->left);
        preorder(root->right);
        return ans;
    }
    void flatten(TreeNode* root) {
        ans = preorder(root);
        int n = ans.size();
        for(int i = 0; i < n - 1; i++){
            ans[i]->right = ans[i+1];
            ans[i]->left = NULL;
        }
    }
};