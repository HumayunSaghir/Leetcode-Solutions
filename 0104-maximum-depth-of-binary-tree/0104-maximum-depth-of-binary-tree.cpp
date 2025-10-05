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
    int solve(TreeNode *root){
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode *temp = q.front();
            q.pop();

            if(temp == NULL){
                count++;
                if(!q.empty()){
                    q.push(NULL);
                }

            }

            else{
                if(temp->left != NULL){
                    q.push(temp->left);
                }

                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }

        }

        return count;
    }

    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = solve(root);
        return ans;
    }
};