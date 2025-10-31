class Solution {
public:
    int findMinValueIndex(vector<int> &nums){
        int minIndex = -1;
        int min = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min){
                min = nums[i];
                minIndex = i;
            }
        }

        return minIndex;
    }
    
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 1; i <= k; i++){
            // int index = findMinValueIndex(nums);
            // nums[index] = nums[index] * multiplier;
            nums[findMinValueIndex(nums)] = nums[findMinValueIndex(nums)] * multiplier;
        }

        return nums;
    }
};