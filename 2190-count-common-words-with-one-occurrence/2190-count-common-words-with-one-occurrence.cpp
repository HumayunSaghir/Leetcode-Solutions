class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mapp1;
        for(int i = 0; i < words1.size(); i++){
            mapp1[words1[i]]++;
        }
        
        unordered_map<string,int> mapp;
        for(int i = 0; i < words1.size(); i++){
            mapp[words1[i]]++;
        }

        for(int i = 0; i < words2.size(); i++){
            mapp[words2[i]]++;
        }

        int count = 0;
        for(auto x:mapp){
            if(x.second == 2 && mapp1[x.first] == 1){
                count++;
            }
        }
        
        return count;
    }
};