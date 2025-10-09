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
    void calcSum(TreeNode *root, int &sum, int &orignal){
        if(root == NULL){
            return;
        }

        if(root->val > orignal && root-> val != orignal){
            sum = sum + root->val;
        }

        calcSum(root->left, sum, orignal);
        calcSum(root->right, sum, orignal);
    }

    void solve(TreeNode *parent, TreeNode *root, vector<int> &nums){
        if(root == NULL){
            return;
        }

        int sum = 0;
        sum = root->val;
        calcSum(parent, sum, root->val);
        nums.push_back(sum);

        solve(parent, root->left, nums);
        solve(parent, root->right, nums);
        
    }

    void setNodes(TreeNode *root, vector<int> &nums, int &index){
        if(root == NULL){
            return;
        }

        root->val = nums[index++];
        setNodes(root->left, nums, index);
        setNodes(root->right, nums, index);
    }

    TreeNode* bstToGst(TreeNode* root) {
        vector<int> nums;
        solve(root, root, nums);
        int index = 0;
        setNodes(root, nums, index);
        return root;
    }
};