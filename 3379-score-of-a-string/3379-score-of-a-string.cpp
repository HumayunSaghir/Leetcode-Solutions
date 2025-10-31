class Solution {
public:
    int findSum(vector<int> &nums){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        return sum;
    }

    int scoreOfString(string s) {
        vector<int> nums;
        for(int i = 0; i < s.length() - 1; i++){
            char ch1 = s[i];
            int value1 = ch1;
            char ch2 = s[i + 1];
            int value2 = ch2;
            int result = value1 - value2;
            if(result < 0){
                result = -(result);
            }

            nums.push_back(result);
        }

        int ans = findSum(nums);

        return ans;

    }
};