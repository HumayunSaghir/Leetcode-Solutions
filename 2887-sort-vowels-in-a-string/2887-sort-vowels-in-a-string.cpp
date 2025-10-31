class Solution {
public:
    bool checkVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }

        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }

        return false;

    }

    string sortVowels(string s) {
        vector<int> result; //o(n)
        string str = ""; // o(n)
        for(int i = 0; i < s.length(); i++){ // o(n)
            
            if(checkVowel(s[i]) == true){
                int value = s[i];
                result.push_back(value);
            }
            else{
                continue;
            }

        }

        sort(result.begin(), result.end()); // n log n.

        int index = 0;
        for(int i = 0; i < s.length(); i++){ // o(n)
            if(checkVowel(s[i]) == true){
                char ch = result[index];
                str.push_back(ch);
                index++;
            }
            else{
                str.push_back(s[i]);
            }
        }

        return str;

    }
};