class Solution {
public:
    int findMax(vector<int> &nums){
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }

        return max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = findMax(candies);

        vector<bool> result;

        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);

            }
        }

        return result;
    }
};