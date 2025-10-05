class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        
        map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        nums = {};

        int k = 0;
        for(auto X : map){
            nums.push_back(X.first);
            k++;
        }

        return k;
    }
};