class Solution {
public:
    bool inc(vector<int> nums){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i + 1]){
                return false;
            }
        }
        return true;
    }

    bool dec(vector<int> nums){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i + 1]){
                return false;
            }
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        if((inc(nums)) || (dec(nums))){
            return true;
        }
        return false;    
    }
};