class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> allOcc;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x){
                allOcc.push_back(i);
            }
        }

        vector<int> result;
        for(int i = 0; i < queries.size(); i++){
            if(queries[i] > allOcc.size()){
                result.push_back(-1);
            }
            else{
                int index = queries[i] - 1;
                result.push_back(allOcc[index]);
            }
        }
        return result;
    }
};