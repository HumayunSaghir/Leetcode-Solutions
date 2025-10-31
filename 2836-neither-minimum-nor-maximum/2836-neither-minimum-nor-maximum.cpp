class Solution {
public:
    int findMin(vector<int> &nums){
        int result = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < result){
                result = nums[i];
            }
        }

        return result;
    }

    int findMax(vector<int> &nums){
        int result = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > result){
                result = nums[i];
            }
        }

        return result;
    }

    int findNonMinOrMax(vector<int>& nums) {
        int x = findMin(nums);
        int y = findMax(nums);

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != x && nums[i] != y){
                return nums[i];
            }
        }

        return -1;
    }
};