class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i = 0; i < jewels.length(); i++){
            int value1 = jewels[i];
            for(int j = 0; j < stones.length(); j++){
                int value2 = stones[j];

                if(value1 == value2){
                    count++;
                }
            }
        }

        return count;
    }
};