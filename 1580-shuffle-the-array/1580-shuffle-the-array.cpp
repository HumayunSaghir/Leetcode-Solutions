class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int y = n;
        
        for(int i = 0; (i < y && y < nums.size() ); i++){
            result.push_back(nums[i]);
            result.push_back(nums[y]);
            y++;
        }

        return result;
    }
};