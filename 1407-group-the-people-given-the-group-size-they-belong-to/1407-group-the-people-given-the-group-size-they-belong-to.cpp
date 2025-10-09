class Solution {
public:
    bool check(vector<int> nums, int key){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key){
                return true;
            }
        }
        return false;
    }

    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        if(groupSizes.size() == 1){
            vector<int> temp;
            temp.push_back(0);
            result.push_back(temp);
            return result;
        }
        vector<int> covered;
        for(int i = 0; i < groupSizes.size(); i++){
            if(check(covered, i) == true){
                continue;
            }
            vector<int> temp;
            int groupSize = groupSizes[i];
            int count = 0;
            for(int j = 0; j < groupSizes.size(); j++){
                if((groupSizes[j] == groupSize) && (count < groupSize)){
                    temp.push_back(j);
                    groupSizes[j] = -1;
                    count++;
                    covered.push_back(j);
                }
            }
            result.push_back(temp);
        }
        return result;    
    }
};