class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Step 1: Make min heap.
        priority_queue<int , vector<int>, greater<int>> pq;

        // Step 2: Insert K elements to heap.
        for(int i = 0; i < k; i++){
            pq.push(nums[i]);
        }

        // Step 3: Insert every element that is greater than top and pop.
        for(int i = k; i < nums.size(); i++){
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }

        // Step 4: Return ans.
        return pq.top();
    }
};