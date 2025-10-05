class Solution {
public:
    vector<int> nextSmallerElement(vector<int> nums, int n){
        stack<int> st1;
        st1.push(-1);
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--){
            int curr = nums[i];
            while(st1.top() != -1 && nums[st1.top()] >= curr){
                st1.pop();
            }
            ans[i] = st1.top();
            st1.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> nums, int n){
        stack<int> st1;
        st1.push(-1);
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            int curr = nums[i];
            while(st1.top() != -1 && nums[st1.top()] >= curr){
                st1.pop();
            }
            ans[i] = st1.top();
            st1.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        int area = INT_MIN;
        for(int i = 0; i < n; i++){
            int length = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int width = next[i] - prev[i] - 1;
            int newArea = length * width;
            area = max(area, newArea);
        }
        return area;
    }
};