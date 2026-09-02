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
    
    void bfs(TreeNode* root, vector<int> &ans){
        if(root == NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size() > 0){
            int n = q.size();
            for(int i = 0; i < n - 1; i++){
                
                if(q.front()->left != NULL) q.push(q.front()->left);
                if(q.front()->right != NULL) q.push(q.front()->right);
                q.pop();


            }
            ans.push_back(q.front()->val);
            if(q.front()->left != NULL) q.push(q.front()->left);
            if(q.front()->right != NULL) q.push(q.front()->right);
            q.pop();
            
        }


    }
public:
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        if(root == NULL) return ans;
        bfs(root, ans);
        return ans;
        
    }
};