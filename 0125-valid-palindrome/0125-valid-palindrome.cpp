class Solution {
public:
    bool check(string str){
        int start = 0;
        int end = str.length() - 1;
        while(start < end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                str.push_back(tolower(s[i]));
            }
        }

        bool ans = check(str);

        return ans;
    }
};