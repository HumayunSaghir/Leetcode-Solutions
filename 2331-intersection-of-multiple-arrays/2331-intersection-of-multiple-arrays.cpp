class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> result;
        vector<vector<int>> pairs;
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[i].size(); j++){
                if(nums[i][j] > max){
                    max = nums[i][j];
                }
            }
        }

        for(int i = 0; i <= max; i++){
            vector<int> temp;
            int count = 0;
            for(int a = 0; a < nums.size(); a++){
                for(int b = 0; b < nums[a].size(); b++){
                    if(nums[a][b] == i){
                        count++;
                    }
                }
            }
            temp.push_back(i);
            temp.push_back(count);
            pairs.push_back(temp);
        }

        for(int i = 0; i < pairs.size(); i++){
            for(int j = 0; j < pairs[i].size(); j++){
                if(pairs[i][j] == nums.size() && j ==pairs[i].size() - 1){
                    result.push_back(pairs[i][j - 1]);
                    break;
                }
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};