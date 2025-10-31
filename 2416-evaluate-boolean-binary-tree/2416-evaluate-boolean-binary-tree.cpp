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
    void solve(TreeNode *root, bool &ans){
        // Base Case for identifying the leaf nodes! 
        if(root->left == NULL && root->right == NULL){
            return;
        }

        solve(root->left, ans);
        solve(root->right, ans);

        if(root->val == 2){ // Or operation.
            ans = (root->left->val || root->right->val);
            root->val = ans;
        }
        else if(root->val == 3){
            ans = (root->left->val && root->right->val);
            root->val = ans;
        }
    }

    bool evaluateTree(TreeNode* root) {
        if(root == NULL){
            return false;
        }

        if(root->left == NULL && root->right == NULL){
            return root->val;
        }
        
        
        
        bool ans = false;
        solve(root, ans);
        return ans;    
    }
};