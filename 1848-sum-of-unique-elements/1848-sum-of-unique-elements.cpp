class Solution {
public:
    bool check(vector<int> &arr, int key){
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == key){
                return true;
            }
        }

        return false;
    }

    int solve(vector<int> &nums1){
        int sum = 0;
        for(int i = 0; i < nums1.size(); i++){
            sum += nums1[i];
        }

        return sum;
    }

    int sumOfUnique(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }

            if(count == 1){
                result.push_back(nums[i]);
            }
        }

        int ans = solve(result);
        return ans;
    }
};