class Solution {
public:
    bool check(vector<int> nums, int x){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x){
                return true;
            }
        }
        return false;
    }
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int count = 0;
        for(int i = 0; i < nums1.size(); i++){
            if(check(nums2, nums1[i])){
                count++;
            }
        }
        result.push_back(count);
        count = 0;
        for(int i = 0; i < nums2.size(); i++){
            if(check(nums1, nums2[i])){
                count++;
            }
        }
        result.push_back(count);
        return result;
    }
};