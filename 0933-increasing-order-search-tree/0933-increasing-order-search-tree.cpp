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
    // inOrder traveral is used.
    void solve(TreeNode *root, vector<int> &nums){
        // base case.
        if(root == NULL){
            return;
        }

        // left.
        solve(root->left, nums);

        // root.
        nums.push_back(root->val);

        // right.
        solve(root->right, nums);

    }

    TreeNode* solve1(TreeNode *root, vector<int> &nums){
        TreeNode *parent = root;
        TreeNode *son = NULL;

        parent->val = nums[0];
        parent->left = NULL;
        son = parent;
        root = NULL;

        for(int i = 1; i < nums.size(); i++){
            TreeNode *newNode = new TreeNode(nums[i]);
            son->right = newNode;
            son = newNode;
        }

        return parent;

    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int> nums;
        solve(root, nums);
        // all elements are pushed to an array till now.

        if(root == NULL){
            return root;
        }

        if(root->left == NULL && root->right == NULL){
            return root;
        }
        
        TreeNode *ans = solve1(root, nums);
        
        return ans;
    }
};