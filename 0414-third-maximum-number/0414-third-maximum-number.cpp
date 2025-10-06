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

    int thirdMax(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(check(result, nums[i]) == false){
                result.push_back(nums[i]);
            }
        }

        sort(result.begin(), result.end());

        if(result.size() < 3){
            return result[result.size() - 1];
        }

        return result[result.size() - 3];

    }
};