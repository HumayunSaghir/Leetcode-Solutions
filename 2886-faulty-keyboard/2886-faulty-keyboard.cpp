class Solution {
public:
    void reverse(string &str){
        int start = 0;
        int end = str.length() - 1;
        while(start <= end){
            swap(str[start], str[end]);
            start++;
            end--;
        }

        return;
    }

    string finalString(string s) {
        string ans = "";

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'i'){
                reverse(ans);
            }
            else{
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};