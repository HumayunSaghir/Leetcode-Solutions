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
    void solve(TreeNode *p, TreeNode *q, bool &ans){
        // when both are null
        if(p == NULL && q == NULL){
            return;
        }

        // when one is null
        if(p == NULL && q != NULL){
            ans = false;
            return;
        }

        // when one is null
        if(p != NULL && q == NULL){
            ans = false;
            return;
        }

        // when value of both are not equal.
        if(p->val != q->val){
            ans = false;
            return;
        }

        solve(p->left, q->right, ans);
        solve(p->right, q->left, ans);

    }

    bool isSymmetric(TreeNode* root) {
        if(root->left == NULL && root->right == NULL){
            return true;
        }

        TreeNode *p = root->left;
        TreeNode *q = root->right;
        
        bool ans = true;

        solve(p, q, ans);
        
        return ans;
    }
};