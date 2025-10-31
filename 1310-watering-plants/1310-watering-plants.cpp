class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 1;
        int start = 0;
        int given = 0;
        int total = capacity;
        while(true){
            capacity = capacity - plants[start];
            given++;

            if(given == plants.size()){
                break;
            }

            if(capacity >= plants[start + 1]){
                start++;
                steps++;
            }
            else{
                int s = 0;
                int counter = start;
                while(counter != -1){
                    counter--;
                    s++;
                }
                int ans = (s + s) + 1;
                steps += ans;
                start++;
                capacity = total;
            }
        }  
        return steps;
    }
};