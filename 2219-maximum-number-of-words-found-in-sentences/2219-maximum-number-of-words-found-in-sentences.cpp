class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> result;
        for(int i = 0; i < sentences.size(); i++){
            int count = 1;
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            result.push_back(count);
        }
        int max = -1;
        for(int i = 0; i < result.size(); i++){
            if(result[i] > max){
                max = result[i];
            }
        }        
        return max;
    }
};