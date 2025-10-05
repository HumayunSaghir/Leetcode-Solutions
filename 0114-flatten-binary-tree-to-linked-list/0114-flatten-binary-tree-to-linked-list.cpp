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
    void traverse(TreeNode *root, vector<int> &nums){
        if(root == NULL){
            return;
        }

        nums.push_back(root->val);
        traverse(root->left, nums);
        traverse(root->right, nums);
    }

    TreeNode* flatTree(TreeNode *root, vector<int> &nums){
        root->left = NULL;
        root->val = nums[0];
        int index = 1;
        TreeNode *temp = root;
        
        for(int i = 1; i < nums.size(); i++){
            TreeNode *newNode = new TreeNode(nums[index++]);
            temp->right = newNode;
            temp = newNode;
        }

        return root;
    }

    void flatten(TreeNode* root) {
        if((root == NULL) || (root->left == NULL && root->right == NULL)){
            return;
        }
        vector<int> nums;
        traverse(root, nums);
        root = flatTree(root, nums);
    }
};