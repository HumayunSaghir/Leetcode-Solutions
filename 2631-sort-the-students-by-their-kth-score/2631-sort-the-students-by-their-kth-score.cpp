class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i = 0; i < score.size() - 1; i++){
            int currRow = i;
            int value1 = score[i][k];
            for(int j = i + 1; j < score.size(); j++){
                int value2 = score[j][k];
                if(value2 > value1){
                    currRow = j;
                    value1 = score[j][k];
                }
            }
            vector<int> temp = score[i];
            score[i] = score[currRow];
            score[currRow] = temp;
        }
        return score;
    }
};