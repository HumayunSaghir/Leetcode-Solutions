class Solution {
public:
    int calVowel(string s, int start, int end){
        int i = start;
        int count = 0;
        while(i <= end){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
            }
            else if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                count++;
            }
            
            i++;
        }

        return count;
    }

    bool halvesAreAlike(string s) {
        int sizee = s.length() - 1;
        int mid = sizee / 2;
        int count1 = calVowel(s, 0, mid);
        int count2 = calVowel(s, mid + 1, sizee);
        
        return count1 == count2;
    }
};