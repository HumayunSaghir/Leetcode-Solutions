class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        int limit = nums.size() / 2;

        for(auto x : mp){
            if(x.second > limit){
                return x.first;
            }
        }

        return -1;
    }
};