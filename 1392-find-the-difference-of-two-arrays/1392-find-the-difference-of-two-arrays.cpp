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
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        vector<int> arr1;
        for(int i = 0; i < nums1.size(); i++){
            if(check(nums2, nums1[i])){
                continue;
            }
            else{
                if(check(arr1, nums1[i]) == false){
                    arr1.push_back(nums1[i]);
                }
            }
        }

        vector<int> arr2;
        for(int i = 0; i < nums2.size(); i++){
            if(check(nums1, nums2[i])){
                continue;
            }
            else{
                if(check(arr2, nums2[i]) == false){
                    arr2.push_back(nums2[i]);
                }
            }
        }
        result.push_back(arr1);
        result.push_back(arr2);
        return result;    
    }
};