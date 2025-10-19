class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        if(coins < costs[0]){
            return 0;
        }
        int count = 0;
        for(int i = 0; i < costs.size(); i++){
            if(coins >= costs[i]){
                coins = coins - costs[i];
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};