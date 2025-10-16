class Solution {
public:
    string interpret(string command) {
        string result;
        string temp = "";
        for(int i = 0; i < command.length(); i++){
            if(command[i] == 'G'){
                temp.push_back(command[i]);
            }

            else if(command[i] == '(' && command[i + 1] == ')'){
                temp.push_back('o');
            }
            
            else if(command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l'
            && command[i + 3] == ')'){
                temp.push_back('a');
                temp.push_back('l');
            }
            else{
                continue;
            }
        }

        return temp;
    }
};