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
    TreeNode* build(vector<int>& in, int inlow, int inhigh, vector<int>& post, int postlow, int posthigh){
        if(postlow > posthigh) return NULL;
        TreeNode* root = new TreeNode(post[posthigh]);
        if(postlow == posthigh) return root;
        int i = inlow;
        while(i <= inhigh){
            if(in[i] == post[posthigh]) break;
            i++;
        }
        int leftcount = i - inlow;
        int rightcount = inhigh - i;
        root->left = build(in, inlow, i - 1, post, postlow, postlow + leftcount - 1);
        root->right = build(in, i + 1, inhigh, post, postlow + leftcount, posthigh - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return build(inorder, 0, n - 1, postorder, 0, n - 1);
        
    }
};