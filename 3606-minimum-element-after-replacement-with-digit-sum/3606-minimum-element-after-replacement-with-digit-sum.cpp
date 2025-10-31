class Solution {
public:
    int findDigitSum(int num){
        int sum = 0;

        while(num != 0){
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }

        return sum;
    }

    int findSum(vector<int> nums){
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < ans){
                ans = nums[i];
            }
        }

        return ans;
    }

    int minElement(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = findDigitSum(nums[i]);
        }

        return findSum(nums);
    }
};