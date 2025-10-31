class Solution {
public:
    bool check(string str){
        int start = 0;
        int end = str.length() - 1;
        while(start <= end){
            if(str[start] != str[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans = "";

        for(int i = 0; i < words.size(); i++){
            if(check(words[i]) == true){
                return words[i];
            }
        }

        return ans;
    }
};