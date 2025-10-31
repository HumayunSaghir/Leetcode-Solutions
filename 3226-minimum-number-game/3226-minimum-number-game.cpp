class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> result;

        while(!nums.empty()){
            int min1 = INT_MAX;
            int index1 = -1;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] < min1){
                    min1 = nums[i];
                    index1 = i;
                }
            }

            int value1 = nums[index1];
            nums.erase(nums.begin() + index1);

            int min2 = INT_MAX;
            int index2 = -1;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] < min2){
                    min2= nums[i];
                    index2 = i;
                }
            }

            int value2 = nums[index2];
            nums.erase(nums.begin() + index2);

            result.push_back(value2);
            result.push_back(value1);
        }

        return result;
    }
};