class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }
        
        int min = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }

        int ans = -1;
        for(int i = 1; i <= max; i++){
            if(max % i == 0 && min % i == 0){
                ans = i;
            }
        }
        return ans;
    }
};