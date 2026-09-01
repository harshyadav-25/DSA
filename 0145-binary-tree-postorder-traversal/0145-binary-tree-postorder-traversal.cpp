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
    void postorder_by_stack(TreeNode* root,vector<int> &ans){
        if(root == NULL) return;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp = st.top();
            if(temp!=NULL) ans.push_back(temp->val);
            st.pop();

            if(temp->left != NULL) st.push(temp->left);
            if(temp->right != NULL) st.push(temp->right);

        }
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder_by_stack(root, ans);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};