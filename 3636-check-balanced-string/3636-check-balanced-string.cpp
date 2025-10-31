class Solution {
public:
    bool isBalanced(string num) {
        int oddSum = 0;
        int evenSum = 0;
        
        for(int i = 0; i < num.length(); i++){
            
            int value = num[i] - '0';

            if(i % 2 == 0){
                evenSum += value;
            }
            else{
                oddSum += value;
            }
        }

        return (oddSum == evenSum);
    }
};