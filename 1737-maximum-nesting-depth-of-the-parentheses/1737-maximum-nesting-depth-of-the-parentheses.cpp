class Solution {
public:
    void count(stack<char> &st1, int &open, int &close){
        // Base case.
        if(st1.empty()){
            return;
        }

        char ch = st1.top();
        st1.pop();
        if(ch == '('){
            open = open + 1;
        }
        else if(ch == ')'){
            close = close + 1;
        }

        count(st1, open, close);

        st1.push(ch);
    }
    int maxDepth(string s) {
        stack<char> st1;
        bool bracketFound = false;
        int maxi = 0;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];

            if(st1.empty()){
                st1.push(ch);
            }
            else{
                st1.push(ch);
                int open = 0;
                int close = 0;
                count(st1, open, close);
                if(open == 1){
                    bracketFound = true;
                }
                int result = open - close;
                maxi = max(maxi, result);
            }
        }

        if(maxi == 0 && bracketFound == true){
            return 1;
        }

        return maxi;
    }
};