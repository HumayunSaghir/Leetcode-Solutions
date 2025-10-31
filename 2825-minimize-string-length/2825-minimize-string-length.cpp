class Solution {
public:
    int minimizedStringLength(string s) {
        sort(s.begin(), s.end());
        stack<char> st1;
        int count = 1;

        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(st1.empty()){
                st1.push(ch);
            }
            else{
                if(ch == st1.top()){
                    st1.push(ch);
                }
                else{
                    st1.push(ch);
                    count++;
                }
            }
        }

        return count;
    }
};