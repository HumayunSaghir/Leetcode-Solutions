class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        if(hours.size() == 0){
            return 0;
        }
        int count = 0;
        for(int i = 0; i < hours.size(); i++){
            if(hours[i] >= target){
                count++;
            }
        }
        return count;
    }
};