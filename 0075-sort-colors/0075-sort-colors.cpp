class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZeros = 0;
        int countOnes = 0;
        int countTwos = 0;
        
        for(auto x : nums){
            if(x == 0){
                countZeros++;
            }
            else if(x == 1){
                countOnes++;
            }
            else if(x == 2){
                countTwos++;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(countZeros != 0){
                nums[i] = 0;
                countZeros--;
            }
            else if(countOnes != 0){
                nums[i] = 1;
                countOnes--;
            }
            else if(countTwos != 0){
                nums[i] = 2;
                countTwos--;
            }
            
        }

        return;

        return;
    }
};