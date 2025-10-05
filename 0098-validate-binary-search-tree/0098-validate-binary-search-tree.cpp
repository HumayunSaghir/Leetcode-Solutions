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
    void solve(TreeNode* root, vector<int> &nums){
        if(root == NULL){
            return;
        }

        solve(root->left, nums);
        nums.push_back(root->val);
        solve(root->right, nums);
    }

    bool check(vector<int> nums){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] >= nums[i + 1]){
                return false;
            }
        }

        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> result;
        solve(root, result);
        bool ans = check(result);
        return ans;
    }
};