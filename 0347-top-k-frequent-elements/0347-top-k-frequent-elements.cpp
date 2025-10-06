class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<int> result;


        for(int i = 1; i <= k; i++){
        
            int fCount = 0;
            int value = 0;
            
            for(auto x : mp){
                if(x.second > fCount){
                    fCount = x.second;
                    value = x.first;
                }
            }

            result.push_back(value);
            mp[value] = 0;

        }

        return result;
    }
};