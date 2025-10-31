class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    nums[i] = -1;
                    nums[j] = -1;
                }
            }
        }

        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == -1){
                count++;
            }
        }

        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != -1){
                temp.push_back(nums[i]);
            }
        }
        nums = temp;
        vector<int> result;
        result.push_back(count / 2);
        result.push_back(nums.size());
        return result;
    }
};