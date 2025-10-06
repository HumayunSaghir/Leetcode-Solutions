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
    // I will use inOrder traversal.
    void solve(TreeNode *root, bool isLeft, vector<int> &nums){
        // Base case.
        if(root == NULL){
            return;
        }

        // Left.
        // isLeft = true;
        solve(root->left, true, nums);
        
        // Root.
        if((isLeft == true) && (root->left == NULL && root->right == NULL)){
            nums.push_back(root->val);
        }

        // Right.
        // isLeft = false;
        solve(root->right, false, nums);
        
    }

    // This function will return sum of elements in array.
    int findSum(vector<int> &nums){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        return sum;
    }

    // Main function.
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> nums;
        bool isLeft = false;
        solve(root, isLeft, nums);
        int result = findSum(nums);
        return result;
    }
};