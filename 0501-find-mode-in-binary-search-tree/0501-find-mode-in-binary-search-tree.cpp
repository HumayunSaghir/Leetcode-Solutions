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
    void solve(TreeNode *root, unordered_map<int, int> &mp){
        if(root == NULL){
            return;
        }

        mp[root->val]++;

        solve(root->left, mp);
        solve(root->right, mp);

    }

    vector<int> check(unordered_map<int, int> &mp, vector<int> &result){
        int max = INT_MIN;
        for(auto x:mp){
            if(x.second > max){
                max = x.second;
            }
        }

        for(auto x:mp){
            if(x.second == max){
                result.push_back(x.first);
            }
        }

        return result;
    
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mp;
        solve(root, mp);
        vector<int> result;
        check(mp, result);
        return result;
    }
};