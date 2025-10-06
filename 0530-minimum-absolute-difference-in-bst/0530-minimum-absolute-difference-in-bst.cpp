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
    void solve(TreeNode *root, vector<int> &nums){
        if(root == NULL){
            return;
        }

        nums.push_back(root->val);
        solve(root->left, nums);
        solve(root->right, nums);

    }

    int check(vector<int> &nums){
        int min = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                int sum = abs(nums[i] - nums[j]);
                if(sum < min){
                    min = sum;
                }
            }
        }

        return min;
    
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> nums;
        solve(root, nums);
        int ans = check(nums);
        return ans;
    }
};