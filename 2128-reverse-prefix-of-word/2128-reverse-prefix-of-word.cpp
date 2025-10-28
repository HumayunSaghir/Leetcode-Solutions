class Solution {
public:
    bool check(string word, char ch){
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                return true;
            }
        }
        return false;
    }

    string reversePrefix(string word, char ch) {
        if(word.length() == 1){
            return word;
        }
        
        if(check(word, ch) == false){
            return word;
        }

        stack<char> st1;
        string str1 = "";
        int index = 0;
        bool exit = false;
        while(index < word.length()){
            if(word[index] != ch){
                st1.push(word[index]);
                index++;
            }
            else{
                st1.push(word[index]);
                index++;
                while(index < word.length()){
                    str1.push_back(word[index]);
                    index++;
                }
                exit = true;
            }

            if(exit){
                break;
            }
        }

        string str2 = "";
        while(st1.empty() != true){
            str2.push_back(st1.top());
            st1.pop();
        }

        str2 += str1;
        return str2;

    }   
};