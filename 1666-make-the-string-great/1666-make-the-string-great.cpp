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

    string makeGood(string s) {
        stack<char> st1;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];

            if(st1.empty()){
                st1.push(ch);
            }
            else if(isupper(ch)){
                int value1 = ch;
                int value2 = st1.top();
                if(value2 - value1 == 32){
                    st1.pop();
                }
                else{
                    st1.push(ch);
                }
            }
            else if(islower(ch)){
                int value1 = ch;
                int value2 = st1.top();
                if(value1 - value2 == 32){
                    st1.pop();
                }
                else{
                    st1.push(ch);
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
};