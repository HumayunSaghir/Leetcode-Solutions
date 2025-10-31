class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mapp;

        for(int i = 0; i < nums.size(); i++){
            mapp[nums[i]]++;
        }

        int max = INT_MIN;
        for(auto x:mapp){
            if(x.second > max){
                max = x.second;
            }
        }

        int count = 0;

        for(auto x:mapp){
            if(x.second == max){
                count += x.second;
            }
        }

        return count;
    }
};