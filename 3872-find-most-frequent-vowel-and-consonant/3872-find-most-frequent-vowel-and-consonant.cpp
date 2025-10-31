class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }

        return false;

    }

    int maxFreqSum(string s) {
        map<char, int> mp;

        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }

        int vMax = 0;
        int cMax = 0;

        for(auto x : mp){
            if(isVowel(x.first)){ // vowel!
                
                if(x.second > vMax){
                    vMax = x.second;
                }

            }
            else{ // consonants!
                if(x.second > cMax){
                    cMax = x.second;
                }
            }
        }

        int ans = vMax + cMax;
        return ans;
    }
};