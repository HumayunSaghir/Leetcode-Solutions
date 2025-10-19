class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";

        int x = 0;
        int y = 0;

        while(x < word1.length() && y < word2.length()){
            ans.push_back(word1[x++]);
            ans.push_back(word2[y++]);
        }

        while(x < word1.length()){
            ans.push_back(word1[x++]);
        }

        while(y < word2.length()){
            ans.push_back(word2[y++]);
        }

        return ans;

    }
};