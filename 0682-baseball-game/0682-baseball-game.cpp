class Solution {
public:
    int calPoints(vector<string>& operations) {
        // Creating s stack.
        stack<int> st1;

        // Iterating operations array.
        for(int i = 0; i < operations.size(); i++){

            string temp = operations[i];

            if(temp == "C"){
                st1.pop();
            }
            else if(temp == "D"){
                int num = st1.top();
                int result = num * 2;
                st1.push(result);
            }
            else if(temp == "+"){
                int num1 = st1.top();
                st1.pop();
                int num2 = st1.top();
                st1.pop();
                int result = num1 + num2;
                st1.push(num2);
                st1.push(num1);
                st1.push(result);
            }
            else{
                int num = stoll(temp);
                st1.push(num);
            }
        }

        int sum = 0;
        while(!st1.empty()){
            int num = st1.top();
            st1.pop();
            sum += num;
        }

        return sum;

        
    }
};