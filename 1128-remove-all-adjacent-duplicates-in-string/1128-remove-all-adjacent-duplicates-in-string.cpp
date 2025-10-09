class Solution {
public:
    void reverseString(string &str){
        int start = 0;
        int end = str.length() - 1;

        while(start <= end){
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

    }

    string removeDuplicates(string s) {
        if(s.length() == 1){
            return s;
        }

        stack<char> st1;
        for(int i = 0; i < s.length(); i++){
            if(st1.empty() == false && st1.top() == s[i]){
                st1.pop();
            }
            else{
                st1.push(s[i]);
            }
        }

        string ans = "";
        while(st1.empty() != true){
            ans.push_back(st1.top());
            st1.pop();
        }
        reverseString(ans);
        return ans;
    }

};