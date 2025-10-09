class Solution {
public:
    string solve1(string s){
        stack<int> st1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#'){
                st1.push(s[i]);
            }
            else{
                if(!st1.empty()){
                    st1.pop();
                }
            }
        }

        string str1 = "";
        while(!st1.empty()){
            str1.push_back(st1.top());
            st1.pop();
        }

        return str1;

    }

    string solve2(string t){
        stack<int> st1;
        for(int i = 0; i < t.length(); i++){
            if(t[i] != '#'){
                st1.push(t[i]);
            }
            else{
                if(!st1.empty()){
                    st1.pop();
                }
            }
        }

        string str2 = "";
        while(!st1.empty()){
            str2.push_back(st1.top());
            st1.pop();
        }

        return str2;
        
    }

    bool backspaceCompare(string s, string t) {
        if(s.length() == 1 && t.length() == 1){
            return true;
        }

        string ans1 = solve1(s);
        string ans2 = solve2(t);

        if(ans1 == ans2){
            return true;
        }
        return false;
    }
};