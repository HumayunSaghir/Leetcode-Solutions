class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int length = nums.size();
        vector<int> result(length);
        for(int i = 0; i < nums.size(); i++){
            int index = nums[i];
            result[i] = nums[index];
        }
        return result;
    }
};