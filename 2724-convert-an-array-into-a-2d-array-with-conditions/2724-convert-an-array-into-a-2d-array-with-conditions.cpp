class Solution {
public:
    bool  check(vector<int> nums, int key){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key){
                return true;
            }
        }
        return false;
    }

    bool  check(vector<int> nums){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != -1){
                return true;
            }
        }
        return false;
    }

    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> indexesCovered;
        while(check(nums)){
            vector<int> temp;
            for(int i = 0; i < nums.size(); i++){
                if(check(indexesCovered, i) == false && check(temp, nums[i]) == false){
                    temp.push_back(nums[i]);
                    nums[i] = -1;
                    indexesCovered.push_back(i);
            }
        }
        result.push_back(temp);
        }
        return result;  
    }
};