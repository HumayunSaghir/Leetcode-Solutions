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
    // This will count avergae of subtree.
    void countAverage(TreeNode *root, int &sum, int &count){
        // Base case.
        if(root == NULL){
            return;
        }

        // Processing.
        count = count + 1;
        sum = sum + root->val;

        countAverage(root->left, sum, count);
        countAverage(root->right, sum, count);

    }

    void solve(TreeNode *root, int &total){
        // Base case.
        if(root == NULL){
            return;
        }

        // Processing.
        int sum = 0;
        int count = 0;
        countAverage(root, sum, count);
        int ans = (sum / count);
        if(ans == root->val){
            total = total + 1;
        }

        solve(root->left, total);
        solve(root->right, total);

    }

    int averageOfSubtree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        int total = 0;
        solve(root, total);
        return total;

    }
};