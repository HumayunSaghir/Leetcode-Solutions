class Solution {
public:
    int findLucky(vector<int>& arr) {
        // sort(arr.begin(), arr.end());

        int max = -1;

        for(int i = 0; i < arr.size(); i++){
            int count = 0;
            for(int j = 0; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            if(count == arr[i]){
                if(count > max){
                    max = count;
                }
            }
        }

        return max;
    }
};