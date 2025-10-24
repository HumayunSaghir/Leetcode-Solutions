class Solution {
public:
    bool check(vector<int> nums){
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] != nums[j]){
                    return false;
                }
            }
        }

        return true;
    }
    bool areOccurrencesEqual(string s) {
        sort(s.begin(), s.end());
        vector<int> result;
        for(int i = 0; i < s.length(); i++){
            int count = 0;
            for(int j = 0; j < s.length(); j++){
                if(s[i] == s[j]){
                    count++;
                }
            }
            result.push_back(count);
        }

        bool ans = check(result);
        return ans;
    }
};