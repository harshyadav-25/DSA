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
    bool helper(TreeNode* l, TreeNode* r){
        if(l == NULL && r == NULL) return true;
        if(l == NULL || r == NULL) return false;
        bool case1 = l->val == r->val;
        bool case2 = helper(l->left, r->right);
        bool case3 = helper(l->right, r->left);
        return case1 && case2 && case3;

    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        bool ans = helper(root->left, root->right);
        if(ans == true) return true;
        return false;
        
        
    }
};