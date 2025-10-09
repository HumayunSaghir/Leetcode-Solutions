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
    void preOrderTraversal(TreeNode* root, vector<int> &nums){
        // Base case.
        if(root == NULL){
            return;
        }

        // Root.
        nums.push_back(root->val);

        // Left.
        preOrderTraversal(root->left, nums);

        // Right.
        preOrderTraversal(root->right, nums);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> nums;
        preOrderTraversal(root1, nums);
        preOrderTraversal(root2, nums);
        sort(nums.begin(), nums.end());
        return nums;
    }
};