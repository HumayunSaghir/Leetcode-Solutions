class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> positives;
        vector<int> negatives;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                positives.push_back(nums[i]);
            }
            else{
                negatives.push_back(nums[i]);
            }
        }

        sort(negatives.begin(), negatives.end());

        for(int i = 0; i < negatives.size(); i++){
            for(int j = 0; j < positives.size(); j++){
                if(negatives[i] == (-positives[j])){
                    return positives[j];
                }
            }
        }
        return -1;
    }
};