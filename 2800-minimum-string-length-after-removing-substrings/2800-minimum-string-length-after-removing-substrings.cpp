class Solution {
public:
    int minLength(string s) {
        stack<char> st1;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(st1.empty() == false){
                
                if(ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D'){
                    if(st1.top() == 'A' && ch == 'B'){
                        st1.pop();
                    } 
                    else if(st1.top() == 'C' && ch == 'D'){
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
            else{
                st1.push(ch);
            }
        }

        return st1.size();

    }
};