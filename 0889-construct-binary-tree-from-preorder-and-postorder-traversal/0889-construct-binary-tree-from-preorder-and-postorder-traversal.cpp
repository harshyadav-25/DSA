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
    TreeNode* build(vector<int>& pre, int prelow, int prehigh, vector<int>& post,int postlow, int posthigh){
        if (prelow > prehigh) return NULL;
        
        TreeNode* root = new TreeNode(pre[prelow]);
        if(prelow == prehigh) return root;
        int leftRoot = pre[prelow + 1];
        int i = mp[leftRoot];
        int leftcount = i - postlow + 1;
        root->left = build(pre, prelow + 1, prelow + leftcount, post, postlow, i);
        root->right = build(pre, prelow + leftcount + 1, prehigh, post, i + 1, posthigh - 1);
        return root;
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = preorder.size();
        for(int i = 0; i < n; i++){
            mp[postorder[i]] = i;
        }
        return build(preorder, 0, n - 1, postorder, 0, n - 1);
        
    }
};