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
    void inorderDfs(TreeNode* root, vector<int> &ans){
        stack<TreeNode*> st;
        
        while(root != NULL || !st.empty()){
            while(root != NULL){
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            root = root->right;


        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderDfs(root, ans);
        return ans;

        
    }
};