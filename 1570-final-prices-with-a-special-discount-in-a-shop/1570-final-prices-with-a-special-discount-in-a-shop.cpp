class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st1;
        for(int i = 0; i < prices.size(); i++){
            int num = prices[i];

            if(st1.empty() == true){
                st1.push(num);
            }
            else if(num <= st1.top()){
                int result = st1.top() - num;
                st1.pop();
                st1.push(result);
                st1.push(num);
            }
            else{
                bool found = false;
                for(int j = i + 1; j < prices.size(); j++){
                    if(prices[j] <= st1.top()){
                        int result = st1.top() - prices[j];
                        st1.pop();
                        st1.push(result);
                        st1.push(num);
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    st1.push(num);
                }
            }
        }
        vector<int> result;
        while(!st1.empty()){
            result.push_back(st1.top());
            st1.pop();
        }

        int start = 0;
        int end = result.size() - 1;
        while(start <= end){
            int temp = result[start];
            result[start] = result[end];
            result[end] = temp;
            start++;
            end--;
        }
        return result;
    }
};