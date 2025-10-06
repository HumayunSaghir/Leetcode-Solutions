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
    void solve(TreeNode* root, vector<int> &result){
        // Base case.
        if(root == NULL){
            return;
        }

        // Root.
        result.push_back(root->val);

        // Left.
        solve(root->left, result);

        // Right.
        solve(root->right, result);
    }

    bool check(vector<int> &nums, int k){
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == k){
                    return true;
                }
            }
        }

        return false;
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        solve(root, nums);
        bool ans = check(nums, k);
        return ans;
    }
};