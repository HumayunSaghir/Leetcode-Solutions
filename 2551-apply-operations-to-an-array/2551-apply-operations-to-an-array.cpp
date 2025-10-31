class Solution {
public:
    int countZeros(vector<int> &nums){
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }
        }

        return count;
    }

    vector<int> applyOperations(vector<int>& nums) {
        int limit = nums.size() - 1;
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }

        int totalZeros = countZeros(nums);

        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == 0 && nums[j] != 0){
                    swap(nums[i], nums[j]);
                }
            }
        }
        
        return nums;
    }
};