class Solution {
public:
    int findLeftSum(vector<int> &nums, int index){
        int sum = 0;
        for(int i = 0; i < index; i++){
            sum += nums[i];
        }

        return sum;
    }

    int findRightSum(vector<int> &nums, int index){
        int sum = 0;
        for(int i = nums.size() - 1; i > index; i--){
            sum += nums[i];
        }

        return sum;
    }

    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            int leftSum = findLeftSum(nums, i);
            int rightSum = findRightSum(nums, i);
            int val = abs(leftSum - rightSum);
            result.push_back(val);
        }


        return result;
    }
};