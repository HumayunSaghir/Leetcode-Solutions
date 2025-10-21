class Solution {
public:
    void solve(vector<int> &nums, int &count, int &index){
        // Base Case!
        if(count == 0){
            return;
        }

        // Processing!
        nums.push_back(nums[index]);
        index = index + 1;
        count = count - 1;


        // Recursive Call!
        solve(nums, count, index);
    }

    vector<int> getConcatenation(vector<int>& nums) {
        int count = nums.size();
        int index = 0;
        solve(nums, count, index);
        return nums;
    }
};