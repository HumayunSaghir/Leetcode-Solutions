class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> mapp;

        char ans;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            mapp[ch]++;
            if(mapp[ch] == 2){
                return s[i];
            }
        }

        for(auto x:mapp){
            if(x.second == 2){
                ans = x.first;
                break;
            }
        }

        return ans;
    }
};