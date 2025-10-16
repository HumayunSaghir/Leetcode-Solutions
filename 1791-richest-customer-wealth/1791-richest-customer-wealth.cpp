class Solution {
public:
    int findMax(vector<int> nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        return maxi;
    }

    int maximumWealth(vector<vector<int>>& accounts) {
       vector<int> totalWealth;
       for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
            }
            totalWealth.push_back(sum);
       } 

       int result = findMax(totalWealth);
       return result;
    }
};