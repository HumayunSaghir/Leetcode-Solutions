class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        int countL = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                countA++;
            }

            if(s[i] == 'L'){
                countL++;
                if(countL == 3){
                    return false;
                }
            }
            else{
                countL = 0;
            }
        }

        if(countA < 2){
            return true;
        }

        return false;
    }
};