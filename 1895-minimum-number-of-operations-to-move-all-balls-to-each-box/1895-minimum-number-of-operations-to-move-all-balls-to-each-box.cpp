class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;

        for(int i = 0; i < boxes.size(); i++){
            int sum = 0;
            for(int j = boxes.size() - 1; j >= 0; j--){
                // Condition 1
                if(i == j){
                    sum += 0;
                }

                // Condition 2
                else if(boxes[j] == '0'){
                    sum += 0;
                }

                else{
                    int value = abs(j - i);
                    sum += value;
                }

            }

            result.push_back(sum);
        }

        return result;
    }
};