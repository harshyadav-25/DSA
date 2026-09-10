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
    int count = 0;
    void helper(TreeNode* root, int &sum,int &n){
        if(root == NULL) return;
        
        n++;
        helper(root->left,sum,n);
        helper(root->right,sum,n);
        sum += root->val;
        
    }
    int averageOfSubtree(TreeNode* root) {
        if(root == NULL) return 0;
        int n = 0;
        int sum = 0;
        helper(root, sum,n);
        int avg = sum/n;
        if(avg == root->val) count++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return count;
        
    }
};