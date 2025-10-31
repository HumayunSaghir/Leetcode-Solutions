class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives;
        vector<int> negatives;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                positives.push_back(nums[i]);
            }
            if(nums[i] < 0){
                negatives.push_back(nums[i]);
            }
        }
        vector<int> result;
        for(int i = 0; i < positives.size(); i++){
            result.push_back(positives[i]);
            result.push_back(negatives[i]);
        }
        nums = result;
        return nums;
    }
};