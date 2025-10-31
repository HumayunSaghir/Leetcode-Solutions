class Solution {
public:
    int findSum(vector<int> &nums){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        return sum;
    }
    int differenceOfSums(int n, int m) {
        vector<int> nums1;
        for(int i = 1; i <= n; i++){
            if(i % m != 0){
                nums1.push_back(i);
            }
        }

        vector<int> nums2;
        for(int i = 1; i <= n; i++){
            if(i % m == 0){
                nums2.push_back(i);
            }
        }

        int value1 = findSum(nums1);
        int value2 = findSum(nums2);

        return (value1 - value2);


    }
};