class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++){
            char firstDigit = details[i][11];
            char secondDigit = details[i][12];
            if(firstDigit >= 55){
                count++;
                continue;
            }
            else if(firstDigit == 54){
                if(secondDigit >= 49){
                    count++;
                }
            }
        }
        return count;
    }
};