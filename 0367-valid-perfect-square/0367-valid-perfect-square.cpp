class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        long long int given = num;
        long long int limit = num / 2;

        for(long long int i = 0; i <= limit; i++){
            long long int x = i * i;
            
            if(x == given){
                return true;
            }
        }

        return false;
    }
};