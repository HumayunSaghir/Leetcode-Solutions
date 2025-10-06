class Solution {
public:
    bool check(int num){
        int orignalNum = num;
        while(num != 0){
            int digit = num % 10;

            if(digit == 0){
                return false;
            }
            else if(orignalNum % digit != 0){
                return false;
            }

            num = num / 10;
        }

        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        for(int i = left; i <= right; i++){
            if(check(i)){
                result.push_back(i);
            }
        }

        return result;
    }
};