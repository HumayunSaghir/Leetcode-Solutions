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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q1;
        q1.push(root);
        q1.push(NULL);
        int sum = 0;

        while(!q1.empty()){
            TreeNode *temp = q1.front();
            q1.pop();

            if(temp != NULL){
                sum += temp->val;
            }


            if(temp == NULL){
                if(!q1.empty()){
                    q1.push(NULL);
                    sum = 0;
                }
            }
            else{
                if(temp->left){
                    q1.push(temp->left);
                }

                if(temp->right){
                    q1.push(temp->right);
                }
            }
        }

        return sum;
    }
};