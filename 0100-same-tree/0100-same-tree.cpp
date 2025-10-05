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
    void solve(TreeNode *p, TreeNode *q, bool &flag){
        // Base Case!
        if(p == NULL && q == NULL){
            return;
        }

        if(p == NULL && q != NULL){
            flag = false;
            return;
        }

        if(p != NULL && q == NULL){
            flag = false;
            return;
        }

        if( (p->val != q->val) ){
            flag = false;
            return;
        }

        solve(p->left, q->left, flag);
        solve(p->right, q->right, flag);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = true;
        solve(p,q,ans);
        return ans;
    }
};