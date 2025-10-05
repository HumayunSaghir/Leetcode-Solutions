class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = -1;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] != ' '){
                index = i;
                break;
            }
        }

        int count = 0;
        for(int i = index; i >= 0; i--){
            if(s[i] != ' '){
                count++;
            }
            else{
                break;
            }
        }

        return count;
    }
};