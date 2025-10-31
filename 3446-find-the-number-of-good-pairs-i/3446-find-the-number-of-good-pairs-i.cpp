class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();

        int count = 0;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if((i >= 0 && i <= n - 1)  && (j >= 0 && j <= m - 1)){
                    if(nums1[i] % (nums2[j] * k) == 0){
                        count++;
                    }
                }
            }
        }

        return count;
    }
};