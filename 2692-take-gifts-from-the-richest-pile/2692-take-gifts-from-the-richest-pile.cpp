class Solution {
public:
    int findMax(vector<int> &nums){
        int max = INT_MIN;
        int minIndex = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
                minIndex = i;
            }
        }

        return minIndex;
    }

    long long findSum(vector<int> &nums){
        long long sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        return sum;
    }
    long long pickGifts(vector<int>& gifts, int k) {
        for(int i = 1; i <= k; i++){
            int index = findMax(gifts);
            gifts[index] = sqrt(gifts[index]);
        }

        return findSum(gifts);
    }
};