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
    void solve(TreeNode* root, int &value, bool &ans){
        if(root == NULL){
            return;
        }

        if(root->val != value){
            ans = false;
            return;
        }

        solve(root->left, value, ans);
        solve(root->right, value, ans);
    }

    bool isUnivalTree(TreeNode* root) {
        int fixedValue = root->val;
        bool ans = true;
        solve(root, fixedValue, ans);
        return ans;
    }
};