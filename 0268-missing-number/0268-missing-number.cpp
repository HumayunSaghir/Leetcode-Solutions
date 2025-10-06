class Solution {
public:
    bool check(vector<int> nums, int key){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key){
                return true;
            }
        }
        return false;
    }
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 0){
            return -1;
        }
        int length = nums.size();
        int ans = -1;
        for(int i = 0; i <= length; i++){
            if((check(nums, i)) == false){
                ans = i;
                break;
            }
        }
        return ans;    
    }
};