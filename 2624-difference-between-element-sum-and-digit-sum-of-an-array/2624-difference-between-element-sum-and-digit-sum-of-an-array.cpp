class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < nums.size(); i++){
            sum1 += nums[i];
            int num = nums[i];
            while(true){
                if(num == 0){
                    break;
                }
                else{
                    int digit = num % 10;
                    num /= 10;
                    sum2 += digit;
                }
            }
        }
        return sum1 - sum2;
    }
};