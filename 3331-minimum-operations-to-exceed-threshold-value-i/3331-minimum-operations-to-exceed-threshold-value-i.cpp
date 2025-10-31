class Solution {
public:
    bool check(vector<int> &nums, int key){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < key){
                return false;
            }
        }

        return true;
    }

    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < k){
                count = count + 1;
                nums[i] = k;
                if(check(nums, k) == true){
                    break;
                }
            }
        }

        return count;
    }
};