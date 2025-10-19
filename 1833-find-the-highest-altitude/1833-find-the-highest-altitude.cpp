class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int num = 0;
        int max = INT_MIN;
        for(int i = 0; i < gain.size(); i++){
            num = num + gain[i];
            if(num > max){
                max = num;
            }
        }

        if(max < 0){
            return 0;
        }
        return max;
    }
};