class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mapp;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            mapp[nums[i]]++;
        }

        for(auto x:mapp){
            if(x.second == 2){
                result.push_back(x.first);
            }
        }

        return result;
    }
};