class Solution {
public:
    // Binary search
    int findLeft(vector<int> &nums, int key){
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        int mid = start + (end - start) / 2;
        
        while(start <= end){
            if(nums[mid] == key){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] > key){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        return ans;
    }

    int findRight(vector<int> &nums, int key){
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        int mid = start + (end - start) / 2;
        
        while(start <= end){
            if(nums[mid] == key){
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] > key){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(findLeft(nums, target));
        result.push_back(findRight(nums, target));
        return result;
    }
};