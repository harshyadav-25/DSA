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
    int height(TreeNode* root, int &maxDia){
        if(root == NULL) return 0;
        int left = height(root->left,maxDia);
        int right = height(root->right,maxDia);
        int currDia = left + right;
        maxDia = max(currDia,maxDia);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int maxDia = 0;
        height(root,maxDia);
        return maxDia;

    }
};