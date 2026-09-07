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
    void mx(TreeNode* root, int &maxnode){
        if(root==NULL) return;
        if(root->val > maxnode) maxnode = root->val;
    	mx(root->left, maxnode);
	    mx(root->right, maxnode);

    }
    void mn(TreeNode* root, int &minnode){
        if(root == NULL) return;
        
        if(root->val < minnode) minnode =root->val;
        mn(root->left, minnode);
        mn(root->right, minnode);
    }
    bool isValidBST(TreeNode* root) {
        
        bool ans1 = true;
        bool ans2 = true;
        if(root == NULL) return true; 
        int maxnode = INT_MIN;
        int minnode = INT_MAX;
        mx(root->left,maxnode);
        mn(root->right,minnode);
        if(root->left != NULL && maxnode >= root->val) ans1 = false;
        if(root->right != NULL && minnode <= root->val) ans2 = false;
        bool left = isValidBST(root->left);
        bool right = isValidBST(root->right);
        return ans1 && ans2 && left && right;
        
    }
};