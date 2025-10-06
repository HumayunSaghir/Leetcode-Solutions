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

    int findSecondMin(vector<int> &nums){
        sort(nums.begin(), nums.end());
        int min = INT_MIN;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > min){
                min = nums[i];
                count++;
                if(count == 2){
                    return min;
                }
            }
        }

        return -1;
    }

    int findSecondMinimumValue(TreeNode* root) {
        vector<int> nums;
        solve(root, nums);
        int ans = findSecondMin(nums);
        return ans;
    }
};