class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            string str1 = nums[i];
            for(int j = 0; j < nums.size(); j++){
                string str2 = nums[j];
                if((i != j) && (str1+str2 == target)){
                    count++;
                }
            }
        }
        return count;
    }
};