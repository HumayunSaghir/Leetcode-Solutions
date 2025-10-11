class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;

        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                for(int k = 0; k < arr.size(); k++){
                    if((0 <= i) && (i < j) && (j < k) && (k < arr.size())){
                        if((abs(arr[i] - arr[j]) <= a) && (abs(arr[j] - arr[k]) <= b) && 
                        (abs(arr[i] - arr[k]) <= c)){
                            count = count + 1;
                        }

                    }
                }
            }
        }

        return count;
    }
};