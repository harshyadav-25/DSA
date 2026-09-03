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
private:
    void helper(TreeNode* root, long long targetSum, int &c){
        if(root == NULL) return;
        if(root ->val == targetSum){
            c++;

        }
        helper(root->left, targetSum - root->val, c);
        helper(root->right, targetSum - root->val, c);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return 0;
        int c = 0;
        helper(root, targetSum, c);
        c += pathSum(root->left, targetSum);
        c += pathSum(root->right, targetSum);
        return c;

        
    }
};