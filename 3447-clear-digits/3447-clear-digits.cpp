class Solution {
public:
    void reverseString(string &s){
        int start = 0;
        int end = s.length() - 1;

        while(start <= end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }

    }

    string solve(string s){
        stack<char> st1;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4'
            || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9'){
                if(!st1.empty()){
                    st1.pop();
                }
            }
            else{
                st1.push(ch);
            }
        }

        string ans = "";
        while(!st1.empty()){
            char ch = st1.top();
            ans.push_back(ch);
            st1.pop();
        }

        reverseString(ans);

        return ans;

    }

    string clearDigits(string s) {
        if(s.length() == 1){
            return s;
        }

        string ans = solve(s);
        return ans;
    }
};