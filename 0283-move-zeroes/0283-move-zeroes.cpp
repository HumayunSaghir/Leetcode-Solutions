class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }
        }

        if(count == 0 ){
            return;
        }
        else{
            for(int i = 0; i < count; i++){
                for(int j = 0; j < nums.size() - 1; j++){
                    if(nums[j] == 0 && nums[j + 1] != 0){
                        int temp = nums[j];
                        nums[j] = nums[j + 1];
                        nums[j + 1] = temp;
                    }
                }
            }
        }
    }
};