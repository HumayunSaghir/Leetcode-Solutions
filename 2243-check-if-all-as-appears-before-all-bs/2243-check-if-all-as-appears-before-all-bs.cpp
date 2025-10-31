class Solution {
public:
    bool checkString(string s) {
        for(int i = 0; i < s.length() - 1; i++){
            int value1 = s[i];
            int value2 = s[i + 1];
            if(value1 > value2){
                return false;
            }
        }

        return true;
    }
};