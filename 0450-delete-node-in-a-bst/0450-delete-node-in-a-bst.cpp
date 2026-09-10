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
    TreeNode* inorderpred(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right != NULL){
            pred = pred->right;
        }
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val == key){
            //case1:no child
            if(root->left == NULL && root->right == NULL){
                return NULL;
            }
            //case2:one child
            if(root->left == NULL || root->right == NULL){
                if(root->left != NULL) return root->left;
                if(root->right != NULL) return root->right;
            }
            //both child
            if(root->left != NULL && root->right != NULL){
                //inorder pred
                TreeNode* pred = inorderpred(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
            

        }
        else if(root->val < key){
            //search in right
            root->right = deleteNode(root->right,key);

        }
        else{
            //search in left
            root->left = deleteNode(root->left,key);
        }
        return root;
    }
};