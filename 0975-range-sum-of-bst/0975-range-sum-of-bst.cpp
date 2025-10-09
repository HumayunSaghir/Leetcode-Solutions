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
    // post order traversal----> left right root.
    void solve(TreeNode* root, vector<int> &result){
        // Base case.
        if(root == NULL){
            return;
        }

        // Left.
        solve(root->left, result);
        // Right.
        solve(root->right, result);
        // Root.
        result.push_back(root->val);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> result;
        solve(root, result);

        int sum = 0;
        for(int i = 0; i < result.size(); i++){
            if(result[i] >= low && result[i] <= high){
                sum += result[i];
            }
        }

        return sum;
    }
};